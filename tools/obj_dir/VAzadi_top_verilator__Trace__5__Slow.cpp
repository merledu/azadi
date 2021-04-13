// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAzadi_top_verilator__Syms.h"


void VAzadi_top_verilator::traceFullSub4(void* userp, VerilatedVcd* tracep) {
    VAzadi_top_verilator__Syms* __restrict vlSymsp = static_cast<VAzadi_top_verilator__Syms*>(userp);
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+14777,((1U & ((0x4000000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x1aU)))));
        tracep->fullBit(oldp+14778,((1U & (vlTOPp->gpio_i 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+14779,((1U & ((0x8000000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x1bU)))));
        tracep->fullBit(oldp+14780,((1U & (vlTOPp->gpio_i 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+14781,((1U & ((0x10000000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x1cU)))));
        tracep->fullBit(oldp+14782,((1U & (vlTOPp->gpio_i 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+14783,((1U & ((0x20000000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x1dU)))));
        tracep->fullBit(oldp+14784,((1U & (vlTOPp->gpio_i 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+14785,((1U & ((0x40000000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x1eU)))));
        tracep->fullBit(oldp+14786,((1U & (vlTOPp->gpio_i 
                                           >> 0x1fU))));
        tracep->fullBit(oldp+14787,((1U & ((0x80000000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x1fU)))));
        tracep->fullCData(oldp+14788,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count),2);
        tracep->fullBit(oldp+14789,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data_R));
        tracep->fullBit(oldp+14790,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data));
        tracep->fullIData(oldp+14791,(((IData)(vlTOPp->reset_ni)
                                        ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data
                                        : 0U)),32);
        tracep->fullBit(oldp+14792,((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                            >> 0x15U) 
                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar)))));
        tracep->fullBit(oldp+14793,((((1U == (3U & 
                                              ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))) 
                                      & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xaU))) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack))));
        tracep->fullBit(oldp+14794,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid));
        tracep->fullBit(oldp+14795,((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                           & ((1U == 
                                               (3U 
                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xbU)))
                                               ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                  | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                     >> 0xaU))
                                               : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                  >> 0xaU))))));
        tracep->fullIData(oldp+14796,((((IData)(vlTOPp->reset_ni)
                                         ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data
                                         : 0U) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask)),32);
        tracep->fullCData(oldp+14797,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                        ? 2U : (3U 
                                                & (((1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(2U) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->fullBit(oldp+14798,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack))));
        tracep->fullSData(oldp+14799,(((0x19U >= (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                        ? (0x1fffU 
                                           & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                              >> (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                        : 0U)),13);
        tracep->fullCData(oldp+14800,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                        ? 2U : (3U 
                                                & (((1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(2U) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->fullBit(oldp+14801,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid))));
        tracep->fullCData(oldp+14802,(((9U >= (0xfU 
                                               & ((IData)(5U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                        ? (0x1fU & 
                                           ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                            >> (0xfU 
                                                & ((IData)(5U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                        : 0U)),5);
        tracep->fullCData(oldp+14803,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                        ? 2U : (3U 
                                                & (((1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(2U) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->fullBit(oldp+14804,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                     & (((1U == (3U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                    >> 0xbU))) 
                                         & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xaU))) 
                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack)))));
        tracep->fullQData(oldp+14805,(((0x41U >= (0x7fU 
                                                  & ((IData)(0x21U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                        ? (0x1ffffffffULL 
                                           & (((0U 
                                                == 
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
                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                        : 0ULL)),33);
        tracep->fullQData(oldp+14807,((0x1ffffffffULL 
                                       & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid))
                                           ? ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword)) 
                                              << 1U)
                                           : ((0x41U 
                                               >= (0x7fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                               ? ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x21U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
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
                                               : 0ULL)))),33);
        tracep->fullBit(oldp+14809,(((IData)(vlTOPp->reset_ni) 
                                     & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                           >> 1U)))));
        tracep->fullBit(oldp+14810,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_q));
        tracep->fullIData(oldp+14811,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_vector)),32);
        tracep->fullBit(oldp+14812,((1U & ((IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x33U)) 
                                           & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U]))));
        tracep->fullQData(oldp+14813,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree),63);
        tracep->fullBit(oldp+14815,((((7U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
                                      > vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__threshold
                                      [0U]) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))));
        tracep->fullCData(oldp+14816,(((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))
                                        ? (0x3fU & 
                                           vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])
                                        : 0U)),6);
        tracep->fullBit(oldp+14817,((1U & ((IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x33U)) 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [0U][0U]))));
        tracep->fullBit(oldp+14818,((1U & (((0x80000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                             ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[2U]
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_watermark_we)) 
                                              | (~ 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 1U)))))));
        tracep->fullBit(oldp+14819,((1U & (((0x20000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                             ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                >> 0x1eU)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_watermark_we)) 
                                              | (~ 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 2U)))))));
        tracep->fullBit(oldp+14820,((1U & (((0x8000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                             ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                >> 0x1cU)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_empty_we)) 
                                              | (~ 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 3U)))))));
        tracep->fullBit(oldp+14821,((1U & (((0x2000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                             ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                >> 0x1aU)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_overflow_we)) 
                                              | (~ 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 4U)))))));
        tracep->fullBit(oldp+14822,((1U & (((0x800000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                             ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                >> 0x18U)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_frame_err_we)) 
                                              | (~ 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 5U)))))));
        tracep->fullBit(oldp+14823,((1U & (((0x200000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                             ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                >> 0x16U)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_break_err_we)) 
                                              | (~ 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 6U)))))));
        tracep->fullBit(oldp+14824,((1U & (((0x80000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                             ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                >> 0x14U)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_timeout_we)) 
                                              | (~ 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 7U)))))));
        tracep->fullBit(oldp+14825,((1U & (((0x20000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                             ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                >> 0x12U)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_parity_err_we)) 
                                              | (~ 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 8U)))))));
        tracep->fullCData(oldp+14826,((7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we)
                                              ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][1U] 
                                                  << 0x1dU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [0U][0U] 
                                                    >> 3U))
                                              : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U]))),3);
        tracep->fullCData(oldp+14827,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txilvl_we)
                                              ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][1U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [0U][0U] 
                                                    >> 6U))
                                              : ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                  << 3U) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[0U] 
                                                    >> 0x1dU))))),2);
        tracep->fullCData(oldp+14828,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                        ? 0U : (0xffU 
                                                & (((0U 
                                                     == 
                                                     (0x18U 
                                                      & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         << 3U)))
                                                     ? 0U
                                                     : 
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                     ((IData)(1U) 
                                                      + 
                                                      (7U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          >> 2U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x18U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          << 3U))))) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                      (7U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          >> 2U))] 
                                                      >> 
                                                      (0x18U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          << 3U))))))),8);
        tracep->fullIData(oldp+14829,(((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U])
                                        ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout)
                                            ? 0U : 
                                           (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                                             != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                                             ? 0U : 
                                            ((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth))
                                              ? 0U : 
                                             (0xffffffU 
                                              & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)
                                                  : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)))))
                                        : 0U)),24);
        tracep->fullBit(oldp+14830,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                                     != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q))));
        tracep->fullBit(oldp+14831,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
                                     & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err)) 
                                        | (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data))))));
        tracep->fullBit(oldp+14832,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_d) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_prev_q)))));
        tracep->fullBit(oldp+14833,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_prev_q)))));
        tracep->fullBit(oldp+14834,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                      & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle_q))) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle))));
        tracep->fullBit(oldp+14835,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__full))));
        tracep->fullBit(oldp+14836,(((0x4000000U & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])
                                      ? (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync) 
                                          & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                             | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2))) 
                                         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2)))
                                      : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync))));
        tracep->fullBit(oldp+14837,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync) 
                                      & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                         | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2))) 
                                     | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2)))));
        tracep->fullCData(oldp+14838,((0xffU & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      << 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U))))) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (7U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U))] 
                                                   >> 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U)))))),8);
        tracep->fullCData(oldp+14839,((0xffU & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      << 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U))))) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (7U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U))] 
                                                   >> 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U)))))),8);
        tracep->fullBit(oldp+14840,((1U & ((IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x33U)) 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [7U][0U]))));
        tracep->fullBit(oldp+14841,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_watermark_d) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_watermark_q)))));
        tracep->fullBit(oldp+14842,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_watermark_d) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_watermark_q)))));
        tracep->fullBit(oldp+14843,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_wvalid) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_wready)))));
        tracep->fullBit(oldp+14844,((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                            >> 4U) 
                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__tx_fifo_wready))))));
        tracep->fullBit(oldp+14845,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__target_idle)) 
                                     & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_high_cnt 
                                        > vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[0U]))));
        tracep->fullCData(oldp+14846,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                        ? 0U : (0xffU 
                                                & (((0U 
                                                     == 
                                                     (0x18U 
                                                      & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         << 3U)))
                                                     ? 0U
                                                     : 
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                     ((IData)(1U) 
                                                      + 
                                                      (7U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          >> 2U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x18U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          << 3U))))) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                      (7U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          >> 2U))] 
                                                      >> 
                                                      (0x18U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          << 3U))))))),8);
        tracep->fullCData(oldp+14847,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__full)
                                        ? 0x20U : (0x3fU 
                                                   & (((1U 
                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                           >> 5U)) 
                                                       == 
                                                       (1U 
                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                           >> 5U)))
                                                       ? 
                                                      ((0x1fU 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                       - 
                                                       (0x1fU 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                       : 
                                                      (((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                       + 
                                                       (0x1fU 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),6);
        tracep->fullBit(oldp+14848,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_rvalid) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_rready)) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        tracep->fullSData(oldp+14849,(((0x19fU >= (0x1ffU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                        ? (0x1fffU 
                                           & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                ? 0U
                                                : (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xdU) 
                                                         * 
                                                         (0x1fU 
                                                          & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__storage[
                                                 (0xfU 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                        : 0U)),13);
        tracep->fullSData(oldp+14850,((0x1fffU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_wvalid))
                                                   ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_wdata)
                                                   : 
                                                  ((0x19fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xdU) 
                                                          * 
                                                          (0x1fU 
                                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                      ? 0U
                                                      : 
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__storage[
                                                      ((IData)(1U) 
                                                       + 
                                                       (0xfU 
                                                        & (((IData)(0xdU) 
                                                            * 
                                                            (0x1fU 
                                                             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                           >> 5U)))] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0xdU) 
                                                           * 
                                                           (0x1fU 
                                                            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                    | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__storage[
                                                       (0xfU 
                                                        & (((IData)(0xdU) 
                                                            * 
                                                            (0x1fU 
                                                             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0xdU) 
                                                           * 
                                                           (0x1fU 
                                                            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                                    : 0U)))),13);
        tracep->fullBit(oldp+14851,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+14852,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_fifo_rvalid) 
                                      & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[9U] 
                                         >> 0x1aU)) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        tracep->fullCData(oldp+14853,((0xffU & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      << 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U))))) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (7U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U))] 
                                                   >> 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U)))))),8);
        tracep->fullBit(oldp+14854,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__tx_fifo_rvalid) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__tx_fifo_rready)) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        tracep->fullCData(oldp+14855,((0xffU & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      << 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U))))) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (7U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U))] 
                                                   >> 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U)))))),8);
        tracep->fullCData(oldp+14856,((0xffU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                                    >> 4U))
                                                 ? 
                                                ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U] 
                                                  << 0x1bU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                                    >> 5U))
                                                 : 
                                                (((0U 
                                                   == 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U)))
                                                   ? 0U
                                                   : 
                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   ((IData)(1U) 
                                                    + 
                                                    (7U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U))))) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                    (7U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U))] 
                                                    >> 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U))))))),8);
        tracep->fullBit(oldp+14857,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__acq_fifo_rvalid) 
                                      & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                          >> 0x10U) 
                                         & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                            >> 0xdU))) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        tracep->fullSData(oldp+14858,(((0x13fU >= (0x1ffU 
                                                   & ((IData)(0xaU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                        ? (0x3ffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xaU) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                              ? 0U : 
                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__storage[
                                              ((IData)(1U) 
                                               + (0xfU 
                                                  & (((IData)(0xaU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xaU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__storage[
                                               (0xfU 
                                                & (((IData)(0xaU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xaU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                        : 0U)),10);
        tracep->fullBit(oldp+14859,(((0x7fU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__input_byte) 
                                                >> 1U) 
                                               & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[3U] 
                                                   << 0x19U) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U] 
                                                     >> 7U)))) 
                                     == (0x7fU & ((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[3U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U] 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+14860,(((0x7fU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__input_byte) 
                                                >> 1U) 
                                               & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U] 
                                                   << 7U) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                                     >> 0x19U)))) 
                                     == (0x7fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U]))));
        tracep->fullCData(oldp+14861,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+14862,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hfifo_rspvalid),2);
        tracep->fullBit(oldp+14863,(1U));
        tracep->fullIData(oldp+14864,(0x1388U),28);
        tracep->fullIData(oldp+14865,(0x4f5484dU),32);
        tracep->fullBit(oldp+14866,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__uart_rx_i));
        tracep->fullBit(oldp+14867,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0_scl_in));
        tracep->fullBit(oldp+14868,(0U));
        tracep->fullBit(oldp+14869,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0_sda_in));
        tracep->fullIData(oldp+14870,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__gpio_intr),32);
        tracep->fullBit(oldp+14871,(0U));
        tracep->fullIData(oldp+14872,(0U),32);
        tracep->fullIData(oldp+14873,(0x28U),32);
        tracep->fullIData(oldp+14874,(2U),32);
        tracep->fullIData(oldp+14875,(0U),32);
        tracep->fullIData(oldp+14876,(0U),32);
        tracep->fullBit(oldp+14877,(1U));
        tracep->fullIData(oldp+14878,(2U),32);
        tracep->fullIData(oldp+14879,(0x10040800U),32);
        tracep->fullIData(oldp+14880,(0x10040808U),32);
        tracep->fullIData(oldp+14881,(0U),32);
        tracep->fullIData(oldp+14882,(0x20000000U),32);
        tracep->fullSData(oldp+14883,(0U),15);
        tracep->fullIData(oldp+14884,(2U),32);
        tracep->fullIData(oldp+14885,(0U),32);
        tracep->fullIData(oldp+14886,(0U),32);
        tracep->fullIData(oldp+14887,(1U),32);
        tracep->fullIData(oldp+14888,(1U),32);
        tracep->fullIData(oldp+14889,(0x20U),32);
        tracep->fullBit(oldp+14890,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_id_fpu));
        tracep->fullBit(oldp+14891,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_we));
        tracep->fullBit(oldp+14892,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_swap_oprnds));
        tracep->fullCData(oldp+14893,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operation),4);
        tracep->fullIData(oldp+14894,(0U),32);
        tracep->fullCData(oldp+14895,(0U),8);
        tracep->fullIData(oldp+14896,(3U),32);
        tracep->fullIData(oldp+14897,(2U),32);
        tracep->fullIData(oldp+14898,(0U),32);
        tracep->fullIData(oldp+14899,(2U),32);
        tracep->fullBit(oldp+14900,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_floating_type_o));
        tracep->fullCData(oldp+14901,(2U),2);
        tracep->fullCData(oldp+14902,(0U),3);
        tracep->fullIData(oldp+14903,(2U),32);
        tracep->fullIData(oldp+14904,(0U),32);
        tracep->fullIData(oldp+14905,(2U),32);
        tracep->fullIData(oldp+14906,(2U),32);
        tracep->fullIData(oldp+14907,(0U),32);
        tracep->fullCData(oldp+14908,(0U),2);
        tracep->fullIData(oldp+14909,(0U),32);
        tracep->fullCData(oldp+14910,(0U),6);
        tracep->fullIData(oldp+14911,(2U),32);
        tracep->fullIData(oldp+14912,(2U),32);
        tracep->fullIData(oldp+14913,(2U),32);
        tracep->fullBit(oldp+14914,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                           [0U] >> 5U))));
        tracep->fullCData(oldp+14915,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                             [0U] >> 3U))),2);
        tracep->fullBit(oldp+14916,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                           [0U] >> 2U))));
        tracep->fullBit(oldp+14917,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                           [0U] >> 1U))));
        tracep->fullBit(oldp+14918,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                     [0U])));
        tracep->fullBit(oldp+14919,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                           [1U] >> 5U))));
        tracep->fullCData(oldp+14920,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                             [1U] >> 3U))),2);
        tracep->fullBit(oldp+14921,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                           [1U] >> 2U))));
        tracep->fullBit(oldp+14922,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                           [1U] >> 1U))));
        tracep->fullBit(oldp+14923,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                     [1U])));
        tracep->fullQData(oldp+14924,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[0]),34);
        tracep->fullQData(oldp+14926,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[1]),34);
        tracep->fullIData(oldp+14928,(0x4010110cU),32);
        tracep->fullBit(oldp+14929,(0U));
        tracep->fullBit(oldp+14930,(1U));
        tracep->fullCData(oldp+14931,(0U),2);
        tracep->fullBit(oldp+14932,(0U));
        tracep->fullBit(oldp+14933,(0U));
        tracep->fullCData(oldp+14934,(4U),4);
        tracep->fullSData(oldp+14935,(0U),12);
        tracep->fullBit(oldp+14936,(0U));
        tracep->fullBit(oldp+14937,(0U));
        tracep->fullBit(oldp+14938,(0U));
        tracep->fullBit(oldp+14939,(0U));
        tracep->fullBit(oldp+14940,(0U));
        tracep->fullBit(oldp+14941,(0U));
        tracep->fullBit(oldp+14942,(0U));
        tracep->fullCData(oldp+14943,(0U),3);
        tracep->fullBit(oldp+14944,(0U));
        tracep->fullBit(oldp+14945,(0U));
        tracep->fullBit(oldp+14946,(0U));
        tracep->fullBit(oldp+14947,(0U));
        tracep->fullCData(oldp+14948,(3U),2);
        tracep->fullBit(oldp+14949,(1U));
        tracep->fullIData(oldp+14950,(0x20U),32);
        tracep->fullIData(oldp+14951,(0x1fU),32);
        tracep->fullIData(oldp+14952,(6U),32);
        tracep->fullCData(oldp+14953,(0x10U),6);
        tracep->fullIData(oldp+14954,(0U),32);
        tracep->fullIData(oldp+14955,(0x12U),32);
        tracep->fullIData(oldp+14956,(0U),18);
        tracep->fullCData(oldp+14957,(0U),6);
        tracep->fullIData(oldp+14958,(1U),32);
        tracep->fullIData(oldp+14959,(0x40000003U),32);
        tracep->fullCData(oldp+14960,(4U),3);
        tracep->fullIData(oldp+14961,(0x40U),32);
        tracep->fullBit(oldp+14962,(0U));
        tracep->fullIData(oldp+14963,(0x20U),32);
        tracep->fullBit(oldp+14964,(0U));
        tracep->fullBit(oldp+14965,(1U));
        tracep->fullCData(oldp+14966,(0x10U),5);
        tracep->fullCData(oldp+14967,(2U),4);
        tracep->fullCData(oldp+14968,(1U),2);
        tracep->fullCData(oldp+14969,(2U),2);
        tracep->fullCData(oldp+14970,(0U),2);
        tracep->fullCData(oldp+14971,(2U),2);
        tracep->fullIData(oldp+14972,(4U),32);
        tracep->fullIData(oldp+14973,(5U),32);
        tracep->fullIData(oldp+14974,(0x40U),32);
        tracep->fullIData(oldp+14975,(0x10U),32);
        tracep->fullIData(oldp+14976,(8U),32);
        tracep->fullBit(oldp+14977,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        tracep->fullCData(oldp+14978,(0U),2);
        tracep->fullCData(oldp+14979,(0x10U),5);
        tracep->fullCData(oldp+14980,(2U),4);
        tracep->fullCData(oldp+14981,(0U),2);
        tracep->fullCData(oldp+14982,(0U),3);
        tracep->fullBit(oldp+14983,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        tracep->fullIData(oldp+14984,(7U),32);
        tracep->fullIData(oldp+14985,(9U),32);
        tracep->fullBit(oldp+14986,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        tracep->fullIData(oldp+14987,(0xbU),32);
        tracep->fullBit(oldp+14988,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        tracep->fullIData(oldp+14989,(0xdU),32);
        tracep->fullCData(oldp+14990,(0U),2);
        tracep->fullCData(oldp+14991,(0U),3);
        tracep->fullCData(oldp+14992,(0U),2);
        tracep->fullBit(oldp+14993,(1U));
        tracep->fullBit(oldp+14994,(1U));
        tracep->fullIData(oldp+14995,(1U),32);
        tracep->fullSData(oldp+14996,(1U),10);
        tracep->fullBit(oldp+14997,(1U));
        tracep->fullBit(oldp+14998,(0U));
        tracep->fullIData(oldp+14999,(3U),32);
        tracep->fullCData(oldp+15000,(0U),3);
        tracep->fullCData(oldp+15001,(0U),2);
        tracep->fullBit(oldp+15002,(1U));
        tracep->fullBit(oldp+15003,(1U));
        tracep->fullIData(oldp+15004,(0x17U),32);
        tracep->fullIData(oldp+15005,(0x7fU),32);
        tracep->fullIData(oldp+15006,(0x18U),32);
        tracep->fullIData(oldp+15007,(0x33U),32);
        tracep->fullIData(oldp+15008,(0xaU),32);
        tracep->fullBit(oldp+15009,(0U));
        tracep->fullCData(oldp+15010,(0U),3);
        tracep->fullCData(oldp+15011,(1U),2);
        tracep->fullCData(oldp+15012,(0x10U),5);
        tracep->fullCData(oldp+15013,(2U),4);
        tracep->fullCData(oldp+15014,(0U),2);
        tracep->fullBit(oldp+15015,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        tracep->fullBit(oldp+15016,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        tracep->fullBit(oldp+15017,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        tracep->fullCData(oldp+15018,(1U),2);
        tracep->fullCData(oldp+15019,(0x10U),5);
        tracep->fullCData(oldp+15020,(2U),4);
        tracep->fullCData(oldp+15021,(0U),2);
        tracep->fullBit(oldp+15022,(1U));
        tracep->fullCData(oldp+15023,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__target_aux_q),3);
        tracep->fullIData(oldp+15024,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_slice_result),32);
        tracep->fullIData(oldp+15025,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_d),32);
        tracep->fullIData(oldp+15026,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_q),32);
        tracep->fullIData(oldp+15027,(5U),32);
        tracep->fullCData(oldp+15028,(0x10U),5);
        tracep->fullCData(oldp+15029,(2U),4);
        tracep->fullCData(oldp+15030,(0x10U),5);
        tracep->fullCData(oldp+15031,(2U),4);
        tracep->fullCData(oldp+15032,(0x10U),5);
        tracep->fullCData(oldp+15033,(0x10U),5);
        tracep->fullCData(oldp+15034,(0U),2);
        tracep->fullBit(oldp+15035,(1U));
        tracep->fullIData(oldp+15036,(0x35U),32);
        tracep->fullQData(oldp+15037,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_58),58);
        tracep->fullQData(oldp+15039,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_59),59);
        tracep->fullQData(oldp+15041,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_60),60);
        tracep->fullQData(oldp+15043,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_20),62);
        tracep->fullQData(oldp+15045,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q3),58);
        tracep->fullQData(oldp+15047,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3),58);
        tracep->fullBit(oldp+15049,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_carry_DO));
        tracep->fullQData(oldp+15050,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fou_iteration_cell_div_a_D),58);
        tracep->fullQData(oldp+15052,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fou_iteration_cell_div_b_D),58);
        tracep->fullBit(oldp+15054,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sel_b_for_fou_S));
        tracep->fullQData(oldp+15055,(0x3ffffffffffffffULL),58);
        tracep->fullIData(oldp+15057,(0x3aU),32);
        tracep->fullCData(oldp+15058,(2U),2);
        tracep->fullCData(oldp+15059,(0x10U),5);
        tracep->fullCData(oldp+15060,(2U),4);
        tracep->fullCData(oldp+15061,(0U),2);
        tracep->fullBit(oldp+15062,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        tracep->fullBit(oldp+15063,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        tracep->fullBit(oldp+15064,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        tracep->fullCData(oldp+15065,(2U),2);
        tracep->fullCData(oldp+15066,(0U),3);
        tracep->fullCData(oldp+15067,(0U),2);
        tracep->fullBit(oldp+15068,(1U));
        tracep->fullBit(oldp+15069,(1U));
        tracep->fullBit(oldp+15070,(0U));
        tracep->fullIData(oldp+15071,(2U),32);
        tracep->fullCData(oldp+15072,(0U),3);
        tracep->fullCData(oldp+15073,(0U),2);
        tracep->fullBit(oldp+15074,(1U));
        tracep->fullBit(oldp+15075,(1U));
        tracep->fullBit(oldp+15076,(0U));
        tracep->fullBit(oldp+15077,(0U));
        tracep->fullBit(oldp+15078,(0U));
        tracep->fullBit(oldp+15079,(0U));
        tracep->fullBit(oldp+15080,(0U));
        tracep->fullBit(oldp+15081,(0U));
        tracep->fullCData(oldp+15082,(0U),3);
        tracep->fullCData(oldp+15083,(3U),2);
        tracep->fullCData(oldp+15084,(0x10U),5);
        tracep->fullCData(oldp+15085,(2U),4);
        tracep->fullCData(oldp+15086,(0U),2);
        tracep->fullBit(oldp+15087,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        tracep->fullBit(oldp+15088,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        tracep->fullBit(oldp+15089,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        tracep->fullCData(oldp+15090,(3U),2);
        tracep->fullCData(oldp+15091,(0x10U),5);
        tracep->fullCData(oldp+15092,(2U),4);
        tracep->fullCData(oldp+15093,(0U),2);
        tracep->fullBit(oldp+15094,(1U));
        tracep->fullBit(oldp+15095,(1U));
        tracep->fullCData(oldp+15096,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__target_aux_q),3);
        tracep->fullIData(oldp+15097,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_slice_result),32);
        tracep->fullCData(oldp+15098,(0x10U),5);
        tracep->fullCData(oldp+15099,(2U),4);
        tracep->fullCData(oldp+15100,(0x10U),5);
        tracep->fullCData(oldp+15101,(2U),4);
        tracep->fullCData(oldp+15102,(0x10U),5);
        tracep->fullCData(oldp+15103,(0x10U),5);
        tracep->fullCData(oldp+15104,(2U),4);
        tracep->fullCData(oldp+15105,(0U),2);
        tracep->fullBit(oldp+15106,(1U));
        tracep->fullBit(oldp+15107,(1U));
        tracep->fullIData(oldp+15108,(8U),32);
        tracep->fullIData(oldp+15109,(0x17U),32);
        tracep->fullIData(oldp+15110,(0x28U),32);
        tracep->fullBit(oldp+15111,(1U));
        tracep->fullIData(oldp+15112,(0x34U),32);
        tracep->fullCData(oldp+15113,(0xffU),8);
        tracep->fullIData(oldp+15114,(0x400000U),23);
        tracep->fullSData(oldp+15115,(0x7ffU),11);
        tracep->fullQData(oldp+15116,(0x8000000000000ULL),52);
        tracep->fullCData(oldp+15118,(0x1fU),5);
        tracep->fullSData(oldp+15119,(0x200U),10);
        tracep->fullCData(oldp+15120,(2U),2);
        tracep->fullCData(oldp+15121,(0x40U),7);
        tracep->fullCData(oldp+15122,(0U),3);
        tracep->fullIData(oldp+15123,(1U),32);
        tracep->fullCData(oldp+15124,(0xfU),4);
        tracep->fullIData(oldp+15125,(2U),32);
        tracep->fullIData(oldp+15126,(1U),32);
        tracep->fullBit(oldp+15127,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__testmode_i));
        tracep->fullIData(oldp+15128,(0x20U),32);
        tracep->fullBit(oldp+15129,(1U));
        tracep->fullCData(oldp+15130,(0U),8);
        tracep->fullCData(oldp+15131,(2U),4);
        tracep->fullCData(oldp+15132,(0U),3);
        tracep->fullBit(oldp+15133,(1U));
        tracep->fullCData(oldp+15134,(2U),4);
        tracep->fullSData(oldp+15135,(0x380U),12);
        tracep->fullIData(oldp+15136,(0x1eU),32);
        tracep->fullCData(oldp+15137,(5U),8);
        tracep->fullCData(oldp+15138,(0x27U),8);
        tracep->fullIData(oldp+15139,(0xcU),32);
        tracep->fullCData(oldp+15140,(0xaU),5);
        tracep->fullSData(oldp+15141,(0x380U),12);
        tracep->fullSData(oldp+15142,(0x387U),12);
        tracep->fullSData(oldp+15143,(0x360U),12);
        tracep->fullSData(oldp+15144,(0x37fU),12);
        tracep->fullSData(oldp+15145,(0x338U),12);
        tracep->fullSData(oldp+15146,(0x35fU),12);
        tracep->fullSData(oldp+15147,(0x300U),12);
        tracep->fullSData(oldp+15148,(0x400U),12);
        tracep->fullSData(oldp+15149,(0x7ffU),12);
        tracep->fullSData(oldp+15150,(0x100U),12);
        tracep->fullSData(oldp+15151,(0x104U),12);
        tracep->fullSData(oldp+15152,(0x108U),12);
        tracep->fullSData(oldp+15153,(0x10cU),12);
        tracep->fullIData(oldp+15154,(0x13U),32);
        tracep->fullQData(oldp+15155,(0x7c0006f00c0006fULL),64);
        tracep->fullQData(oldp+15157,(0xff0000f04c0006fULL),64);
        tracep->fullQData(oldp+15159,(0x7b3510737b241073ULL),64);
        tracep->fullQData(oldp+15161,(0xc5551300000517ULL),64);
        tracep->fullQData(oldp+15163,(0xf140247300c51513ULL),64);
        tracep->fullQData(oldp+15165,(0xa4043310852023ULL),64);
        tracep->fullQData(oldp+15167,(0x14741340044403ULL),64);
        tracep->fullQData(oldp+15169,(0xf140247302041c63ULL),64);
        tracep->fullQData(oldp+15171,(0x4004440300a40433ULL),64);
        tracep->fullQData(oldp+15173,(0xfa041ce300247413ULL),64);
        tracep->fullQData(oldp+15175,(0x517fd5ff06fULL),64);
        tracep->fullQData(oldp+15177,(0xc5151300c55513ULL),64);
        tracep->fullQData(oldp+15179,(0x7b30257310052623ULL),64);
        tracep->fullQData(oldp+15181,(0x1000737b202473ULL),64);
        tracep->fullQData(oldp+15183,(0x7b30257310052223ULL),64);
        tracep->fullQData(oldp+15185,(0xa85ff06f7b202473ULL),64);
        tracep->fullQData(oldp+15187,(0x10852423f1402473ULL),64);
        tracep->fullQData(oldp+15189,(0x7b2024737b302573ULL),64);
        tracep->fullQData(oldp+15191,(0x7b200073ULL),64);
        tracep->fullIData(oldp+15193,(0x29U),32);
        tracep->fullCData(oldp+15194,(3U),2);
        tracep->fullIData(oldp+15195,(3U),32);
        tracep->fullIData(oldp+15196,(0x22U),32);
        tracep->fullIData(oldp+15197,(0x1eU),32);
        tracep->fullIData(oldp+15198,(4U),32);
        tracep->fullIData(oldp+15199,(5U),32);
        tracep->fullIData(oldp+15200,(0xdU),32);
        tracep->fullIData(oldp+15201,(0x21U),32);
        tracep->fullIData(oldp+15202,(4U),32);
        tracep->fullIData(oldp+15203,(8U),32);
        tracep->fullIData(oldp+15204,(0x21U),32);
        tracep->fullBit(oldp+15205,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+15206,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+15207,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+15208,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+15209,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+15210,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+15211,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+15212,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+15213,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i))));
        tracep->fullBit(oldp+15214,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+15215,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+15216,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+15217,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+15218,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+15219,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+15220,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+15221,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+15222,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i))));
        tracep->fullBit(oldp+15223,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+15224,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+15225,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+15226,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+15227,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+15228,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+15229,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+15230,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+15231,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i))));
        tracep->fullBit(oldp+15232,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+15233,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+15234,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+15235,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+15236,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+15237,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+15238,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+15239,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+15240,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i))));
        tracep->fullBit(oldp+15241,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+15242,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+15243,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+15244,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+15245,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+15246,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+15247,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+15248,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+15249,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i))));
        tracep->fullBit(oldp+15250,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__scanmode_i));
        tracep->fullCData(oldp+15251,(7U),3);
        tracep->fullCData(oldp+15252,(0U),4);
        tracep->fullSData(oldp+15253,(0U),12);
        tracep->fullIData(oldp+15254,(0x10000U),32);
        tracep->fullIData(oldp+15255,(0x11U),32);
        tracep->fullIData(oldp+15256,(0x56U),32);
        tracep->fullSData(oldp+15257,(0x7ffU),11);
        tracep->fullQData(oldp+15258,(0ULL),44);
        tracep->fullIData(oldp+15260,(0xbU),32);
        tracep->fullIData(oldp+15261,(0x58U),32);
        tracep->fullSData(oldp+15262,(0x3ffU),10);
        tracep->fullQData(oldp+15263,(0ULL),40);
        tracep->fullIData(oldp+15265,(0xaU),32);
        tracep->fullCData(oldp+15266,(1U),2);
        tracep->fullIData(oldp+15267,(0x55U),32);
        tracep->fullBit(oldp+15268,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i))));
        tracep->fullBit(oldp+15269,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+15270,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullIData(oldp+15272,(0xcU),32);
        tracep->fullIData(oldp+15273,(9U),32);
        tracep->fullSData(oldp+15274,(0x5257U),16);
        tracep->fullBit(oldp+15275,(0U));
        tracep->fullSData(oldp+15276,(0U),12);
        tracep->fullCData(oldp+15277,(1U),8);
        tracep->fullIData(oldp+15278,(0xffffffffU),32);
        tracep->fullIData(oldp+15279,(0x573143U),24);
        tracep->fullBit(oldp+15280,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+15281,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+15282,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+15283,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+15284,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+15285,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+15286,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+15287,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+15288,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i))));
        tracep->fullBit(oldp+15289,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+15290,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+15291,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+15292,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+15293,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+15294,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+15295,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+15296,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+15297,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i))));
        tracep->fullBit(oldp+15298,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+15299,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+15300,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+15301,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+15302,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+15303,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+15304,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+15305,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+15306,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i))));
        tracep->fullBit(oldp+15307,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+15308,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+15309,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+15310,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+15311,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+15312,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+15313,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+15314,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+15315,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i))));
        tracep->fullBit(oldp+15316,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+15317,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+15318,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+15319,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+15320,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+15321,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+15322,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+15323,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+15324,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i))));
        tracep->fullBit(oldp+15325,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+15326,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+15327,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+15328,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+15329,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+15330,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+15331,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+15332,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+15333,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i))));
        tracep->fullBit(oldp+15334,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+15335,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+15336,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+15337,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+15338,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+15339,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+15340,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+15341,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+15342,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i))));
        tracep->fullBit(oldp+15343,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+15344,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+15345,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+15346,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+15347,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+15348,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+15349,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+15350,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+15351,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i))));
        tracep->fullBit(oldp+15352,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+15353,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+15354,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+15355,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+15356,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+15357,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+15358,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+15359,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+15360,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i))));
        tracep->fullBit(oldp+15361,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+15362,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+15363,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+15364,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+15365,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+15366,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+15367,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+15368,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+15369,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i))));
        tracep->fullBit(oldp+15370,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__scanmode_i));
        tracep->fullSData(oldp+15371,(0x1fffU),13);
        tracep->fullQData(oldp+15372,(0ULL),52);
        tracep->fullIData(oldp+15374,(0xdU),32);
        tracep->fullIData(oldp+15375,(6U),32);
        tracep->fullSData(oldp+15376,(0x524fU),16);
        tracep->fullSData(oldp+15377,(0x57U),16);
        tracep->fullCData(oldp+15378,(1U),3);
        tracep->fullCData(oldp+15379,(2U),3);
        tracep->fullCData(oldp+15380,(3U),3);
        tracep->fullCData(oldp+15381,(4U),3);
        tracep->fullIData(oldp+15382,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm__DOT__wdata),32);
        tracep->fullCData(oldp+15383,(0U),4);
        tracep->fullIData(oldp+15384,(7U),32);
        tracep->fullBit(oldp+15385,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_qs));
        tracep->fullBit(oldp+15386,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we));
        tracep->fullCData(oldp+15387,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd),3);
        tracep->fullCData(oldp+15388,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we)
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd)
                                        : 0U)),3);
        tracep->fullBit(oldp+15389,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d));
        tracep->fullIData(oldp+15390,(0U),32);
        tracep->fullIData(oldp+15391,(0xaU),32);
        tracep->fullIData(oldp+15392,(0xbU),32);
        tracep->fullIData(oldp+15393,(0xeU),32);
        tracep->fullIData(oldp+15394,(0xfU),32);
        tracep->fullIData(oldp+15395,(0x10U),32);
        tracep->fullIData(oldp+15396,(0x12U),32);
        tracep->fullIData(oldp+15397,(0x13U),32);
        tracep->fullIData(oldp+15398,(0x14U),32);
        tracep->fullIData(oldp+15399,(0x15U),32);
        tracep->fullIData(oldp+15400,(0x16U),32);
        tracep->fullIData(oldp+15401,(0x17U),32);
        tracep->fullIData(oldp+15402,(0x18U),32);
        tracep->fullIData(oldp+15403,(0x19U),32);
        tracep->fullIData(oldp+15404,(0x1aU),32);
        tracep->fullIData(oldp+15405,(0x1bU),32);
        tracep->fullIData(oldp+15406,(0x1cU),32);
        tracep->fullIData(oldp+15407,(0x1dU),32);
        tracep->fullIData(oldp+15408,(0x1fU),32);
        tracep->fullIData(oldp+15409,(0x22U),32);
        tracep->fullIData(oldp+15410,(0x23U),32);
        tracep->fullIData(oldp+15411,(0x24U),32);
        tracep->fullIData(oldp+15412,(0x25U),32);
        tracep->fullIData(oldp+15413,(0x26U),32);
        tracep->fullIData(oldp+15414,(0x27U),32);
        tracep->fullIData(oldp+15415,(0x28U),32);
        tracep->fullIData(oldp+15416,(0x29U),32);
        tracep->fullIData(oldp+15417,(0x2aU),32);
        tracep->fullIData(oldp+15418,(0x2bU),32);
        tracep->fullIData(oldp+15419,(0x2cU),32);
        tracep->fullIData(oldp+15420,(0x2dU),32);
        tracep->fullIData(oldp+15421,(0x2eU),32);
        tracep->fullIData(oldp+15422,(0x2fU),32);
        tracep->fullIData(oldp+15423,(0x30U),32);
        tracep->fullIData(oldp+15424,(0x31U),32);
        tracep->fullIData(oldp+15425,(0x32U),32);
        tracep->fullIData(oldp+15426,(0x33U),32);
        tracep->fullIData(oldp+15427,(0x34U),32);
        tracep->fullIData(oldp+15428,(0x35U),32);
        tracep->fullIData(oldp+15429,(0x36U),32);
        tracep->fullIData(oldp+15430,(0x37U),32);
        tracep->fullIData(oldp+15431,(0x38U),32);
        tracep->fullIData(oldp+15432,(0x39U),32);
        tracep->fullIData(oldp+15433,(0x3aU),32);
        tracep->fullIData(oldp+15434,(0x3bU),32);
        tracep->fullIData(oldp+15435,(0x3cU),32);
        tracep->fullIData(oldp+15436,(0x3dU),32);
        tracep->fullIData(oldp+15437,(0x3eU),32);
        tracep->fullIData(oldp+15438,(0x3fU),32);
        tracep->fullIData(oldp+15439,(0x41U),32);
        tracep->fullIData(oldp+15440,(0x42U),32);
        tracep->fullIData(oldp+15441,(0x43U),32);
        tracep->fullIData(oldp+15442,(0x44U),32);
        tracep->fullIData(oldp+15443,(0x45U),32);
        tracep->fullIData(oldp+15444,(0x46U),32);
        tracep->fullIData(oldp+15445,(0x47U),32);
        tracep->fullIData(oldp+15446,(0x48U),32);
        tracep->fullIData(oldp+15447,(0x49U),32);
        tracep->fullIData(oldp+15448,(0x4aU),32);
        tracep->fullIData(oldp+15449,(0x4bU),32);
        tracep->fullIData(oldp+15450,(0x4cU),32);
        tracep->fullIData(oldp+15451,(0x4dU),32);
        tracep->fullIData(oldp+15452,(0x4eU),32);
        tracep->fullIData(oldp+15453,(0x4fU),32);
        tracep->fullIData(oldp+15454,(0x50U),32);
        tracep->fullIData(oldp+15455,(0x51U),32);
        tracep->fullIData(oldp+15456,(0x52U),32);
        tracep->fullIData(oldp+15457,(0x53U),32);
        tracep->fullIData(oldp+15458,(0x54U),32);
        tracep->fullIData(oldp+15459,(0x55U),32);
        tracep->fullIData(oldp+15460,(0x56U),32);
        tracep->fullIData(oldp+15461,(0x57U),32);
        tracep->fullIData(oldp+15462,(0x58U),32);
        tracep->fullIData(oldp+15463,(0x59U),32);
        tracep->fullIData(oldp+15464,(0x5aU),32);
        tracep->fullIData(oldp+15465,(0x5bU),32);
        tracep->fullIData(oldp+15466,(0x5cU),32);
        tracep->fullIData(oldp+15467,(0x5dU),32);
        tracep->fullIData(oldp+15468,(0x5eU),32);
        tracep->fullIData(oldp+15469,(0x5fU),32);
        tracep->fullIData(oldp+15470,(0x60U),32);
        tracep->fullIData(oldp+15471,(0x61U),32);
        tracep->fullIData(oldp+15472,(0x62U),32);
        tracep->fullIData(oldp+15473,(0x63U),32);
        tracep->fullIData(oldp+15474,(0x64U),32);
        tracep->fullIData(oldp+15475,(0x65U),32);
        tracep->fullIData(oldp+15476,(0x66U),32);
        tracep->fullIData(oldp+15477,(0x67U),32);
        tracep->fullIData(oldp+15478,(0x68U),32);
        tracep->fullIData(oldp+15479,(0x69U),32);
        tracep->fullIData(oldp+15480,(0x6aU),32);
        tracep->fullIData(oldp+15481,(0x6bU),32);
        tracep->fullIData(oldp+15482,(0x6cU),32);
        tracep->fullIData(oldp+15483,(0x6dU),32);
        tracep->fullIData(oldp+15484,(0x6eU),32);
        tracep->fullIData(oldp+15485,(0x6fU),32);
        tracep->fullIData(oldp+15486,(0x70U),32);
        tracep->fullIData(oldp+15487,(0x71U),32);
        tracep->fullIData(oldp+15488,(0x72U),32);
        tracep->fullIData(oldp+15489,(0x73U),32);
        tracep->fullIData(oldp+15490,(0x74U),32);
        tracep->fullIData(oldp+15491,(0x75U),32);
        tracep->fullIData(oldp+15492,(0x76U),32);
        tracep->fullIData(oldp+15493,(0x77U),32);
        tracep->fullIData(oldp+15494,(0x78U),32);
        tracep->fullIData(oldp+15495,(0x79U),32);
        tracep->fullIData(oldp+15496,(0x7aU),32);
        tracep->fullIData(oldp+15497,(0x7bU),32);
        tracep->fullIData(oldp+15498,(0x7cU),32);
        tracep->fullIData(oldp+15499,(0x7dU),32);
        tracep->fullIData(oldp+15500,(0x7eU),32);
        tracep->fullSData(oldp+15501,(0U),16);
        tracep->fullSData(oldp+15502,(0x574fU),16);
        tracep->fullIData(oldp+15503,(0U),24);
        tracep->fullIData(oldp+15504,(0U),31);
        tracep->fullCData(oldp+15505,(0U),7);
        tracep->fullIData(oldp+15506,(0xaf35U),32);
        tracep->fullBit(oldp+15507,(0U));
        tracep->fullBit(oldp+15508,(0U));
        tracep->fullBit(oldp+15509,(0U));
        tracep->fullBit(oldp+15510,(0U));
        tracep->fullBit(oldp+15511,(0U));
        tracep->fullBit(oldp+15512,(0U));
        tracep->fullCData(oldp+15513,(2U),4);
        tracep->fullCData(oldp+15514,(8U),5);
        tracep->fullQData(oldp+15515,(0x800ULL),64);
        tracep->fullQData(oldp+15517,(0x804ULL),64);
        tracep->fullQData(oldp+15519,(0x808ULL),64);
        tracep->fullIData(oldp+15521,(0x47df4U),32);
        tracep->fullIData(oldp+15522,(0x3e20e8fU),32);
        tracep->fullIData(oldp+15523,(0x12ff886U),32);
        tracep->fullIData(oldp+15524,(0xf3181U),32);
        tracep->fullIData(oldp+15525,(0x11d2e881U),32);
        tracep->fullIData(oldp+15526,(0x3e7b72U),32);
        tracep->fullIData(oldp+15527,(3U),32);
        tracep->fullIData(oldp+15528,(6U),32);
        tracep->fullIData(oldp+15529,(2U),32);
        tracep->fullIData(oldp+15530,(0x40U),32);
        tracep->fullIData(oldp+15531,(0x34U),32);
        tracep->fullIData(oldp+15532,(0xbU),32);
        tracep->fullIData(oldp+15533,(0x3ffU),32);
        tracep->fullSData(oldp+15534,(0x400U),11);
        tracep->fullIData(oldp+15535,(0x1ffU),32);
        tracep->fullSData(oldp+15536,(0U),11);
        tracep->fullSData(oldp+15537,(1U),13);
        tracep->fullQData(oldp+15538,(0ULL),52);
        tracep->fullQData(oldp+15540,(0ULL),64);
        tracep->fullQData(oldp+15542,(0x8000000000000000ULL),64);
        tracep->fullQData(oldp+15544,(0x7ff8000000000000ULL),64);
        tracep->fullIData(oldp+15546,(0x20U),32);
        tracep->fullIData(oldp+15547,(0x17U),32);
        tracep->fullIData(oldp+15548,(8U),32);
        tracep->fullIData(oldp+15549,(0x7fU),32);
        tracep->fullCData(oldp+15550,(0x80U),8);
        tracep->fullIData(oldp+15551,(0x3fU),32);
        tracep->fullIData(oldp+15552,(0U),23);
        tracep->fullIData(oldp+15553,(0x80000000U),32);
        tracep->fullIData(oldp+15554,(0x7fc00000U),32);
        tracep->fullIData(oldp+15555,(0x10U),32);
        tracep->fullIData(oldp+15556,(0xaU),32);
        tracep->fullIData(oldp+15557,(5U),32);
        tracep->fullIData(oldp+15558,(0xfU),32);
        tracep->fullCData(oldp+15559,(0x10U),5);
        tracep->fullIData(oldp+15560,(7U),32);
        tracep->fullCData(oldp+15561,(0U),5);
        tracep->fullSData(oldp+15562,(0U),10);
        tracep->fullSData(oldp+15563,(0x8000U),16);
        tracep->fullSData(oldp+15564,(0x7e00U),16);
        tracep->fullSData(oldp+15565,(0x7fc0U),16);
        tracep->fullIData(oldp+15566,(0x40060000U),32);
        tracep->fullIData(oldp+15567,(0x40070000U),32);
        tracep->fullIData(oldp+15568,(0x40080000U),32);
        tracep->fullIData(oldp+15569,(0x40090000U),32);
        tracep->fullIData(oldp+15570,(0x400a0000U),32);
        tracep->fullIData(oldp+15571,(0x400b0000U),32);
        tracep->fullIData(oldp+15572,(0x400c0000U),32);
        tracep->fullIData(oldp+15573,(0x400d0000U),32);
        tracep->fullIData(oldp+15574,(0x400e0000U),32);
        tracep->fullIData(oldp+15575,(0x400f0000U),32);
        tracep->fullIData(oldp+15576,(0x40100000U),32);
        tracep->fullIData(oldp+15577,(0x40200000U),32);
        tracep->fullIData(oldp+15578,(0x40300000U),32);
        tracep->fullIData(oldp+15579,(0xffffU),32);
        tracep->fullIData(oldp+15580,(0x10040000U),32);
        tracep->fullIData(oldp+15581,(0x10000000U),32);
        tracep->fullIData(oldp+15582,(0x10080000U),32);
        tracep->fullIData(oldp+15583,(0x40000000U),32);
        tracep->fullIData(oldp+15584,(0x40010000U),32);
        tracep->fullIData(oldp+15585,(0x40020000U),32);
        tracep->fullIData(oldp+15586,(0x40030000U),32);
        tracep->fullIData(oldp+15587,(0x40040000U),32);
        tracep->fullIData(oldp+15588,(0x40050000U),32);
        tracep->fullCData(oldp+15589,(3U),2);
        tracep->fullCData(oldp+15590,(0U),8);
        tracep->fullBit(oldp+15591,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i))));
        tracep->fullBit(oldp+15592,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+15593,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+15595,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i))));
        tracep->fullBit(oldp+15596,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+15597,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+15599,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i))));
        tracep->fullBit(oldp+15600,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+15601,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+15603,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i))));
        tracep->fullBit(oldp+15604,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+15605,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullCData(oldp+15607,(4U),6);
        tracep->fullCData(oldp+15608,(8U),6);
        tracep->fullCData(oldp+15609,(0xcU),6);
        tracep->fullCData(oldp+15610,(0x10U),6);
        tracep->fullCData(oldp+15611,(0x14U),6);
        tracep->fullCData(oldp+15612,(0x18U),6);
        tracep->fullCData(oldp+15613,(0x1cU),6);
        tracep->fullCData(oldp+15614,(0x20U),6);
        tracep->fullCData(oldp+15615,(0x24U),6);
        tracep->fullCData(oldp+15616,(0x28U),6);
        tracep->fullCData(oldp+15617,(0x2cU),6);
        tracep->fullCData(oldp+15618,(0x30U),6);
        tracep->fullCData(oldp+15619,(0x34U),6);
        tracep->fullCData(oldp+15620,(0x38U),6);
        tracep->fullSData(oldp+15621,(0U),9);
        tracep->fullSData(oldp+15622,(4U),9);
        tracep->fullSData(oldp+15623,(8U),9);
        tracep->fullSData(oldp+15624,(0xcU),9);
        tracep->fullSData(oldp+15625,(0x10U),9);
        tracep->fullSData(oldp+15626,(0x14U),9);
        tracep->fullSData(oldp+15627,(0x18U),9);
        tracep->fullSData(oldp+15628,(0x1cU),9);
        tracep->fullSData(oldp+15629,(0x20U),9);
        tracep->fullSData(oldp+15630,(0x24U),9);
        tracep->fullSData(oldp+15631,(0x28U),9);
        tracep->fullSData(oldp+15632,(0x2cU),9);
        tracep->fullSData(oldp+15633,(0x30U),9);
        tracep->fullSData(oldp+15634,(0x34U),9);
        tracep->fullSData(oldp+15635,(0x38U),9);
        tracep->fullSData(oldp+15636,(0x3cU),9);
        tracep->fullSData(oldp+15637,(0x40U),9);
        tracep->fullSData(oldp+15638,(0x44U),9);
        tracep->fullSData(oldp+15639,(0x48U),9);
        tracep->fullSData(oldp+15640,(0x4cU),9);
        tracep->fullSData(oldp+15641,(0x50U),9);
        tracep->fullSData(oldp+15642,(0x54U),9);
        tracep->fullSData(oldp+15643,(0x58U),9);
        tracep->fullSData(oldp+15644,(0x5cU),9);
        tracep->fullSData(oldp+15645,(0x60U),9);
        tracep->fullSData(oldp+15646,(0x64U),9);
        tracep->fullSData(oldp+15647,(0x68U),9);
        tracep->fullSData(oldp+15648,(0x6cU),9);
        tracep->fullSData(oldp+15649,(0x70U),9);
        tracep->fullSData(oldp+15650,(0x74U),9);
        tracep->fullSData(oldp+15651,(0x78U),9);
        tracep->fullSData(oldp+15652,(0x7cU),9);
        tracep->fullSData(oldp+15653,(0x80U),9);
        tracep->fullSData(oldp+15654,(0x84U),9);
        tracep->fullSData(oldp+15655,(0x100U),9);
        tracep->fullSData(oldp+15656,(0x104U),9);
        tracep->fullSData(oldp+15657,(0x108U),9);
        tracep->fullSData(oldp+15658,(0x10cU),9);
        tracep->fullCData(oldp+15659,(4U),7);
        tracep->fullCData(oldp+15660,(8U),7);
        tracep->fullCData(oldp+15661,(0xcU),7);
        tracep->fullCData(oldp+15662,(0x10U),7);
        tracep->fullCData(oldp+15663,(0x14U),7);
        tracep->fullCData(oldp+15664,(0x18U),7);
        tracep->fullCData(oldp+15665,(0x1cU),7);
        tracep->fullCData(oldp+15666,(0x20U),7);
        tracep->fullCData(oldp+15667,(0x24U),7);
        tracep->fullCData(oldp+15668,(0x28U),7);
        tracep->fullCData(oldp+15669,(0x2cU),7);
        tracep->fullCData(oldp+15670,(0x30U),7);
        tracep->fullCData(oldp+15671,(0x34U),7);
        tracep->fullCData(oldp+15672,(0x38U),7);
        tracep->fullCData(oldp+15673,(0x3cU),7);
        tracep->fullCData(oldp+15674,(0x44U),7);
        tracep->fullCData(oldp+15675,(0x48U),7);
        tracep->fullCData(oldp+15676,(0x4cU),7);
        tracep->fullCData(oldp+15677,(0x50U),7);
        tracep->fullCData(oldp+15678,(0x54U),7);
        tracep->fullSData(oldp+15679,(0x110U),9);
        tracep->fullSData(oldp+15680,(0x114U),9);
        tracep->fullSData(oldp+15681,(0x118U),9);
        tracep->fullSData(oldp+15682,(0x11cU),9);
        tracep->fullSData(oldp+15683,(0x3a0U),12);
        tracep->fullSData(oldp+15684,(0x3b0U),12);
        tracep->fullIData(oldp+15685,(0x11U),32);
        tracep->fullIData(oldp+15686,(0x15U),32);
        tracep->fullIData(oldp+15687,(0x505043U),24);
        tracep->fullBit(oldp+15688,(0U));
        tracep->fullCData(oldp+15689,(0U),3);
        tracep->fullCData(oldp+15690,(0U),3);
        tracep->fullCData(oldp+15691,(0U),2);
        tracep->fullCData(oldp+15692,(0U),8);
        tracep->fullIData(oldp+15693,(0U),32);
        tracep->fullCData(oldp+15694,(0U),4);
        tracep->fullIData(oldp+15695,(0U),32);
        tracep->fullBit(oldp+15696,(1U));
        tracep->fullBit(oldp+15697,(0U));
        tracep->fullCData(oldp+15698,(0U),3);
        tracep->fullCData(oldp+15699,(0U),3);
        tracep->fullCData(oldp+15700,(0U),2);
        tracep->fullCData(oldp+15701,(0U),8);
        tracep->fullBit(oldp+15702,(0U));
        tracep->fullIData(oldp+15703,(0U),32);
        tracep->fullBit(oldp+15704,(0U));
        tracep->fullBit(oldp+15705,(1U));
        tracep->fullIData(oldp+15706,(0xbU),32);
        tracep->fullIData(oldp+15707,(0x34U),32);
        tracep->fullIData(oldp+15708,(5U),32);
        tracep->fullIData(oldp+15709,(0xaU),32);
        tracep->fullIData(oldp+15710,(2U),32);
        tracep->fullIData(oldp+15711,(7U),32);
        tracep->fullCData(oldp+15712,(0x18U),5);
        tracep->fullIData(oldp+15713,(0x40U),32);
        tracep->fullCData(oldp+15714,(0x18U),5);
        tracep->fullCData(oldp+15715,(3U),4);
        tracep->fullBit(oldp+15716,(1U));
        tracep->fullCData(oldp+15717,(0x1fU),5);
        tracep->fullCData(oldp+15718,(0xfU),4);
        tracep->fullCData(oldp+15719,(0x17U),5);
        tracep->fullCData(oldp+15720,(0xeU),4);
        tracep->fullCData(oldp+15721,(0x11U),5);
        tracep->fullCData(oldp+15722,(6U),4);
        tracep->fullCData(oldp+15723,(0U),2);
    }
}
