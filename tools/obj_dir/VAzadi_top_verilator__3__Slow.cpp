// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAzadi_top_verilator.h for the primary calling header

#include "VAzadi_top_verilator.h"
#include "VAzadi_top_verilator__Syms.h"

#include "verilated_dpi.h"

void VAzadi_top_verilator::_settle__TOP__49(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_settle__TOP__49\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[0U] 
        = (IData)((((QData)((IData)((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                >> 1U))))) 
                    << 0x21U) | (((QData)((IData)((
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                      >> 1U)))) 
                                  << 1U) | (QData)((IData)(
                                                           (0U 
                                                            != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dfifo_rspready)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[1U] 
        = ((0xffffffe0U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
           | (IData)(((((QData)((IData)((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U))))) 
                        << 0x21U) | (((QData)((IData)(
                                                      ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                        << 0x1fU) 
                                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                          >> 1U)))) 
                                      << 1U) | (QData)((IData)(
                                                               (0U 
                                                                != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dfifo_rspready)))))) 
                      >> 0x20U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
        = ((0xffe00000U & ((IData)((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrequest))) 
                           << 0x15U)) | ((0x1c0000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                         | ((0x38000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                            | ((0x6000U 
                                                & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                               | ((0x1fe0U 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                                  | (0x1fU 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped 
        = ((6U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped)) 
           | (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                     ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                        >> 1U) : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped 
        = ((5U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped)) 
           | (2U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                      ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                         >> 2U) : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                                   >> 1U)) << 1U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped 
        = ((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped)) 
           | (4U & (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                     << 2U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[0U] 
        = (IData)((((QData)((IData)((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                >> 1U))))) 
                    << 0x21U) | (((QData)((IData)((
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                      >> 1U)))) 
                                  << 1U) | (QData)((IData)(
                                                           (0U 
                                                            != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[1U] 
        = ((0xffffffe0U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
           | (IData)(((((QData)((IData)((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U))))) 
                        << 0x21U) | (((QData)((IData)(
                                                      ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                        << 0x1fU) 
                                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                          >> 1U)))) 
                                      << 1U) | (QData)((IData)(
                                                               (0U 
                                                                != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready)))))) 
                      >> 0x20U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
        = ((0xffe00000U & ((IData)((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrequest))) 
                           << 0x15U)) | ((0x1c0000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                         | ((0x38000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                            | ((0x6000U 
                                                & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                               | ((0x1fe0U 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                                  | (0x1fU 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]))))));
}

void VAzadi_top_verilator::_settle__TOP__50(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_settle__TOP__50\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[0U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[0U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[0U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[1U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[1U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[1U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U] 
        = ((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U]) 
           | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U]) 
              | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U])));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U] 
        = ((0x1fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[0U] 
        = ((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[0U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = ((6U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_d)) 
           | (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = ((5U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_d)) 
           | (2U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
                    & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set)) 
                       << 1U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = ((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_d)) 
           | (4U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
                    & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set)) 
                       << 2U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[0U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[1U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[1U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
        = ((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U]) 
           | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U]) 
              | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U])));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
        = ((0x1fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U] 
        = ((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[0U]));
}

void VAzadi_top_verilator::_settle__TOP__51(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_settle__TOP__51\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int = 0U;
    if ((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int 
            = ((0xffffff00U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int) 
               | (0xffU & (- (IData)((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                            >> 1U))))));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int 
            = ((0xffff00ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int) 
               | (0xff00U & ((- (IData)((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                               >> 2U)))) 
                             << 8U)));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int 
            = ((0xff00ffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int) 
               | (0xff0000U & ((- (IData)((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                 >> 3U)))) 
                               << 0x10U)));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int 
            = ((0xffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int) 
               | (0xff000000U & ((- (IData)((1U & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                   >> 4U)))) 
                                 << 0x18U)));
    }
    if ((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack 
        = (1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                          >> 0x33U)) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (1U & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                   >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar)) 
                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o 
        = ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
            >> 0x15U) & ((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                       >> 0x12U))) 
                         | (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                         >> 0x12U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                  >> 0x15U) & ((0U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                             >> 0xdU))) 
                               | ((1U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                >> 0xdU)))
                                   ? (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                         >> 5U)) : 
                                  ((2U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                 >> 0xdU))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                        >> 5U)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__mask_chk 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                  >> 0x15U) & ((0U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                             >> 0xdU)))
                                ? (~ (IData)((0U != 
                                              (0xfU 
                                               & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                      >> 1U)) 
                                                  & (~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                           << 0x1bU) 
                                                          | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                             >> 5U))))))))))
                                : ((1U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                 >> 0xdU)))
                                    ? ((0x40U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U])
                                        ? (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                           << 0x1fU) 
                                                          | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                             >> 1U))))))
                                        : (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0xcU 
                                                       & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                           << 0x1fU) 
                                                          | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                             >> 1U)))))))
                                    : (2U == (3U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk 
        = ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
            >> 0x15U) & ((0U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                       >> 0xdU))) ? 
                         (0U != (0xfU & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                           << 0x1fU) 
                                          | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                             >> 1U)) 
                                         & ((IData)(1U) 
                                            << (3U 
                                                & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                      >> 5U)))))))
                          : ((1U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                           >> 0xdU)))
                              ? ((0x40U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U])
                                  ? (3U == (3U & ((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                     >> 3U))))
                                  : (3U == (3U & ((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                     >> 1U)))))
                              : ((2U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU))) 
                                 & (0xfU == (0xfU & 
                                             ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                 >> 1U))))))));
}

