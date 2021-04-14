// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
<<<<<<< HEAD
#include "verilated_fst_c.h"
#include "VAzadi_top_verilator__Syms.h"


void VAzadi_top_verilator::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
=======
#include "verilated_vcd_c.h"
#include "VAzadi_top_verilator__Syms.h"


void VAzadi_top_verilator::traceChgSub4(void* userp, VerilatedVcd* tracep) {
    VAzadi_top_verilator__Syms* __restrict vlSymsp = static_cast<VAzadi_top_verilator__Syms*>(userp);
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 14689);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))));
        tracep->chgBit(oldp+1,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full) 
                                      | (((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                 >> 1U)) 
                                          == (1U & 
                                              ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                               >> 1U)))
                                          ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                          : (((IData)(1U) 
                                              - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                             + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        tracep->chgBit(oldp+2,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                & (((1U == (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                  >> 0xbU))) 
                                    & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                          >> 0xaU))) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+3,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))
                                   ? ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword)) 
                                      << 1U) : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage)),33);
        tracep->chgIData(oldp+5,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding),17);
        tracep->chgBit(oldp+6,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_rsp_pending));
        tracep->chgBit(oldp+7,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending));
        tracep->chgBit(oldp+8,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending));
        tracep->chgBit(oldp+9,((1U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                       >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar)))));
        tracep->chgBit(oldp+10,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__req_i) 
                                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__we_i)))));
        tracep->chgBit(oldp+11,((((1U == (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xbU))) 
                                  & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                        >> 0xaU))) 
                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgBit(oldp+12,((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                       & ((1U == (3U 
                                                  & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                     >> 0xbU)))
                                           ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                              | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                 >> 0xaU))
                                           : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 0xaU))))));
        tracep->chgIData(oldp+13,((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rdata_o 
                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->chgSData(oldp+14,(((((4U != (7U & (
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U)))
                                      ? 0U : 1U) << 0xbU) 
                                   | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                                       << 0xaU) | (0x3ffU 
                                                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                      >> 5U))))),13);
        tracep->chgCData(oldp+15,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                    ? 4U : (7U & ((
                                                   (1U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                       >> 2U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U)))
                                                   ? 
                                                  ((3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                   : 
                                                  (((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+16,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgSData(oldp+17,(((0x33U >= (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * 
                                                 (3U 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                    ? (0x1fffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                          >> 
                                                          (0x3fU 
                                                           & ((IData)(0xdU) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                    : 0U)),13);
        tracep->chgCData(oldp+18,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                    ? 4U : (7U & ((
                                                   (1U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                       >> 2U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U)))
                                                   ? 
                                                  ((3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                   : 
                                                  (((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+19,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+20,(((0x13U >= (0x1fU 
                                              & ((IData)(5U) 
                                                 * 
                                                 (3U 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                    ? (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(5U) 
                                                    * 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                    : 0U)),5);
        tracep->chgCData(oldp+21,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                    ? 4U : (7U & ((
                                                   (1U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                       >> 2U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U)))
                                                   ? 
                                                  ((3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                   : 
                                                  (((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+22,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                 & (((1U == (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xbU))) 
                                     & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                           >> 0xaU))) 
                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+23,(((0x83U >= (0xffU 
                                              & ((IData)(0x21U) 
                                                 * 
                                                 (3U 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                    ? (0x1ffffffffULL 
                                       & (((0U == (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                            ? 0ULL : 
                                           ((QData)((IData)(
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                            ((IData)(2U) 
                                                             + 
                                                             (7U 
                                                              & (((IData)(0x21U) 
                                                                  * 
                                                                  (3U 
                                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                 >> 5U)))])) 
                                            << ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                          | (((QData)((IData)(
                                                              vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                              ((IData)(1U) 
                                                               + 
                                                               (7U 
                                                                & (((IData)(0x21U) 
                                                                    * 
                                                                    (3U 
                                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                   >> 5U)))])) 
                                              << ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                             | ((QData)((IData)(
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                (7U 
                                                                 & (((IData)(0x21U) 
                                                                     * 
                                                                     (3U 
                                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                    >> 5U))])) 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x21U) 
                                                    * 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                    : 0ULL)),33);
        tracep->chgQData(oldp+25,((0x1ffffffffULL & 
                                   (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))
                                     ? ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                        << 1U) : ((0x83U 
                                                   >= 
                                                   (0xffU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x21U) 
                                                         * 
                                                         (3U 
                                                          & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                     ? 0ULL
                                                     : 
                                                    ((QData)((IData)(
                                                                     vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                     ((IData)(2U) 
                                                                      + 
                                                                      (7U 
                                                                       & (((IData)(0x21U) 
                                                                           * 
                                                                           (3U 
                                                                            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                          >> 5U)))])) 
                                                     << 
                                                     ((IData)(0x40U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x21U) 
                                                          * 
                                                          (3U 
                                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        (7U 
                                                                         & (((IData)(0x21U) 
                                                                             * 
                                                                             (3U 
                                                                              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                            >> 5U)))])) 
                                                       << 
                                                       ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x21U) 
                                                             * 
                                                             (3U 
                                                              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                         ? 0x20U
                                                         : 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x21U) 
                                                             * 
                                                             (3U 
                                                              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                         (7U 
                                                                          & (((IData)(0x21U) 
                                                                              * 
                                                                              (3U 
                                                                               & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                             >> 5U))])) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x21U) 
                                                             * 
                                                             (3U 
                                                              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                                   : 0ULL)))),33);
        tracep->chgBit(oldp+27,((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__tl_reg_d2h 
                                                >> 0x33U)) 
                                       & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[0U]))));
        tracep->chgBit(oldp+28,((1U & (((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__hw2reg[0U])
                                         ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__hw2reg[0U] 
                                            >> 1U) : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_intr_state0__q)) 
                                       & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__intr_state0_we)) 
                                          | (~ (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[0U] 
                                                >> 1U)))))));
        tracep->chgIData(oldp+29,(vlTOPp->gpio_i),32);
        tracep->chgIData(oldp+30,((((~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q) 
                                    & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[4U])),32);
        tracep->chgIData(oldp+31,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q 
                                    & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d)) 
                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[3U])),32);
        tracep->chgIData(oldp+32,(((((((~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q) 
                                       & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
                                      & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[4U]) 
                                     | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q 
                                         & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d)) 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[3U])) 
                                    | ((~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
                                       & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[1U])) 
                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
                                      & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[2U]))),32);
        tracep->chgBit(oldp+33,((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                >> 0x33U)) 
                                       & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [6U][0U]))));
        tracep->chgIData(oldp+34,((((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U])
                                     ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[7U] 
                                         << 0xaU) | 
                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U] 
                                         >> 0x16U))
                                     : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_state_we)
                                       ? (~ ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [6U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [6U][0U] 
                                                >> 1U)))
                                       : 0xffffffffU))),32);
        tracep->chgBit(oldp+35,((1U & vlTOPp->gpio_i)));
        tracep->chgBit(oldp+36,((1U & ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                        : vlTOPp->gpio_i))));
        tracep->chgBit(oldp+37,((1U & (vlTOPp->gpio_i 
                                       >> 1U))));
        tracep->chgBit(oldp+38,((1U & ((2U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 1U)))));
        tracep->chgBit(oldp+39,((1U & (vlTOPp->gpio_i 
                                       >> 2U))));
        tracep->chgBit(oldp+40,((1U & ((4U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 2U)))));
        tracep->chgBit(oldp+41,((1U & (vlTOPp->gpio_i 
                                       >> 3U))));
        tracep->chgBit(oldp+42,((1U & ((8U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 3U)))));
        tracep->chgBit(oldp+43,((1U & (vlTOPp->gpio_i 
                                       >> 4U))));
        tracep->chgBit(oldp+44,((1U & ((0x10U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 4U)))));
        tracep->chgBit(oldp+45,((1U & (vlTOPp->gpio_i 
                                       >> 5U))));
        tracep->chgBit(oldp+46,((1U & ((0x20U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 5U)))));
        tracep->chgBit(oldp+47,((1U & (vlTOPp->gpio_i 
                                       >> 6U))));
        tracep->chgBit(oldp+48,((1U & ((0x40U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 6U)))));
        tracep->chgBit(oldp+49,((1U & (vlTOPp->gpio_i 
                                       >> 7U))));
        tracep->chgBit(oldp+50,((1U & ((0x80U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 7U)))));
        tracep->chgBit(oldp+51,((1U & (vlTOPp->gpio_i 
                                       >> 8U))));
        tracep->chgBit(oldp+52,((1U & ((0x100U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 8U)))));
        tracep->chgBit(oldp+53,((1U & (vlTOPp->gpio_i 
                                       >> 9U))));
        tracep->chgBit(oldp+54,((1U & ((0x200U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 9U)))));
        tracep->chgBit(oldp+55,((1U & (vlTOPp->gpio_i 
                                       >> 0xaU))));
        tracep->chgBit(oldp+56,((1U & ((0x400U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0xaU)))));
        tracep->chgBit(oldp+57,((1U & (vlTOPp->gpio_i 
                                       >> 0xbU))));
        tracep->chgBit(oldp+58,((1U & ((0x800U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0xbU)))));
        tracep->chgBit(oldp+59,((1U & (vlTOPp->gpio_i 
                                       >> 0xcU))));
        tracep->chgBit(oldp+60,((1U & ((0x1000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0xcU)))));
        tracep->chgBit(oldp+61,((1U & (vlTOPp->gpio_i 
                                       >> 0xdU))));
        tracep->chgBit(oldp+62,((1U & ((0x2000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0xdU)))));
        tracep->chgBit(oldp+63,((1U & (vlTOPp->gpio_i 
                                       >> 0xeU))));
        tracep->chgBit(oldp+64,((1U & ((0x4000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0xeU)))));
        tracep->chgBit(oldp+65,((1U & (vlTOPp->gpio_i 
                                       >> 0xfU))));
        tracep->chgBit(oldp+66,((1U & ((0x8000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0xfU)))));
        tracep->chgBit(oldp+67,((1U & (vlTOPp->gpio_i 
                                       >> 0x10U))));
        tracep->chgBit(oldp+68,((1U & ((0x10000U & 
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x10U)))));
        tracep->chgBit(oldp+69,((1U & (vlTOPp->gpio_i 
                                       >> 0x11U))));
        tracep->chgBit(oldp+70,((1U & ((0x20000U & 
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x11U)))));
        tracep->chgBit(oldp+71,((1U & (vlTOPp->gpio_i 
                                       >> 0x12U))));
        tracep->chgBit(oldp+72,((1U & ((0x40000U & 
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x12U)))));
        tracep->chgBit(oldp+73,((1U & (vlTOPp->gpio_i 
                                       >> 0x13U))));
        tracep->chgBit(oldp+74,((1U & ((0x80000U & 
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x13U)))));
        tracep->chgBit(oldp+75,((1U & (vlTOPp->gpio_i 
                                       >> 0x14U))));
        tracep->chgBit(oldp+76,((1U & ((0x100000U & 
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x14U)))));
        tracep->chgBit(oldp+77,((1U & (vlTOPp->gpio_i 
                                       >> 0x15U))));
        tracep->chgBit(oldp+78,((1U & ((0x200000U & 
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x15U)))));
        tracep->chgBit(oldp+79,((1U & (vlTOPp->gpio_i 
                                       >> 0x16U))));
        tracep->chgBit(oldp+80,((1U & ((0x400000U & 
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x16U)))));
        tracep->chgBit(oldp+81,((1U & (vlTOPp->gpio_i 
                                       >> 0x17U))));
        tracep->chgBit(oldp+82,((1U & ((0x800000U & 
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x17U)))));
        tracep->chgBit(oldp+83,((1U & (vlTOPp->gpio_i 
                                       >> 0x18U))));
        tracep->chgBit(oldp+84,((1U & ((0x1000000U 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x18U)))));
        tracep->chgBit(oldp+85,((1U & (vlTOPp->gpio_i 
                                       >> 0x19U))));
        tracep->chgBit(oldp+86,((1U & ((0x2000000U 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x19U)))));
        tracep->chgBit(oldp+87,((1U & (vlTOPp->gpio_i 
                                       >> 0x1aU))));
        tracep->chgBit(oldp+88,((1U & ((0x4000000U 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x1aU)))));
        tracep->chgBit(oldp+89,((1U & (vlTOPp->gpio_i 
                                       >> 0x1bU))));
        tracep->chgBit(oldp+90,((1U & ((0x8000000U 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x1bU)))));
        tracep->chgBit(oldp+91,((1U & (vlTOPp->gpio_i 
                                       >> 0x1cU))));
        tracep->chgBit(oldp+92,((1U & ((0x10000000U 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x1cU)))));
        tracep->chgBit(oldp+93,((1U & (vlTOPp->gpio_i 
                                       >> 0x1dU))));
        tracep->chgBit(oldp+94,((1U & ((0x20000000U 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x1dU)))));
        tracep->chgBit(oldp+95,((1U & (vlTOPp->gpio_i 
                                       >> 0x1eU))));
        tracep->chgBit(oldp+96,((1U & ((0x40000000U 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x1eU)))));
        tracep->chgBit(oldp+97,((1U & (vlTOPp->gpio_i 
                                       >> 0x1fU))));
        tracep->chgBit(oldp+98,((1U & ((0x80000000U 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x1fU)))));
        tracep->chgCData(oldp+99,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count),2);
        tracep->chgBit(oldp+100,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data_R));
        tracep->chgBit(oldp+101,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data));
        tracep->chgIData(oldp+102,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data
                                     : 0U)),32);
        tracep->chgBit(oldp+103,((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                         >> 0x15U) 
                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar)))));
        tracep->chgBit(oldp+104,((((1U == (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                 >> 0xbU))) 
                                   & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                         >> 0xaU))) 
                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack))));
        tracep->chgBit(oldp+105,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid));
        tracep->chgBit(oldp+106,((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                        & ((1U == (3U 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                      >> 0xbU)))
                                            ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                  >> 0xaU))
                                            : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xaU))))));
        tracep->chgIData(oldp+107,((((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data
                                      : 0U) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask)),32);
        tracep->chgCData(oldp+108,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                     ? 2U : (3U & (
                                                   ((1U 
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
        tracep->chgBit(oldp+109,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack))));
        tracep->chgSData(oldp+110,(((0x19U >= (0x1fU 
                                               & ((IData)(0xdU) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                     ? (0x1fffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0xdU) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                     : 0U)),13);
        tracep->chgCData(oldp+111,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                     ? 2U : (3U & (
                                                   ((1U 
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
        tracep->chgBit(oldp+112,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+113,(((9U >= (0xfU & 
                                            ((IData)(5U) 
                                             * (1U 
                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                     ? (0x1fU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                     : 0U)),5);
        tracep->chgCData(oldp+114,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                     ? 2U : (3U & (
                                                   ((1U 
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
        tracep->chgBit(oldp+115,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                  & (((1U == (3U & 
                                              ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))) 
                                      & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xaU))) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+116,(((0x41U >= (0x7fU 
                                               & ((IData)(0x21U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                     ? (0x1ffffffffULL 
                                        & (((0U == 
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
                                               << (
                                                   (0U 
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
        tracep->chgQData(oldp+118,((0x1ffffffffULL 
                                    & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid))
                                        ? ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword)) 
                                           << 1U) : 
                                       ((0x41U >= (0x7fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
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
                                         : 0ULL)))),33);
        tracep->chgBit(oldp+120,(((IData)(vlTOPp->reset_ni) 
                                  & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                        >> 1U)))));
        tracep->chgBit(oldp+121,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_q));
        tracep->chgIData(oldp+122,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_vector)),32);
        tracep->chgBit(oldp+123,((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 0x33U)) 
                                        & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U]))));
        tracep->chgQData(oldp+124,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree),63);
        tracep->chgBit(oldp+126,((((7U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
                                   > vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__threshold
                                   [0U]) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))));
        tracep->chgCData(oldp+127,(((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))
                                     ? (0x3fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])
                                     : 0U)),6);
        tracep->chgBit(oldp+128,((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 0x33U)) 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                        [0U][0U]))));
        tracep->chgBit(oldp+129,((1U & (((0x80000000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                          ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[2U]
                                          : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)) 
                                        & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_watermark_we)) 
                                           | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0U][0U] 
                                                 >> 1U)))))));
        tracep->chgBit(oldp+130,((1U & (((0x20000000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                          ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                             >> 0x1eU)
                                          : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q)) 
                                        & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_watermark_we)) 
                                           | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0U][0U] 
                                                 >> 2U)))))));
        tracep->chgBit(oldp+131,((1U & (((0x8000000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                          ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                             >> 0x1cU)
                                          : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q)) 
                                        & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_empty_we)) 
                                           | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0U][0U] 
                                                 >> 3U)))))));
        tracep->chgBit(oldp+132,((1U & (((0x2000000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                          ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                             >> 0x1aU)
                                          : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)) 
                                        & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_overflow_we)) 
                                           | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0U][0U] 
                                                 >> 4U)))))));
        tracep->chgBit(oldp+133,((1U & (((0x800000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                          ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                             >> 0x18U)
                                          : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)) 
                                        & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_frame_err_we)) 
                                           | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0U][0U] 
                                                 >> 5U)))))));
        tracep->chgBit(oldp+134,((1U & (((0x200000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                          ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                             >> 0x16U)
                                          : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)) 
                                        & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_break_err_we)) 
                                           | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0U][0U] 
                                                 >> 6U)))))));
        tracep->chgBit(oldp+135,((1U & (((0x80000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                          ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                             >> 0x14U)
                                          : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)) 
                                        & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_timeout_we)) 
                                           | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0U][0U] 
                                                 >> 7U)))))));
        tracep->chgBit(oldp+136,((1U & (((0x20000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                          ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                             >> 0x12U)
                                          : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)) 
                                        & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_parity_err_we)) 
                                           | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0U][0U] 
                                                 >> 8U)))))));
        tracep->chgCData(oldp+137,((7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we)
                                           ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0U][1U] 
                                               << 0x1dU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0U][0U] 
                                                 >> 3U))
                                           : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U]))),3);
        tracep->chgCData(oldp+138,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txilvl_we)
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
        tracep->chgCData(oldp+139,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
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
        tracep->chgIData(oldp+140,(((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U])
                                     ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout)
                                         ? 0U : (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                                                  != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                                                  ? 0U
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth))
                                                   ? 0U
                                                   : 
                                                  (0xffffffU 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q)
                                                       ? 
                                                      ((IData)(1U) 
                                                       + vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)
                                                       : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)))))
                                     : 0U)),24);
        tracep->chgBit(oldp+141,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                                  != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q))));
        tracep->chgBit(oldp+142,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
                                  & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err)) 
                                     | (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data))))));
        tracep->chgBit(oldp+143,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_d) 
                                  & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_prev_q)))));
        tracep->chgBit(oldp+144,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d) 
                                  & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_prev_q)))));
        tracep->chgBit(oldp+145,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle_q))) 
                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle))));
        tracep->chgBit(oldp+146,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid) 
                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__full))));
        tracep->chgBit(oldp+147,(((0x4000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])
                                   ? (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync) 
                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                          | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2))) 
                                      | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2)))
                                   : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync))));
        tracep->chgBit(oldp+148,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync) 
                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                      | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2))) 
                                  | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2)))));
        tracep->chgCData(oldp+149,((0xffU & (((0U == 
                                               (0x18U 
                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                   << 3U)))
                                               ? 0U
                                               : (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
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
        tracep->chgCData(oldp+150,((0xffU & (((0U == 
                                               (0x18U 
                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                   << 3U)))
                                               ? 0U
                                               : (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
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
        tracep->chgBit(oldp+151,((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 0x33U)) 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                        [7U][0U]))));
        tracep->chgBit(oldp+152,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_watermark_d) 
                                  & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_watermark_q)))));
        tracep->chgBit(oldp+153,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_watermark_d) 
                                  & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_watermark_q)))));
        tracep->chgBit(oldp+154,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_wvalid) 
                                  & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_wready)))));
        tracep->chgBit(oldp+155,((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                         >> 4U) & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__tx_fifo_wready))))));
        tracep->chgBit(oldp+156,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__target_idle)) 
                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_high_cnt 
                                     > vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[0U]))));
        tracep->chgCData(oldp+157,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
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
        tracep->chgCData(oldp+158,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->chgBit(oldp+159,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_rvalid) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_rready)) 
                                  & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        tracep->chgSData(oldp+160,(((0x19fU >= (0x1ffU 
                                                & ((IData)(0xdU) 
                                                   * 
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                     ? (0x1fffU & (
                                                   ((0U 
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
                                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                     : 0U)),13);
        tracep->chgSData(oldp+161,((0x1fffU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_wvalid))
                                                ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_wdata)
                                                : (
                                                   (0x19fU 
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
        tracep->chgBit(oldp+162,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->chgBit(oldp+163,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_fifo_rvalid) 
                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[9U] 
                                      >> 0x1aU)) & 
                                  (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        tracep->chgCData(oldp+164,((0xffU & (((0U == 
                                               (0x18U 
                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                   << 3U)))
                                               ? 0U
                                               : (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__storage[
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
        tracep->chgBit(oldp+165,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__tx_fifo_rvalid) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__tx_fifo_rready)) 
                                  & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        tracep->chgCData(oldp+166,((0xffU & (((0U == 
                                               (0x18U 
                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                   << 3U)))
                                               ? 0U
                                               : (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__storage[
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
        tracep->chgCData(oldp+167,((0xffU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                              & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                                 >> 4U))
                                              ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U] 
                                                  << 0x1bU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                                    >> 5U))
                                              : (((0U 
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
        tracep->chgBit(oldp+168,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__acq_fifo_rvalid) 
                                   & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                       >> 0x10U) & 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                       >> 0xdU))) & 
                                  (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        tracep->chgSData(oldp+169,(((0x13fU >= (0x1ffU 
                                                & ((IData)(0xaU) 
                                                   * 
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                     ? (0x3ffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0xaU) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                    ? 0U
                                                    : 
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__storage[
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xfU 
                                                      & (((IData)(0xaU) 
                                                          * 
                                                          (0x1fU 
                                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
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
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0xaU) 
                                                         * 
                                                         (0x1fU 
                                                          & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                     : 0U)),10);
        tracep->chgBit(oldp+170,(((0x7fU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__input_byte) 
                                             >> 1U) 
                                            & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[3U] 
                                                << 0x19U) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U] 
                                                  >> 7U)))) 
                                  == (0x7fU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[3U] 
                                                << 0x12U) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U] 
                                                  >> 0xeU))))));
        tracep->chgBit(oldp+171,(((0x7fU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__input_byte) 
                                             >> 1U) 
                                            & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U] 
                                                << 7U) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                                  >> 0x19U)))) 
                                  == (0x7fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U]))));
        tracep->chgCData(oldp+172,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hfifo_rspvalid),2);
        tracep->chgCData(oldp+173,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hfifo_rspvalid),2);
    }
}

void VAzadi_top_verilator::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
    VAzadi_top_verilator__Syms* __restrict vlSymsp = static_cast<VAzadi_top_verilator__Syms*>(userp);
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    IData/*31:0*/ __Vilp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vilp = 0U;
<<<<<<< HEAD
        while ((__Vilp <= 0xa1U)) {
=======
        while ((__Vilp <= 0xa4U)) {
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
            vlTOPp->__Vm_traceActivity[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}