void VAzadi_top_verilator::_settle__TOP__52(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_settle__TOP__52\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int = 0U;
    if ((0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int 
            = ((0xffffff00U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int) 
               | (0xffU & (- (IData)((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                            >> 1U))))));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int 
            = ((0xffff00ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int) 
               | (0xff00U & ((- (IData)((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                               >> 2U)))) 
                             << 8U)));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int 
            = ((0xff00ffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int) 
               | (0xff0000U & ((- (IData)((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                 >> 3U)))) 
                               << 0x10U)));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int 
            = ((0xffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int) 
               | (0xff000000U & ((- (IData)((1U & (
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                   >> 4U)))) 
                                 << 0x18U)));
    }
    if ((0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack 
        = (1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                          >> 0x33U)) & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[0U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int = 0U;
    if ((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int 
            = ((0xffffff00U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int) 
               | (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                    >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o))
                   ? (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U] 
                                             >> 1U)))
                   : 0U));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int 
            = ((0xffff00ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int) 
               | ((((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                     >> 2U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o))
                    ? (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                 << 0x17U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U] 
                                              >> 9U)))
                    : 0U) << 8U));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int 
            = ((0xff00ffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int) 
               | ((((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                     >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o))
                    ? (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                 << 0xfU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U] 
                                             >> 0x11U)))
                    : 0U) << 0x10U));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int 
            = ((0xffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int) 
               | ((((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                     >> 4U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o))
                    ? (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                 << 7U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U] 
                                           >> 0x19U)))
                    : 0U) << 0x18U));
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (1U & (((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                   >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom)) 
                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__tlul_error 
        = (1U & (~ ((((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                    >> 0x12U))) | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                       >> 0x12U)))) 
                     | (4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                     >> 0x12U)))) & 
                    (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                     & (((4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                       >> 0x12U))) 
                         | (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                         >> 0x12U)))) 
                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
        = ((0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U])
            ? (0x3fffffffU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                               << 0x19U) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                            >> 7U)))
            : 0U);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we 
        = ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
            >> 0x15U) & ((0U == (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                       >> 0x12U))) 
                         | (1U == (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                         >> 0x12U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                  >> 0x15U) & ((0U == (3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                             >> 0xdU))) 
                               | ((1U == (3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                >> 0xdU)))
                                   ? (~ (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                         >> 5U)) : 
                                  ((2U == (3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                 >> 0xdU))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                        >> 5U)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk 
        = (1U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                  >> 0x15U) & ((0U == (3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                             >> 0xdU)))
                                ? (~ (IData)((0U != 
                                              (0xfU 
                                               & (((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                      >> 1U)) 
                                                  & (~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                           << 0x1bU) 
                                                          | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                             >> 5U))))))))))
                                : ((1U == (3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                 >> 0xdU)))
                                    ? ((0x40U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U])
                                        ? (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                           << 0x1fU) 
                                                          | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                             >> 1U))))))
                                        : (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0xcU 
                                                       & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                           << 0x1fU) 
                                                          | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                             >> 1U)))))))
                                    : (2U == (3U & 
                                              (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                               >> 0xdU)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk 
        = ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
            >> 0x15U) & ((0U == (3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                       >> 0xdU))) ? 
                         (0U != (0xfU & (((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                             >> 1U)) 
                                         & ((IData)(1U) 
                                            << (3U 
                                                & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                    << 0x1bU) 
                                                   | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                      >> 5U)))))))
                          : ((1U == (3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                           >> 0xdU)))
                              ? ((0x40U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U])
                                  ? (3U == (3U & ((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                   << 0x1dU) 
                                                  | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                     >> 3U))))
                                  : (3U == (3U & ((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                   << 0x1fU) 
                                                  | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                     >> 1U)))))
                              : ((2U == (3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                               >> 0xdU))) 
                                 & (0xfU == (0xfU & 
                                             ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                 >> 1U))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__req_i 
        = (1U & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                   >> 0x15U) & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))) 
                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__tlul_error))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int = 0U;
    if ((0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int 
            = ((0xffffff00U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int) 
               | (((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                    >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we))
                   ? (0xffU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[0U] 
                                             >> 1U)))
                   : 0U));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int 
            = ((0xffff00ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int) 
               | ((((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                     >> 2U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we))
                    ? (0xffU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                 << 0x17U) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[0U] 
                                              >> 9U)))
                    : 0U) << 8U));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int 
            = ((0xff00ffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int) 
               | ((((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                     >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we))
                    ? (0xffU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                 << 0xfU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[0U] 
                                             >> 0x11U)))
                    : 0U) << 0x10U));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int 
            = ((0xffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int) 
               | ((((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                     >> 4U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we))
                    ? (0xffU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                 << 7U) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[0U] 
                                           >> 0x19U)))
                    : 0U) << 0x18U));
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__error_internal 
        = (1U & ((((0U == (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                 >> 0x12U))) | (1U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                    >> 0x12U)))) 
                  & ((0xfU != (0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                        >> 1U)))) | 
                     (2U != (3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                   >> 0xdU))))) | (~ 
                                                   ((((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                           >> 0x12U))) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                             >> 0x12U)))) 
                                                     | (4U 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                            >> 0x12U)))) 
                                                    & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk) 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk)) 
                                                       & (((4U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                                >> 0x12U))) 
                                                           | (1U 
                                                              == 
                                                              (7U 
                                                               & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                                  >> 0x12U)))) 
                                                          | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__req_i) 
            & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o))) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req 
        = (1U & (((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                   >> 0x15U) & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))) 
                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__error_internal))));
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we) {
            if ((0x100U != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                      << 2U)))) {
                if ((0x104U != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                          << 2U)))) {
                    if ((0x108U != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                              << 2U)))) {
                        if ((0x10cU != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                  << 2U)))) {
                            if (((0x380U <= (0xffcU 
                                             & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                << 2U))) 
                                 & (0x387U >= (0xffcU 
                                               & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                  << 2U))))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i = 4U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req) 
            & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we))) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q;
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we) {
            if ((0x100U == (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                      << 2U)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned 
                    = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned) 
                       | ((IData)(1U) << (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int)));
            } else {
                if ((0x104U != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                          << 2U)))) {
                    if ((0x108U == (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                              << 2U)))) {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned 
                            = ((~ ((IData)(1U) << (1U 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int))) 
                               & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned));
                    }
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q;
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__clear_resumeack) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned 
            = ((~ ((IData)(1U) << (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel))) 
               & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned));
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we) {
            if ((0x100U != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                      << 2U)))) {
                if ((0x104U != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                          << 2U)))) {
                    if ((0x108U == (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                              << 2U)))) {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned 
                            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned) 
                               | ((IData)(1U) << (1U 
                                                  & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int)));
                    }
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_q;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata = 0ULL;
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req) {
        if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we)))) {
            if ((0x300U == (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                      << 2U)))) {
                if ((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__resumereq) 
                           >> (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int)))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d = 0x5040006fULL;
                }
                if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmdbusy) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d 
                        = ((((0U == (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                              >> 0x18U))) 
                             & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                   >> 0x11U))) & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                                  >> 0x12U))
                            ? 0x600006fULL : 0x380006fULL);
                }
            } else {
                if (((0x380U <= (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                           << 2U))) 
                     & (0x387U >= (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                             << 2U))))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d 
                        = (((QData)((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q 
                                             >> (0x20U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                      >> 1U)) 
                                                    << 5U))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q 
                                                         >> 
                                                         (0x20U 
                                                          & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                             << 4U))))));
                } else {
                    if (((0x360U <= (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                               << 2U))) 
                         & (0x37fU >= (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                 << 2U))))) {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d 
                            = (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[
                                                ((IData)(1U) 
                                                 + 
                                                 (6U 
                                                  & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                       >> 1U) 
                                                      - (IData)(4U)) 
                                                     << 1U)))])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[
                                                            (6U 
                                                             & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                                  >> 1U) 
                                                                 - (IData)(4U)) 
                                                                << 1U))])));
                    } else {
                        if (((0x338U <= (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                   << 2U))) 
                             & (0x35fU >= (0xffcU & 
                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                            << 2U))))) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d 
                                = (((QData)((IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xeU 
                                                      & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                           >> 1U) 
                                                          - (IData)(7U)) 
                                                         << 1U)))])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[
                                                                (0xeU 
                                                                 & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                                      >> 1U) 
                                                                     - (IData)(7U)) 
                                                                    << 1U))])));
                        } else {
                            if (((0x400U <= (0xffcU 
                                             & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                << 2U))) 
                                 & (0x7ffU >= (0xffcU 
                                               & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                  << 2U))))) {
                                if ((0U == (0xfffU 
                                            & ((0xff8U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                   << 2U)) 
                                               - (IData)(0x400U))))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                        = (((~ (0xffULL 
                                                << 
                                                (8U 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel 
                                                    << 3U)))) 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata) 
                                           | ((QData)((IData)(
                                                              (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resume) 
                                                                << 1U) 
                                                               | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__go)))) 
                                              << (8U 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel 
                                                     << 3U))));
                                }
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d 
                                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__data_valid = 0U;
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we) {
            if ((0x100U != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                      << 2U)))) {
                if ((0x104U != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                          << 2U)))) {
                    if ((0x108U != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                              << 2U)))) {
                        if ((0x10cU != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                  << 2U)))) {
                            if (((0x380U <= (0xffcU 
                                             & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                << 2U))) 
                                 & (0x387U >= (0xffcU 
                                               & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                  << 2U))))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__data_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q;
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we) {
            if ((0x100U != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                      << 2U)))) {
                if ((0x104U != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                          << 2U)))) {
                    if ((0x108U != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                              << 2U)))) {
                        if ((0x10cU != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                  << 2U)))) {
                            if (((0x380U <= (0xffcU 
                                             & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                << 2U))) 
                                 & (0x387U >= (0xffcU 
                                               & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                  << 2U))))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits 
                                    = ((0xffffffffffffff00ULL 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits) 
                                       | (IData)((IData)(
                                                         (0xffU 
                                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int))));
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits 
                                    = ((0xffffffffffff00ffULL 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits) 
                                       | ((QData)((IData)(
                                                          (0xffU 
                                                           & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int 
                                                              >> 8U)))) 
                                          << 8U));
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits 
                                    = ((0xffffffffff00ffffULL 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits) 
                                       | ((QData)((IData)(
                                                          (0xffU 
                                                           & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int 
                                                              >> 0x10U)))) 
                                          << 0x10U));
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits 
                                    = ((0xffffffff00ffffffULL 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits) 
                                       | ((QData)((IData)(
                                                          (0xffU 
                                                           & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int 
                                                              >> 0x18U)))) 
                                          << 0x18U));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__going = 0U;
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we) {
            if ((0x100U != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                      << 2U)))) {
                if ((0x104U == (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                          << 2U)))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__going = 1U;
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_aligned = 0U;
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we) {
            if ((0x100U == (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                      << 2U)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_aligned 
                    = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_aligned) 
                       | ((IData)(1U) << (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int)));
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__exception = 0U;
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we) {
            if ((0x100U != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                      << 2U)))) {
                if ((0x104U != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                          << 2U)))) {
                    if ((0x108U != (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                              << 2U)))) {
                        if ((0x10cU == (0xffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                  << 2U)))) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__exception = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q;
    if ((((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)) 
          & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty))) 
         & (2U == (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                            >> 0x22U)))))) {
                if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmdbusy)))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d 
                        = (((~ (0xffffffffULL << (0x20U 
                                                  & ((IData)(
                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                              >> 0x22U)) 
                                                     << 5U)))) 
                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d) 
                           | ((QData)((IData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o))) 
                              << (0x20U & ((IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                    >> 0x22U)) 
                                           << 5U))));
                }
            }
        }
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__data_valid) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_d 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q;
    if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q))) {
            if ((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_aligned) 
                       >> (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_d = 0U;
            }
        } else {
            if ((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q) 
                       >> (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_d = 0U;
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q))) {
            if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__going) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_d = 3U;
            }
        } else {
            if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                  & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q) 
                     >> (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel))) 
                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_d = 1U;
            }
            if ((1U & (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__resumereq) 
                          >> (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel)) 
                         & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q) 
                               >> (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel)))) 
                        & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq) 
                              >> (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel)))) 
                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q) 
                          >> (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel))))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_d = 2U;
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror_valid = 0U;
    if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q)))) {
            if ((1U & (~ (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                           & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q) 
                              >> (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel))) 
                          & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command)))))) {
                if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror_valid = 1U;
                }
            }
        }
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command) 
         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror_valid = 1U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__exception) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror_valid = 1U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror = 0U;
    if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q)))) {
            if ((1U & (~ (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                           & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q) 
                              >> (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel))) 
                          & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command)))))) {
                if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror = 4U;
                }
            }
        }
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command) 
         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror = 2U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__exception) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror = 3U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs = 0U;
    if ((((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)) 
          & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty))) 
         & (2U == (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                              >> 0x22U))))))) {
            if ((1U & (~ ((4U <= (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                   >> 0x22U)))) 
                          & (5U >= (0x7fU & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                     >> 0x22U)))))))) {
                if ((0x10U != (0x7fU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                >> 0x22U))))) {
                    if ((0x11U != (0x7fU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                    >> 0x22U))))) {
                        if ((0x12U != (0x7fU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                        >> 0x22U))))) {
                            if ((0x16U == (0x7fU & (IData)(
                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                            >> 0x22U))))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                    = (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o);
                                if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmdbusy) {
                                    if ((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                    }
                                } else {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d 
                                        = ((~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                               >> 8U)) 
                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q));
                                }
                            } else {
                                if ((0x17U == (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                          >> 0x22U))))) {
                                    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmdbusy) {
                                        if ((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                        }
                                    }
                                } else {
                                    if ((0x18U == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                              >> 0x22U))))) {
                                        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmdbusy) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
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
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror_valid) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror;
    }
}

void VAzadi_top_verilator::_eval_initial(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_eval_initial\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    IData/*31:0*/ __Vilp;
    // Body
    vlSymsp->TOP__gpio_reg_pkg._initial__TOP__gpio_reg_pkg__1(vlSymsp);
    __Vilp = 0U;
    while ((__Vilp <= 0x88U)) {
        vlTOPp->__Vm_traceActivity[__Vilp] = 1U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSymsp->TOP__rv_plic_reg_pkg._initial__TOP__rv_plic_reg_pkg__1(vlSymsp);
    vlSymsp->TOP__rv_timer_reg_pkg._initial__TOP__rv_timer_reg_pkg__1(vlSymsp);
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq 
        = vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq;
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk;
    vlTOPp->__Vclklast__TOP__reset_ni = vlTOPp->reset_ni;
    vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni 
        = vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
    vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n;
}

void VAzadi_top_verilator::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::final\n"); );
    // Variables
    // Begin mtask footprint all: 
    IData/*31:0*/ __Vilp;
    VAzadi_top_verilator__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_final_TOP(vlSymsp);
    __Vilp = 0U;
    while ((__Vilp <= 0x88U)) {
        vlTOPp->__Vm_traceActivity[__Vilp] = 1U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

void VAzadi_top_verilator::_eval_settle(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_eval_settle\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    IData/*31:0*/ __Vilp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    __Vilp = 0U;
    while ((__Vilp <= 0x88U)) {
        vlTOPp->__Vm_traceActivity[__Vilp] = 1U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__70(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__2(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__3(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__4(vlSymsp);
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__5(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__6(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__6(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__6(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__77(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__10(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__84(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__84(vlSymsp);
    vlTOPp->_settle__TOP__8(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__13(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__14(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__97(vlSymsp);
    vlTOPp->_settle__TOP__10(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__22(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__22(vlSymsp);
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__110(vlSymsp);
    vlTOPp->_settle__TOP__12(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__1(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__2(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__3(vlSymsp);
    vlTOPp->_settle__TOP__13(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__4(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__5(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__6(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__7(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__8(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__9(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__10(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__11(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__12(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__13(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__14(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__15(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__16(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__17(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__18(vlSymsp);
    vlTOPp->_settle__TOP__14(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__124(vlSymsp);
    vlTOPp->_settle__TOP__15(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__20(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__21(vlSymsp);
    vlTOPp->_settle__TOP__16(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__22(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__23(vlSymsp);
    vlTOPp->_settle__TOP__17(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__110(vlSymsp);
    vlTOPp->_settle__TOP__18(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__19(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__20(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__21(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__22(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__23(vlSymsp);
    vlTOPp->_settle__TOP__19(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__124(vlSymsp);
    vlTOPp->_settle__TOP__20(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__24(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__25(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__26(vlSymsp);
    vlTOPp->_settle__TOP__21(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__27(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__28(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__29(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__30(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__31(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__32(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__33(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__34(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__35(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__36(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__37(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__38(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__39(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__40(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__41(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__42(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__43(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__44(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__45(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__46(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__47(vlSymsp);
    vlTOPp->_settle__TOP__22(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__26(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__26(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__26(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__26(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__26(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__26(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__26(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__48(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__49(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__50(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__51(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__52(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__53(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__54(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__55(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__56(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__57(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__58(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__59(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__60(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__61(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__33(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__33(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__33(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__33(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__33(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__33(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__33(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__40(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__40(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__40(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__43(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__43(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__43(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__46(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__46(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__46(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__49(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__49(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__49(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__49(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__49(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__49(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__55(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__56(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__56(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__56(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__56(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__56(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__56(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__56(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__63(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__63(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__63(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__63(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__63(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__63(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__63(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__70(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__70(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__70(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__70(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__70(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__70(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__70(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__77(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__77(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__77(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__77(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__77(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__77(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__77(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__84(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__84(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__84(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__84(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__84(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__84(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__84(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__94(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__94(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__94(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__94(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__94(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__94(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__97(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__97(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__97(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__97(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__97(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__97(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__94(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__107(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__107(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__107(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__107(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__107(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__107(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__110(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__110(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__110(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__110(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__110(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__110(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__107(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__120(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__120(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__120(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__120(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__120(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__120(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__62(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__63(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__64(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__65(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__66(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__67(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__68(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__69(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__70(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__71(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__72(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__73(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__120(vlSymsp);
    vlTOPp->_settle__TOP__23(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__124(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__124(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__124(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__124(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__124(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__124(vlSymsp);
    vlTOPp->_settle__TOP__24(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__74(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__75(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__76(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__77(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__78(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__79(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__80(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__81(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__82(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__83(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__84(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__85(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__86(vlSymsp);
    vlTOPp->_settle__TOP__25(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__130(vlSymsp);
    vlTOPp->_settle__TOP__26(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__40(vlSymsp);
    vlTOPp->_settle__TOP__27(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__23(vlSymsp);
    vlTOPp->_settle__TOP__28(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__110(vlSymsp);
    vlTOPp->_settle__TOP__29(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__87(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__88(vlSymsp);
    vlTOPp->_settle__TOP__30(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__124(vlSymsp);
    vlTOPp->_settle__TOP__31(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__89(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__90(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__91(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__92(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__93(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__94(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__95(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__96(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__97(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__98(vlSymsp);
    vlTOPp->_settle__TOP__32(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__99(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__100(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__101(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__102(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__103(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__104(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__105(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__106(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__107(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__108(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__109(vlSymsp);
    vlTOPp->_settle__TOP__33(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__26(vlSymsp);
    vlTOPp->_settle__TOP__34(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__110(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__111(vlSymsp);
    vlTOPp->_settle__TOP__35(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__33(vlSymsp);
    vlTOPp->_settle__TOP__36(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__145(vlSymsp);
    vlTOPp->_settle__TOP__37(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__56(vlSymsp);
    vlTOPp->_settle__TOP__38(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__94(vlSymsp);
    vlTOPp->_settle__TOP__39(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__63(vlSymsp);
    vlTOPp->_settle__TOP__40(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__107(vlSymsp);
    vlTOPp->_settle__TOP__41(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__120(vlSymsp);
    vlTOPp->_settle__TOP__42(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__112(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__113(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__114(vlSymsp);
    vlTOPp->_settle__TOP__43(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__115(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__116(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__117(vlSymsp);
    vlTOPp->_settle__TOP__44(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__118(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__119(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__120(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__26(vlSymsp);
    vlTOPp->_settle__TOP__45(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__121(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__122(vlSymsp);
    vlTOPp->_settle__TOP__46(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__33(vlSymsp);
    vlTOPp->_settle__TOP__47(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__145(vlSymsp);
    vlTOPp->_settle__TOP__48(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__56(vlSymsp);
    vlTOPp->_settle__TOP__49(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__147(vlSymsp);
    vlTOPp->_settle__TOP__50(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__107(vlSymsp);
    vlTOPp->_settle__TOP__51(vlSymsp);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__120(vlSymsp);
    vlTOPp->_settle__TOP__52(vlSymsp);
}

void VAzadi_top_verilator::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset_ni = VL_RAND_RESET_I(1);
    gpio_i = VL_RAND_RESET_I(20);
    gpio_o = VL_RAND_RESET_I(20);
    Azadi_top_verilator__DOT__cio_jtag_tck = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__cio_jtag_tdi = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__cio_jtag_tms = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__cio_jtag_trst_n = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__cio_jtag_srst_n = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__uart_rx_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm);
    Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar);
    Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_gpio = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__gpio_intr = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__instr_valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__req_i = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__iccm_cntrl_data = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__jtag_rsp = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__instr_req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_c_id = VL_RAND_RESET_I(16);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err_plus2 = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_c_insn_id = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_id = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[__Vi0] = VL_RAND_RESET_Q(34);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_we_ex = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__icache_inval = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set_spec = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_mux_id = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause = VL_RAND_RESET_I(6);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_load_err = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_store_err = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ctrl_busy = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_busy_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__result_ex = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__mult_sel_ex = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_access = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_op = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_op_en = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_addr = VL_RAND_RESET_I(12);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_req_done = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_in_ready = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_resp_valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_req_int = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_wb = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_write_wb = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__outstanding_load_wb = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs = VL_RAND_RESET_I(18);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err[__Vi0] = VL_RAND_RESET_I(1);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__data_req_out = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_if = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_id = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_wb = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_restore_mret_id = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_restore_dret_id = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_cause = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_mtvec_init = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_mtval = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__debug_cause = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__debug_csr_save = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_instr_ret_wb = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_jump = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_branch = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_tbranch = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_load = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_store = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fetch_enable_q = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[__Vi0] = VL_RAND_RESET_I(6);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_q = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_q = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__stored_addr_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_d = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d);
    VL_RAND_RESET_W(96, Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_d = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_d = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__entry_en = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d = VL_RAND_RESET_I(31);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q = VL_RAND_RESET_I(31);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wb_exception = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_spec = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_ld_hz = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_mem = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_branch = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_jump = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_id = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multicycle_done = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = VL_RAND_RESET_I(6);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_alu = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[__Vi0] = VL_RAND_RESET_Q(34);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__csr_pipe_flush = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode = VL_RAND_RESET_I(7);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu = VL_RAND_RESET_I(7);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__stall = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_all = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_branch = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b = VL_RAND_RESET_Q(33);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = VL_RAND_RESET_Q(33);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext = VL_RAND_RESET_Q(34);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[__Vi0] = VL_RAND_RESET_Q(34);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[__Vi0] = VL_RAND_RESET_Q(34);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt = VL_RAND_RESET_I(6);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext = VL_RAND_RESET_Q(33);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum = VL_RAND_RESET_Q(34);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d = VL_RAND_RESET_Q(34);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d = VL_RAND_RESET_Q(34);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient = VL_RAND_RESET_Q(33);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = VL_RAND_RESET_I(5);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = VL_RAND_RESET_I(5);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a = VL_RAND_RESET_I(16);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b = VL_RAND_RESET_I(16);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q = VL_RAND_RESET_I(24);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_rdata_ext = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_misaligned_access = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[__Vi0] = VL_RAND_RESET_I(32);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q = VL_RAND_RESET_I(5);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d = VL_RAND_RESET_I(6);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_d = VL_RAND_RESET_I(18);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_en = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d = VL_RAND_RESET_I(6);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_en = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip = VL_RAND_RESET_I(18);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_d = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_en = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[__Vi0] = VL_RAND_RESET_I(8);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_d = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[__Vi0] = VL_RAND_RESET_Q(64);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[__Vi0] = VL_RAND_RESET_I(32);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d = VL_RAND_RESET_I(6);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wreq = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = VL_RAND_RESET_I(18);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg);
    VL_RAND_RESET_W(992, Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec = VL_RAND_RESET_I(31);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk2__DOT__source_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk2__DOT__source_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__testmode_i = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__resumereq = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__clear_resumeack = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror_valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmdbusy = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__data_valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel = VL_RAND_RESET_I(20);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbaddress_sba_csrs = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbaddress_write_valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbdata_read_valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbdata_write_valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sberror_valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sberror = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dmi_rsp = VL_RAND_RESET_Q(34);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__rvalid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w = VL_RAND_RESET_I(30);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__dap__tdo_oe_o = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__dap__td_o = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__resp_queue_data = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum0 = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum1 = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum2 = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum3 = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0 = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1 = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped2 = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1 = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2 = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat3 = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0 = VL_RAND_RESET_I(15);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1 = VL_RAND_RESET_I(10);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2 = VL_RAND_RESET_I(5);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_d = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d);
    VL_RAND_RESET_W(256, Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__autoexecdata_idx = VL_RAND_RESET_I(5);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_d = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(512, Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resume = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__go = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__going = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__exception = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rom_rdata = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_q = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_aligned = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__fwd_rom_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_d = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata = VL_RAND_RESET_Q(64);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i = 0;
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q = VL_RAND_RESET_I(5);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req = VL_RAND_RESET_Q(41);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req_valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__state_d = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__state_q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_d = VL_RAND_RESET_Q(41);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q = VL_RAND_RESET_Q(41);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__address_d = VL_RAND_RESET_I(7);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__address_q = VL_RAND_RESET_I(7);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__data_d = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__data_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_dmi_busy = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_d = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_q = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = VL_RAND_RESET_I(5);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q = VL_RAND_RESET_I(5);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d = VL_RAND_RESET_I(5);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q = VL_RAND_RESET_I(5);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o = VL_RAND_RESET_Q(41);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[__Vi0] = VL_RAND_RESET_Q(41);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_wptr__DOT__intq = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_sync = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[__Vi0] = VL_RAND_RESET_Q(34);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_rptr__DOT__intq = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__error_internal = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o = VL_RAND_RESET_I(13);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o = VL_RAND_RESET_I(5);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o = VL_RAND_RESET_Q(33);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__unnamedblk1__DOT__i = 0;
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage = VL_RAND_RESET_I(13);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage = VL_RAND_RESET_I(5);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__scanmode_i = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_1 = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_2 = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_3 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_4[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_11[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__DCCM__tl_h_o[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__DCCM__tl_h_i[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__DEBUG_ROM__tl_h_o[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__DEBUG_ROM__tl_h_i[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_0__tl_h_o[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_0__tl_h_i[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_1__tl_h_o[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_1__tl_h_i[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_2__tl_h_o[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_2__tl_h_i[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_3__tl_h_o[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_3__tl_h_i[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_4__tl_h_o[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_4__tl_h_i[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__PLIC__tl_h_o[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__PLIC__tl_h_i[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__XBAR_PERI__tl_h_o[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__XBAR_PERI__tl_h_i[__Vi0]);
    }
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding = VL_RAND_RESET_I(17);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__dev_select_outstanding = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__hold_all_requests = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__accept_t_req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__accept_t_rsp = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_i[__Vi0] = VL_RAND_RESET_Q(52);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__hfifo_reqready = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_opcode = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_source = VL_RAND_RESET_I(8);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_size = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_req_pending = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_rsp_pending = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding = VL_RAND_RESET_I(17);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__dev_select_outstanding = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__hold_all_requests = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_rsp = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i[__Vi0] = VL_RAND_RESET_Q(52);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_p = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__hfifo_reqready = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(88, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_opcode = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_source = VL_RAND_RESET_I(8);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_size = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding = VL_RAND_RESET_I(17);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__dev_select_outstanding = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__hold_all_requests = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_rsp = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i[__Vi0] = VL_RAND_RESET_Q(52);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__hfifo_reqready = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(88, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_opcode = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_source = VL_RAND_RESET_I(8);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_size = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i[__Vi0] = VL_RAND_RESET_Q(52);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrequest = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hgrant = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[__Vi0]);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i = 0;
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i[__Vi0] = VL_RAND_RESET_Q(52);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrequest = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hgrant = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hfifo_rspvalid = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dfifo_rspready = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i);
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[__Vi0]);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i = 0;
    Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__req_i = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__addr_i = VL_RAND_RESET_I(12);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__we_i = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rvalid_o = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rdata_o = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_we = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__tlul_error = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wdata_int = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rdata_tlword = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o = VL_RAND_RESET_I(13);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o = VL_RAND_RESET_I(5);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o = VL_RAND_RESET_Q(33);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i = 0;
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT____Vlvbound1 = VL_RAND_RESET_I(13);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage = VL_RAND_RESET_I(20);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT____Vlvbound1 = VL_RAND_RESET_I(5);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage);
    Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT____Vlvbound1 = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(155, Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__reg2hw);
    VL_RAND_RESET_W(68, Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__hw2reg);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__prescaler[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__step[__Vi0] = VL_RAND_RESET_I(8);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__tick = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__mtime_d[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__mtime[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        for (int __Vi1=0; __Vi1<1; ++__Vi1) {
            Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__mtimecmp[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        for (int __Vi1=0; __Vi1<1; ++__Vi1) {
            Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__mtimecmp_update[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__intr_out = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT____Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtimecmp[__Vi0] = VL_RAND_RESET_Q(64);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__reg_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__wr_err = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__reg_rdata_next = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__tl_reg_d2h = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__ctrl_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__cfg0_prescale_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__cfg0_step_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__timer_v_lower0_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__timer_v_upper0_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__compare_lower0_0_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__compare_upper0_0_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__intr_enable0_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__intr_state0_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_ctrl__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_cfg0_prescale__q = VL_RAND_RESET_I(12);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_cfg0_step__q = VL_RAND_RESET_I(8);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_timer_v_lower0__q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_timer_v_upper0__q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_compare_lower0_0__q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_compare_lower0_0__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_compare_upper0_0__q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_compare_upper0_0__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_intr_enable0__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_intr_state0__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__addr_hit = VL_RAND_RESET_I(9);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rdata = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__error = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__reqid = VL_RAND_RESET_I(8);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__reqsz = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rspop = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rd_req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__wr_req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_ctrl__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_cfg0_prescale__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_cfg0_step__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_timer_v_lower0__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_timer_v_upper0__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_intr_enable0__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_intr_state0__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_intr_state0__DOT__wr_data = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__gen_harts__BRA__0__KET____DOT__u_intr_hw__DOT__new_event = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__gen_harts__BRA__0__KET____DOT__u_core__DOT__tick_count = VL_RAND_RESET_I(12);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart0_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c0_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__scanmode_i = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_us_d2h = VL_RAND_RESET_Q(52);
    for (int __Vi0=0; __Vi0<13; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<13; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[__Vi0] = VL_RAND_RESET_Q(52);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__dev_sel_s1n_14 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<13; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[__Vi0] = VL_RAND_RESET_Q(52);
    }
    for (int __Vi0=0; __Vi0<13; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[__Vi0]);
    }
    VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding = VL_RAND_RESET_I(17);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__hold_all_requests = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_rsp = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<14; ++__Vi0) {
        VL_RAND_RESET_W(86, Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<14; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[__Vi0] = VL_RAND_RESET_Q(52);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__hfifo_reqready = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(88, Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_opcode = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_source = VL_RAND_RESET_I(8);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_size = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_req_pending = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(459, Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw);
    VL_RAND_RESET_W(246, Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_en_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__intr_hw__DOT__new_event = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_state_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_enable_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_rising_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_falling_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__ctrl_en_input_filter_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit = VL_RAND_RESET_I(15);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rdata = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__error = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__err_internal = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqid = VL_RAND_RESET_I(8);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqsz = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rspop = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rd_req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__wr_req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_state__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_state__DOT__wr_data = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_enable__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d = VL_RAND_RESET_I(4);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_ns = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q0 = VL_RAND_RESET_I(8);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q1 = VL_RAND_RESET_I(8);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q2 = VL_RAND_RESET_I(8);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q3 = VL_RAND_RESET_I(8);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q = VL_RAND_RESET_I(14);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_d = VL_RAND_RESET_I(14);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data_R = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count = VL_RAND_RESET_I(16);
    Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte = VL_RAND_RESET_I(8);
    Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__iccm__DOT__wdata = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__iccm__DOT__iccm__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__tlul_error = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o = VL_RAND_RESET_I(13);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o = VL_RAND_RESET_I(5);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o = VL_RAND_RESET_Q(33);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__unnamedblk1__DOT__i = 0;
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__mask_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage = VL_RAND_RESET_I(26);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1 = VL_RAND_RESET_I(13);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage = VL_RAND_RESET_I(10);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1 = VL_RAND_RESET_I(5);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage);
    Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT____Vlvbound1 = VL_RAND_RESET_Q(33);
    Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__irq_id_o[__Vi0] = VL_RAND_RESET_I(5);
    }
    VL_RAND_RESET_W(172, Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw);
    VL_RAND_RESET_W(70, Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__le = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ip = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ie[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__claim_id[__Vi0] = VL_RAND_RESET_I(5);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__claim = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__complete_id[__Vi0] = VL_RAND_RESET_I(5);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__complete = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__cc_id[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__prio[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__threshold[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[__Vi0] = VL_RAND_RESET_I(3);
    }
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__ia = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__set = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__src_q = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_re = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__wr_err = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h = VL_RAND_RESET_Q(52);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio0_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio1_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio2_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio3_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio4_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio5_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio6_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio8_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio9_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio10_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio11_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio12_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio13_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio14_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio15_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio16_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio17_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio18_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio19_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio20_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio21_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio22_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio23_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio24_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio25_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio26_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio27_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio28_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio29_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio30_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio31_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_qs = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__msip0_we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit = VL_RAND_RESET_Q(38);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata = VL_RAND_RESET_I(32);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid = VL_RAND_RESET_I(8);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz = VL_RAND_RESET_I(2);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_15__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_16__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_18__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_19__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_20__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_30__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio0__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio1__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio3__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio5__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio6__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd = VL_RAND_RESET_I(3);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio8__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio10__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio21__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio25__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio26__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_2__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_16__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_18__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_19__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_msip0__DOT__qe = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree = VL_RAND_RESET_Q(63);
    VL_RAND_RESET_W(378, Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree);
    VL_RAND_RESET_W(189, Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q = VL_RAND_RESET_I(6);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel = VL_RAND_RESET_I(1);
    Azadi_top_verilator__DOT__u_jtagdpi__DOT__ctx = 0;
    __Vfunc_load__16__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_load__16__size = VL_RAND_RESET_I(3);
    __Vfunc_float_load__19__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_float_load__19__size = VL_RAND_RESET_I(3);
    __Vfunc_float_load__19__dest = VL_RAND_RESET_I(5);
    __Vfunc_load__20__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_load__20__size = VL_RAND_RESET_I(3);
    __Vfunc_load__20__dest = VL_RAND_RESET_I(5);
    __Vfunc_load__22__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_load__22__size = VL_RAND_RESET_I(3);
    __Vfunc_csrw__23__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_csrw__23__csr = VL_RAND_RESET_I(12);
    __Vfunc_store__29__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_store__29__size = VL_RAND_RESET_I(3);
    __Vfunc_float_store__31__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_float_store__31__size = VL_RAND_RESET_I(3);
    __Vfunc_float_store__31__src = VL_RAND_RESET_I(5);
    __Vfunc_store__32__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_store__32__size = VL_RAND_RESET_I(3);
    __Vfunc_store__32__src = VL_RAND_RESET_I(5);
    __Vfunc_csrr__34__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_csrr__34__csr = VL_RAND_RESET_I(12);
    __Vfunc_store__35__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_store__35__size = VL_RAND_RESET_I(3);
    __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__42__Vfuncout = VL_RAND_RESET_I(3);
    __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__42__grayval = VL_RAND_RESET_I(3);
    __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__42__dec_tmp = VL_RAND_RESET_I(2);
    __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__42__dec_tmp_sub = VL_RAND_RESET_I(2);
    __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__48__Vfuncout = VL_RAND_RESET_I(3);
    __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__48__grayval = VL_RAND_RESET_I(3);
    __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__48__dec_tmp = VL_RAND_RESET_I(2);
    __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__48__dec_tmp_sub = VL_RAND_RESET_I(2);
    __Vtableidx1 = 0;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[0] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[1] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[2] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[3] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[4] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[5] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[6] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[7] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[8] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[9] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[10] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[11] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[12] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[13] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[14] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[15] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[16] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[17] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[18] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[19] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[20] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[21] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[22] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[23] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[24] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[25] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[26] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[27] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[28] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[29] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[30] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[31] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[32] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[33] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[34] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[35] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[36] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[37] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[38] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[39] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[40] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[41] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[42] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[43] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[44] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[45] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[46] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[47] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[48] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[49] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[50] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[51] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[52] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[53] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[54] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[55] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[56] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[57] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[58] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[59] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[60] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[61] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[62] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[63] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[0] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[1] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[2] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[3] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[4] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[5] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[6] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[7] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[8] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[9] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[10] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[11] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[12] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[13] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[14] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[15] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[16] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[17] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[18] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[19] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[20] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[21] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[22] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[23] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[24] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[25] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[26] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[27] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[28] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[29] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[30] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[31] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[32] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[33] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[34] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[35] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[36] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[37] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[38] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[39] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[40] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[41] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[42] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[43] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[44] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[45] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[46] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[47] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[48] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[49] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[50] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[51] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[52] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[53] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[54] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[55] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[56] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[57] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[58] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[59] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[60] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[61] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[62] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[63] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[0] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[1] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[2] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[3] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[4] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[5] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[6] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[7] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[8] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[9] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[10] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[11] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[12] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[13] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[14] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[15] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[16] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[17] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[18] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[19] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[20] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[21] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[22] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[23] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[24] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[25] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[26] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[27] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[28] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[29] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[30] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[31] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[32] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[33] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[34] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[35] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[36] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[37] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[38] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[39] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[40] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[41] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[42] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[43] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[44] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[45] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[46] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[47] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[48] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[49] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[50] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[51] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[52] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[53] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[54] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[55] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[56] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[57] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[58] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[59] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[60] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[61] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[62] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[63] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[0] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[1] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[2] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[3] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[4] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[5] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[6] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[7] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[8] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[9] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[10] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[11] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[12] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[13] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[14] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[15] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[16] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[17] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[18] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[19] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[20] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[21] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[22] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[23] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[24] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[25] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[26] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[27] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[28] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[29] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[30] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[31] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[32] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[33] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[34] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[35] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[36] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[37] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[38] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[39] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[40] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[41] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[42] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[43] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[44] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[45] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[46] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[47] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[48] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[49] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[50] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[51] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[52] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[53] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[54] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[55] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[56] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[57] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[58] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[59] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[60] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[61] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[62] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[63] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[0] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[1] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[2] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[3] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[4] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[5] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[6] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[7] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[8] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[9] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[10] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[11] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[12] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[13] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[14] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[15] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[16] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[17] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[18] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[19] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[20] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[21] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[22] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[23] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[24] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[25] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[26] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[27] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[28] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[29] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[30] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[31] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[32] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[33] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[34] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[35] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[36] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[37] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[38] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[39] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[40] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[41] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[42] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[43] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[44] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[45] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[46] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[47] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[48] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[49] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[50] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[51] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[52] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[53] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[54] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[55] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[56] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[57] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[58] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[59] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[60] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[61] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[62] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[63] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[0] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[1] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[2] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[3] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[4] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[5] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[6] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[7] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[8] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[9] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[10] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[11] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[12] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[13] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[14] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[15] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[16] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[17] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[18] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[19] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[20] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[21] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[22] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[23] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[24] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[25] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[26] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[27] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[28] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[29] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[30] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[31] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[32] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[33] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[34] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[35] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[36] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[37] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[38] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[39] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[40] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[41] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[42] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[43] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[44] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[45] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[46] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[47] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[48] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[49] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[50] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[51] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[52] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[53] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[54] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[55] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[56] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[57] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[58] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[59] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[60] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[61] = 0U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[62] = 1U;
    __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[63] = 0U;
    __Vtableidx2 = 0;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[0] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[1] = 1U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[2] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[3] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[4] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[5] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[6] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[7] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[8] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[9] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[10] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[11] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[12] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[13] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[14] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[15] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[16] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[17] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[18] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[19] = 1U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[20] = 1U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[21] = 1U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[22] = 1U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[23] = 1U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[24] = 1U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[25] = 1U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[26] = 1U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[27] = 1U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[28] = 1U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[29] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[30] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[31] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[32] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[33] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[34] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[35] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[36] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[37] = 1U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[38] = 1U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[39] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[40] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[41] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[42] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[43] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[44] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[45] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[46] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[47] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[48] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[49] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[50] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[51] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[52] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[53] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[54] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[55] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[56] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[57] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[58] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[59] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[60] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[61] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[62] = 0U;
    __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[63] = 0U;
    __Vtableidx3 = 0;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[0] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[1] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[2] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[3] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[4] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[5] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[6] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[7] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[8] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[9] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[10] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[11] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[12] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[13] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[14] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[15] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[16] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[17] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[18] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[19] = 1U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[20] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[21] = 1U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[22] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[23] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[24] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[25] = 1U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[26] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[27] = 1U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[28] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[29] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[30] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[31] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[32] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[33] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[34] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[35] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[36] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[37] = 1U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[38] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[39] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[40] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[41] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[42] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[43] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[44] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[45] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[46] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[47] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[48] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[49] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[50] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[51] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[52] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[53] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[54] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[55] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[56] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[57] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[58] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[59] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[60] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[61] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[62] = 0U;
    __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[63] = 0U;
    __Vtableidx4 = 0;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[0] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[1] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[2] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[3] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[4] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[5] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[6] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[7] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[8] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[9] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[10] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[11] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[12] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[13] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[14] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[15] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[16] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[17] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[18] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[19] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[20] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[21] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[22] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[23] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[24] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[25] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[26] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[27] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[28] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[29] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[30] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[31] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[32] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[33] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[34] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[35] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[36] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[37] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[38] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[39] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[40] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[41] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[42] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[43] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[44] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[45] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[46] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[47] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[48] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[49] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[50] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[51] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[52] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[53] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[54] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[55] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[56] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[57] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[58] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[59] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[60] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[61] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[62] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[63] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[64] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[65] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[66] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[67] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[68] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[69] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[70] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[71] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[72] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[73] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[74] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[75] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[76] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[77] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[78] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[79] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[80] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[81] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[82] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[83] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[84] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[85] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[86] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[87] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[88] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[89] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[90] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[91] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[92] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[93] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[94] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[95] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[96] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[97] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[98] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[99] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[100] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[101] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[102] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[103] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[104] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[105] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[106] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[107] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[108] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[109] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[110] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[111] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[112] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[113] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[114] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[115] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[116] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[117] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[118] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[119] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[120] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[121] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[122] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[123] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[124] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[125] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[126] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[127] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[128] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[129] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[130] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[131] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[132] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[133] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[134] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[135] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[136] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[137] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[138] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[139] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[140] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[141] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[142] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[143] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[144] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[145] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[146] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[147] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[148] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[149] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[150] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[151] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[152] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[153] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[154] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[155] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[156] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[157] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[158] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[159] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[160] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[161] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[162] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[163] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[164] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[165] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[166] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[167] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[168] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[169] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[170] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[171] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[172] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[173] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[174] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[175] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[176] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[177] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[178] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[179] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[180] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[181] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[182] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[183] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[184] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[185] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[186] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[187] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[188] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[189] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[190] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[191] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[192] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[193] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[194] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[195] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[196] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[197] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[198] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[199] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[200] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[201] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[202] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[203] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[204] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[205] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[206] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[207] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[208] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[209] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[210] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[211] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[212] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[213] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[214] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[215] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[216] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[217] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[218] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[219] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[220] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[221] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[222] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[223] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[224] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[225] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[226] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[227] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[228] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[229] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[230] = 0U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[231] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[232] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[233] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[234] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[235] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[236] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[237] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[238] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[239] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[240] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[241] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[242] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[243] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[244] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[245] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[246] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[247] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[248] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[249] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[250] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[251] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[252] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[253] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[254] = 1U;
    __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[255] = 1U;
    __Vtableidx5 = 0;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[0] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[1] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[2] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[3] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[4] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[5] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[6] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[7] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[8] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[9] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[10] = 1U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[11] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[12] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[13] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[14] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[15] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[16] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[17] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[18] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[19] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[20] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[21] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[22] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[23] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[24] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[25] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[26] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[27] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[28] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[29] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[30] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[31] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[32] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[33] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[34] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[35] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[36] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[37] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[38] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[39] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[40] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[41] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[42] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[43] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[44] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[45] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[46] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[47] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[48] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[49] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[50] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[51] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[52] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[53] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[54] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[55] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[56] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[57] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[58] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[59] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[60] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[61] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[62] = 0U;
    __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[63] = 0U;
    __Vtableidx6 = 0;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[0] = 0xfU;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[1] = 3U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[2] = 1U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[3] = 1U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[4] = 0xeU;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[5] = 6U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[6] = 2U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[7] = 2U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[8] = 0xcU;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[9] = 0xcU;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[10] = 4U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[11] = 4U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[12] = 8U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[13] = 8U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[14] = 8U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[15] = 8U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[16] = 0U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[17] = 1U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[18] = 1U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[19] = 1U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[20] = 1U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[21] = 1U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[22] = 2U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[23] = 2U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[24] = 3U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[25] = 1U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[26] = 4U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[27] = 4U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[28] = 7U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[29] = 1U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[30] = 8U;
    __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[31] = 8U;
    __Vtableidx7 = 0;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[0] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[1] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[2] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[3] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[4] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[5] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[6] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[7] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[8] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[9] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[10] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[11] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[12] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[13] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[14] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[15] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[16] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[17] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[18] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[19] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[20] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[21] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[22] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[23] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[24] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[25] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[26] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[27] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[28] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[29] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[30] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[31] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[0] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[1] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[2] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[3] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[4] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[5] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[6] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[7] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[8] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[9] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[10] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[11] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[12] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[13] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[14] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[15] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[16] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[17] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[18] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[19] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[20] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[21] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[22] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[23] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[24] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[25] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[26] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[27] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[28] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[29] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[30] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[31] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[0] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[1] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[2] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[3] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[4] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[5] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[6] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[7] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[8] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[9] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[10] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[11] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[12] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[13] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[14] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[15] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[16] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[17] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[18] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[19] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[20] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[21] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[22] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[23] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[24] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[25] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[26] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[27] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[28] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[29] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[30] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[31] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[0] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[1] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[2] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[3] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[4] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[5] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[6] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[7] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[8] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[9] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[10] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[11] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[12] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[13] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[14] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[15] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[16] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[17] = 0U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[18] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[19] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[20] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[21] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[22] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[23] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[24] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[25] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[26] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[27] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[28] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[29] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[30] = 1U;
    __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[31] = 1U;
    __Vtableidx8 = 0;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[0] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[1] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[2] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[3] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[4] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[5] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[6] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[7] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[8] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[9] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[10] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[11] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[12] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[13] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[14] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[15] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[16] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[17] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[18] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[19] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[20] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[21] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[22] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[23] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[24] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[25] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[26] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[27] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[28] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[29] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[30] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[31] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[0] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[1] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[2] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[3] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[4] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[5] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[6] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[7] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[8] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[9] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[10] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[11] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[12] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[13] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[14] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[15] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[16] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[17] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[18] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[19] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[20] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[21] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[22] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[23] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[24] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[25] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[26] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[27] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[28] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[29] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[30] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[31] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[0] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[1] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[2] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[3] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[4] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[5] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[6] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[7] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[8] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[9] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[10] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[11] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[12] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[13] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[14] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[15] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[16] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[17] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[18] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[19] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[20] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[21] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[22] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[23] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[24] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[25] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[26] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[27] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[28] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[29] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[30] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[31] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[0] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[1] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[2] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[3] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[4] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[5] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[6] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[7] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[8] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[9] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[10] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[11] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[12] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[13] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[14] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[15] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[16] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[17] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[18] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[19] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[20] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[21] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[22] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[23] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[24] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[25] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[26] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[27] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[28] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[29] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[30] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[31] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[0] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[1] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[2] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[3] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[4] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[5] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[6] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[7] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[8] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[9] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[10] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[11] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[12] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[13] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[14] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[15] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[16] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[17] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[18] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[19] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[20] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[21] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[22] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[23] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[24] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[25] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[26] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[27] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[28] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[29] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[30] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[31] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[0] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[1] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[2] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[3] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[4] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[5] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[6] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[7] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[8] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[9] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[10] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[11] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[12] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[13] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[14] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[15] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[16] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[17] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[18] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[19] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[20] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[21] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[22] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[23] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[24] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[25] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[26] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[27] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[28] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[29] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[30] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[31] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[0] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[1] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[2] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[3] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[4] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[5] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[6] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[7] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[8] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[9] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[10] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[11] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[12] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[13] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[14] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[15] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[16] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[17] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[18] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[19] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[20] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[21] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[22] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[23] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[24] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[25] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[26] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[27] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[28] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[29] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[30] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[31] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[0] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[1] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[2] = 3U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[3] = 4U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[4] = 4U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[5] = 6U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[6] = 6U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[7] = 4U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[8] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[9] = 0xaU;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[10] = 0xbU;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[11] = 0xbU;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[12] = 0xdU;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[13] = 0xdU;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[14] = 0xbU;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[15] = 1U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[16] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[17] = 2U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[18] = 9U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[19] = 5U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[20] = 5U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[21] = 8U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[22] = 7U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[23] = 8U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[24] = 2U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[25] = 0U;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[26] = 0xcU;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[27] = 0xcU;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[28] = 0xfU;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[29] = 0xeU;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[30] = 0xfU;
    __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[31] = 2U;
    __Vtableidx9 = 0;
    __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[0] = 0U;
    __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[1] = 0U;
    __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[2] = 1U;
    __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[3] = 1U;
    __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[4] = 2U;
    __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[5] = 2U;
    __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[6] = 2U;
    __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[7] = 2U;
    __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[0] = 3U;
    __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[1] = 3U;
    __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[2] = 3U;
    __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[3] = 3U;
    __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[4] = 3U;
    __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[5] = 3U;
    __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[6] = 3U;
    __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[7] = 3U;
    __Vtableidx10 = 0;
    __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[0] = 0U;
    __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[1] = 0U;
    __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[2] = 1U;
    __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[3] = 1U;
    __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[4] = 2U;
    __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[5] = 2U;
    __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[6] = 2U;
    __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[7] = 2U;
    __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[0] = 3U;
    __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[1] = 3U;
    __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[2] = 3U;
    __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[3] = 3U;
    __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[4] = 3U;
    __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[5] = 3U;
    __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[6] = 3U;
    __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[7] = 3U;
    __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0 = VL_RAND_RESET_Q(34);
    __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0;
    __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 0;
    __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2 = VL_RAND_RESET_Q(34);
    __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0;
    __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 0;
    __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0 = 0;
    __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0 = VL_RAND_RESET_Q(34);
    __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0 = 0;
    __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v0 = 0;
    __Vdlyvlsb__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v0 = 0;
    __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v0 = 0;
    __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v1 = 0;
    __Vdlyvlsb__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v1 = 0;
    __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v1 = 0;
    __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v2 = 0;
    __Vdlyvlsb__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v2 = 0;
    __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v2 = 0;
    __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v3 = 0;
    __Vdlyvlsb__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v3 = 0;
    __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v3 = 0;
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q = VL_RAND_RESET_I(32);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr = VL_RAND_RESET_I(3);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr = VL_RAND_RESET_I(3);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr = VL_RAND_RESET_I(3);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr = VL_RAND_RESET_I(3);
    __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0 = 0;
    __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0 = VL_RAND_RESET_Q(41);
    __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0 = 0;
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_rsp_pending = VL_RAND_RESET_I(1);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending = VL_RAND_RESET_I(1);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending = VL_RAND_RESET_I(1);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(3);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(3);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(3);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding = VL_RAND_RESET_I(17);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_q = VL_RAND_RESET_I(32);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_en_q = VL_RAND_RESET_I(32);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(2);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(2);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = VL_RAND_RESET_I(2);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__ia = VL_RAND_RESET_I(32);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count = VL_RAND_RESET_I(2);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = VL_RAND_RESET_I(3);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count = VL_RAND_RESET_I(16);
    __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index = VL_RAND_RESET_I(3);
    __VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq = VL_RAND_RESET_I(1);
    __VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni = VL_RAND_RESET_I(1);
    __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req = VL_RAND_RESET_I(1);
    __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = VL_RAND_RESET_I(18);
    __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni = VL_RAND_RESET_I(1);
    __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q = VL_RAND_RESET_I(32);
    __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req = VL_RAND_RESET_I(3);
    __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req = VL_RAND_RESET_I(3);
    __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq = VL_RAND_RESET_I(1);
    __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree = VL_RAND_RESET_Q(63);
    VL_RAND_RESET_W(378, __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree);
    VL_RAND_RESET_W(189, __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree);
    __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req = VL_RAND_RESET_I(2);
    __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req = VL_RAND_RESET_I(2);
    __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__dfifo_rspready = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<137; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
