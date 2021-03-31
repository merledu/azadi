// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vazadi_soc_top.h for the primary calling header

#include "Vazadi_soc_top.h"
#include "Vazadi_soc_top__Syms.h"

VL_INLINE_OPT void Vazadi_soc_top::_sequent__TOP__13(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vazadi_soc_top::_sequent__TOP__13\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvlsb__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0;
    CData/*4:0*/ __Vdlyvlsb__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1;
    CData/*4:0*/ __Vdlyvlsb__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2;
    CData/*7:0*/ __Vdlyvval__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2;
    CData/*0:0*/ __Vdlyvset__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2;
    CData/*4:0*/ __Vdlyvlsb__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3;
    CData/*7:0*/ __Vdlyvval__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3;
    CData/*0:0*/ __Vdlyvset__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3;
    SData/*11:0*/ __Vdlyvdim0__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0;
    SData/*11:0*/ __Vdlyvdim0__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1;
    SData/*11:0*/ __Vdlyvdim0__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2;
    SData/*11:0*/ __Vdlyvdim0__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3;
    // Body
    __Vdlyvset__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0 = 0U;
    __Vdlyvset__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1 = 0U;
    __Vdlyvset__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2 = 0U;
    __Vdlyvset__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3 = 0U;
    if (vlTOPp->azadi_soc_top__DOT__dccm__DOT__req_i) {
        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_we))) {
            __Vdlyvval__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0 
                = (0xffU & vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int);
            __Vdlyvset__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0 = 1U;
            __Vdlyvlsb__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0 = 0U;
            __Vdlyvdim0__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0 
                = vlTOPp->azadi_soc_top__DOT__dccm__DOT__addr_i;
        }
        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_we))) {
            __Vdlyvval__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1 
                = (0xffU & (vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int 
                            >> 8U));
            __Vdlyvset__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1 = 1U;
            __Vdlyvlsb__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1 = 8U;
            __Vdlyvdim0__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1 
                = vlTOPp->azadi_soc_top__DOT__dccm__DOT__addr_i;
        }
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_we))) {
            __Vdlyvval__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2 
                = (0xffU & (vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int 
                            >> 0x10U));
            __Vdlyvset__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2 = 1U;
            __Vdlyvlsb__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2 = 0x10U;
            __Vdlyvdim0__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2 
                = vlTOPp->azadi_soc_top__DOT__dccm__DOT__addr_i;
        }
        if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_we))) {
            __Vdlyvval__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3 
                = (0xffU & (vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int 
                            >> 0x18U));
            __Vdlyvset__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3 = 1U;
            __Vdlyvlsb__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3 = 0x18U;
            __Vdlyvdim0__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3 
                = vlTOPp->azadi_soc_top__DOT__dccm__DOT__addr_i;
        }
    }
    vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q 
        = vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d;
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__rdata = 
        vlTOPp->azadi_soc_top__DOT__iccm__DOT__iccm__DOT__mem
        [((0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
           [0U][2U]) ? (0xfffU & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                   [0U][2U] << 0x19U) 
                                  | (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                     [0U][1U] >> 7U)))
           : 0U)];
    if (vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT____Vlvbound1 
            = vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wdata;
        if ((0x41U >= (0x7fU & ((IData)(0x21U) * (1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            VL_ASSIGNSEL_WIIQ(33,(0x7fU & ((IData)(0x21U) 
                                           * (1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))), vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage, vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT____Vlvbound1);
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_q 
        = ((IData)(vlTOPp->reset_ni) & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_d));
    vlTOPp->azadi_soc_top__DOT__iccm__DOT__rvalid = 
        ((IData)(vlTOPp->reset_ni) & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__req));
    if (vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1 
            = ((((4U != (7U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                               [0U][2U] >> 0x12U)))
                  ? 0U : 1U) << 0xbU) | (((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error) 
                                          << 0xaU) 
                                         | (0x3ffU 
                                            & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                               [0U][2U] 
                                               >> 5U))));
        if ((0x19U >= (0x1fU & ((IData)(0xdU) * (1U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ ((IData)(0x1fffU) << (0x1fU 
                                             & ((IData)(0xdU) 
                                                * (1U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                    & vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage) 
                   | ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1) 
                      << (0x1fU & ((IData)(0xdU) * 
                                   (1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
        }
    }
    if (vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1 
            = (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
               [0U][1U]);
        if ((9U >= (0xfU & ((IData)(5U) * (1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ ((IData)(0x1fU) << (0xfU & ((IData)(5U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                    & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage)) 
                   | ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1) 
                      << (0xfU & ((IData)(5U) * (1U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__busy 
        = (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_busy));
    if (vlTOPp->azadi_soc_top__DOT__dccm__DOT__req_i) {
        vlTOPp->azadi_soc_top__DOT__dccm__DOT__rdata_o 
            = vlTOPp->azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem
            [vlTOPp->azadi_soc_top__DOT__dccm__DOT__addr_i];
    }
    if (vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT____Vlvbound1 
            = ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
               << 1U);
        if ((0x83U >= (0xffU & ((IData)(0x21U) * (3U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            VL_ASSIGNSEL_WIIQ(33,(0xffU & ((IData)(0x21U) 
                                           * (3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))), vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage, vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT____Vlvbound1);
        }
    }
    vlTOPp->azadi_soc_top__DOT__dccm__DOT__rvalid_o 
        = ((IData)(vlTOPp->reset_ni) & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__we_i)) 
                                        & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__req_i)));
    if (vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT____Vlvbound1 
            = ((((4U != (7U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                               >> 0x12U))) ? 0U : 1U) 
                << 0xbU) | (((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                             << 0xaU) | (0x3ffU & (
                                                   vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 5U))));
        if ((0x33U >= (0x3fU & ((IData)(0xdU) * (3U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ (0x1fffULL << (0x3fU & ((IData)(0xdU) 
                                               * (3U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                    & vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage) 
                   | ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT____Vlvbound1)) 
                      << (0x3fU & ((IData)(0xdU) * 
                                   (3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
        }
    }
    if (vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT____Vlvbound1 
            = (0x1eU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[1U]);
        if ((0x13U >= (0x1fU & ((IData)(5U) * (3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ ((IData)(0x1fU) << (0x1fU & 
                                           ((IData)(5U) 
                                            * (3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                    & vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                   | ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT____Vlvbound1) 
                      << (0x1fU & ((IData)(5U) * (3U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk2__DOT__source_q 
        = ((IData)(vlTOPp->reset_ni) & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk2__DOT__source_d));
    if (__Vdlyvset__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0) {
        vlTOPp->azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem[__Vdlyvdim0__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0))) 
                & vlTOPp->azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem
                [__Vdlyvdim0__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0]) 
               | ((IData)(__Vdlyvval__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0) 
                  << (IData)(__Vdlyvlsb__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0)));
    }
    if (__Vdlyvset__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1) {
        vlTOPp->azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem[__Vdlyvdim0__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1))) 
                & vlTOPp->azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem
                [__Vdlyvdim0__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1]) 
               | ((IData)(__Vdlyvval__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1) 
                  << (IData)(__Vdlyvlsb__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1)));
    }
    if (__Vdlyvset__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2) {
        vlTOPp->azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem[__Vdlyvdim0__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2))) 
                & vlTOPp->azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem
                [__Vdlyvdim0__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2]) 
               | ((IData)(__Vdlyvval__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2) 
                  << (IData)(__Vdlyvlsb__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2)));
    }
    if (__Vdlyvset__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3) {
        vlTOPp->azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem[__Vdlyvdim0__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3))) 
                & vlTOPp->azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem
                [__Vdlyvdim0__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3]) 
               | ((IData)(__Vdlyvval__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3) 
                  << (IData)(__Vdlyvlsb__azadi_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3)));
    }
}

VL_INLINE_OPT void Vazadi_soc_top::_sequent__TOP__15(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vazadi_soc_top::_sequent__TOP__15\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_c_id 
            = (0xffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata);
    }
    if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U] 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U];
    }
    if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U];
    }
    if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U] 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U];
    }
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__hold_result) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT____Vcellout__i_divsqrt_lei__Fflags_SO;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__adjusted_result;
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q;
    }
    if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set) 
         | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
            & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))))) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_d;
    }
    if ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
          & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))) 
         & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err)))) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__stored_addr_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr;
    }
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id 
            = (3U != (3U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata));
    }
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err_plus2 
            = (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                     & ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                         ? (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                             >> 1U) & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                         : (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err) 
                             & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                            & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))));
    }
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_id 
            = (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
               << 1U);
    }
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err;
    }
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed;
    }
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__illegal_c_insn_id 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn;
    }
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed;
    }
    if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
            = ((6U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
               | (1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_d)));
    }
    if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
            = ((5U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
               | (2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_d)));
    }
    if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
            = ((3U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
               | (4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_d)));
    }
    if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set) 
         | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_in_ready) 
            & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw)))) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type 
        = ((0xfffff000U & ((- (IData)((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x1fU)))) 
                           << 0xcU)) | (0xfffU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm 
        = ((5U == (7U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                         >> 0xcU))) | (6U == (7U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0xcU))));
}

VL_INLINE_OPT void Vazadi_soc_top::_sequent__TOP__16(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vazadi_soc_top::_sequent__TOP__16\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    CData/*0:0*/ __Vdlyvset__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v1;
    CData/*0:0*/ __Vdlyvset__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    CData/*0:0*/ __Vdlyvset__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v3;
    CData/*0:0*/ __Vdly__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready;
    WData/*127:0*/ __Vtemp659[4];
    WData/*127:0*/ __Vtemp660[4];
    WData/*127:0*/ __Vtemp663[4];
    WData/*127:0*/ __Vtemp664[4];
    QData/*33:0*/ __Vdlyvval__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    QData/*33:0*/ __Vdlyvval__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    // Body
    __Vdly__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready;
    __Vdlyvset__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0U;
    __Vdlyvset__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 0U;
    __Vdlyvset__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0U;
    __Vdlyvset__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_q 
        = ((IData)(vlTOPp->reset_ni) & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d));
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = 4U;
    }
    if (vlTOPp->reset_ni) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DN;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_q 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_d) 
               & 1U);
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_q = 0U;
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_q 
        = ((IData)(vlTOPp->reset_ni) ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                         ? (1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n) 
                                                  >> 1U))
                                         : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n))
            : 0U);
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_q 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                ? (1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n) 
                         >> 1U)) : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_tag_q 
            = (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__op_starting) 
                | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_tag_q)) 
               & 1U);
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_tag_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = 0U;
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((IData)(vlTOPp->reset_ni) ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_d)
            : 0U);
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d) 
               & 1U);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SP 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SN) 
               & 1U);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_is_fp8_q 
            = (((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__op_starting)) 
                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_is_fp8_q)) 
               & 1U);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_dly_SB 
            = ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                 ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_SB)
                 : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_dly_SB)) 
               & 1U);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S 
            = (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid) 
                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready)) 
               & 1U);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DN;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S 
            = (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid) 
                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready)) 
               & 1U);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_d;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)
                ? 0U : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)
                ? 0U : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)
                ? 0U : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DN;
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = 0ULL;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = 0ULL;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SP = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_is_fp8_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_dly_SB = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP = 0ULL;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP = 0ULL;
    }
    __Vdly__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready 
        = (1U & ((~ (IData)(vlTOPp->reset_ni)) | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                                   ? 
                                                  (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_SB))
                                                   : 
                                                  (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Final_state_S) 
                                                    | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)) 
                                                   | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready)))));
    if (vlTOPp->reset_ni) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DN;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)
                ? 0U : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S 
            = (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Final_state_S) 
                | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id))
                ? 0U : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S)
                         ? (0x3fU & ((IData)(1U) + (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S)))
                         : 0U));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DN;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DN;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d) 
               & 1U);
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP = 0ULL;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                = (0xffffffU & (IData)((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                        >> 0xaU)));
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)
                ? 0U : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DN;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SN) 
               & 1U);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SN) 
               & 1U);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SN) 
               & 1U);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SN) 
               & 1U);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SN) 
               & 1U);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SN) 
               & 1U);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DN) 
               & 1U);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S 
            = (((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)) 
                & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid) 
                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready)) 
                   | ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_done)) 
                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S)))) 
               & 1U);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S 
            = (((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)) 
                & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid) 
                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready)) 
                   | ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_done)) 
                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S)))) 
               & 1U);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DN;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S 
            = (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                ? 0U : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S 
            = (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt)
                : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q 
            = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__op_starting)
                ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt)
                : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_d;
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP = 0ULL;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q = 0U;
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q = 0U;
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q 
        = ((IData)(vlTOPp->reset_ni) ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                         ? (1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                                  >> 1U))
                                         : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n))
            : 0U);
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q 
                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                 >> 1U)));
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q 
        = ((IData)(vlTOPp->reset_ni) & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req) 
                                        & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err))));
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q 
                = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtvec_init)
                    ? 1U : (1U | (0xffffff00U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = 1U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q 
                = (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                           >> 1U));
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q = 0ULL;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q = 0ULL;
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q 
        = ((IData)(vlTOPp->reset_ni) & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = 0x10U;
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q 
        = ((IData)(vlTOPp->reset_ni) & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = 0x40000003U;
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__use_rs3_q = 0U;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q 
        = ((IData)(vlTOPp->reset_ni) ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d)
            : 3U);
    if (vlTOPp->reset_ni) {
        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q 
                = (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U));
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q 
                = (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U));
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
              & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
             & (0x7a0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr)))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q 
                = ((2U > vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                    ? (1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                    : 1U);
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q = 0U;
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q 
        = ((IData)(vlTOPp->reset_ni) & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs 
        = ((IData)(vlTOPp->reset_ni) ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)
            : 0U);
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = 0U;
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
        = ((IData)(vlTOPp->reset_ni) & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q 
        = ((IData)(vlTOPp->reset_ni) & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_store_err));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q 
        = ((IData)(vlTOPp->reset_ni) & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_load_err));
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q = 0U;
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q 
        = ((IData)(vlTOPp->reset_ni) & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d));
    if (vlTOPp->reset_ni) {
        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_we_ex))) {
            __Vdlyvval__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i
                [0U];
            __Vdlyvset__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 1U;
        }
    } else {
        __Vdlyvset__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 1U;
    }
    if (vlTOPp->reset_ni) {
        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_we_ex))) {
            __Vdlyvval__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i
                [1U];
            __Vdlyvset__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 1U;
        }
    } else {
        __Vdlyvset__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 1U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x8000U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [0xfU];
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x4000U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [0xeU];
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x2000U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [0xdU];
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x1000U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [0xcU];
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x800U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [0xbU];
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x400U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [0xaU];
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x200U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [9U];
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x100U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [8U];
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x80U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [7U];
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x40U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [6U];
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [5U];
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [4U];
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [3U];
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [2U];
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [1U];
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [0U];
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x8000U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x4000U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x2000U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x1000U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x800U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x400U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x200U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x100U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x80U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x40U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->reset_ni) {
        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
    }
    if (__Vdlyvset__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U] 
            = __Vdlyvval__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    }
    if (__Vdlyvset__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v1) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U] = 0ULL;
    }
    if (__Vdlyvset__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
            = __Vdlyvval__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    }
    if (__Vdlyvset__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v3) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U] = 0ULL;
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_outputs[0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_outputs[0U]) 
           | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_tag_q));
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = 0U;
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffffff00000000ULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | (IData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Start_dly_S 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S) 
           | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
        = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP))
            ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP
            : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP 
               << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew 
        = (7U & ((7U == (7U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                               >> 0xcU))) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_csr__DOT__rdata_q
                  : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                     >> 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_done 
        = ((IData)(vlTOPp->reset_ni) & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                         ? (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_SB))
                                         : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Final_state_S)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Sign_res_D 
        = ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)) 
           & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP)) 
              & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP)
                  ? ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))) 
                     & ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S) 
                            & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP))) 
                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP)))
                  : (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))
                      ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP)
                      : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP)
                          ? ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))) 
                             & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP))
                          : (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                              & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))
                              ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP)
                              : ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP) 
                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S))) 
                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP))))))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_3 
        = (0x3ffffffffffffffULL & ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                    ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                        ? (QData)((IData)(
                                                          (0x1fffU 
                                                           & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3)))))
                                        : (QData)((IData)(
                                                          (0xffffU 
                                                           & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3))))))
                                    : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                        ? (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3)
                                        : (QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3))))))));
    vlTOPp->__Vtableidx8 = (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S) 
                             << 2U) | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__State_ctl_S 
        = vlTOPp->__Vtable8_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__State_ctl_S
        [vlTOPp->__Vtableidx8];
    vlTOPp->__Vtableidx9 = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE 
        = vlTOPp->__Vtable9_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE
        [vlTOPp->__Vtableidx9];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS 
        = vlTOPp->__Vtable9_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS
        [vlTOPp->__Vtableidx9];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__First_iteration_cell_div_a_D 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
            ? (((QData)((IData)((0x1ffU & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                   >> 0x2dU))))) 
                << 0x31U) | (((QData)((IData)((1U & 
                                               ((3U 
                                                 == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                 ? 
                                                (3U 
                                                 == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                 : (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                            >> 0x2cU)))))) 
                              << 0x30U) | (((QData)((IData)(
                                                            (3U 
                                                             & (IData)(
                                                                       (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                                        >> 0x2aU))))) 
                                            << 0x2eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((2U 
                                                                    == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    ? 
                                                                   (2U 
                                                                    == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    : (IData)(
                                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                                               >> 0x29U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(
                                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                                              >> 0x1dU))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((0U 
                                                                          == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                          ? 
                                                                         (0U 
                                                                          == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                          : (IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                                                >> 0x1cU)))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((0xfffffff0U 
                                                                        & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP) 
                                                                           << 4U)) 
                                                                       | ((1U 
                                                                           == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                          << 3U))))))))))
            : (((QData)((IData)((0x1ffU & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                   >> 0x30U))))) 
                << 0x31U) | (((QData)((IData)((1U & 
                                               ((3U 
                                                 == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                 ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)
                                                 : (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                            >> 0x2fU)))))) 
                              << 0x30U) | (((QData)((IData)(
                                                            (3U 
                                                             & (IData)(
                                                                       (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                                        >> 0x2dU))))) 
                                            << 0x2eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((2U 
                                                                    == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)
                                                                    : (IData)(
                                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                                               >> 0x2cU)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(
                                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                                              >> 0x20U))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((0U 
                                                                          == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)
                                                                          : (IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                                                >> 0x1fU)))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((0xfffffff0U 
                                                                        & ((IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                                                >> 3U)) 
                                                                           << 4U)) 
                                                                       | (((1U 
                                                                            == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)) 
                                                                          << 3U)))))))))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
        = (0x3fffffffffffffULL & ((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                   ? ((QData)((IData)(
                                                      (0x1ffffffU 
                                                       & (~ (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                                                     >> 0x1dU)))))) 
                                      << 0x1dU) : (
                                                   (1U 
                                                    == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                    ? 
                                                   (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xfffU 
                                                                      & (~ (IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                                                                >> 0x2aU)))))) 
                                                     << 0x2aU)
                                                     : 
                                                    ((QData)((IData)(
                                                                     (0x1ffU 
                                                                      & (~ (IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                                                                >> 0x2dU)))))) 
                                                     << 0x2dU)))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
        = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
            ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                ? ((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                    ? ((QData)((IData)((0xfffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                       << 0x2dU) : (((7U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S)) 
                                     | (6U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S)))
                                     ? ((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                                    >> 1U))))) 
                                        << 0x31U) : 
                                    ((QData)((IData)(
                                                     (0xfffU 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                     << 0x2dU))) : 
               ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                 ? ((QData)((IData)((0x7fffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                    << 0x2aU) : ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                  ? ((QData)((IData)(
                                                     (0x7fffU 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                     << 0x2aU) : ((8U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7fffU 
                                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                    << 0x2aU)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                      ? 
                                                     ((QData)((IData)(
                                                                      (0x7fffU 
                                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                      << 0x2aU)
                                                      : 
                                                     ((QData)((IData)(
                                                                      (0x7ffU 
                                                                       & (IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                                                >> 1U))))) 
                                                      << 0x2eU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                      ? 
                                                     ((QData)((IData)(
                                                                      (0x7ffU 
                                                                       & (IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                                                                >> 1U))))) 
                                                      << 0x2eU)
                                                      : 
                                                     ((QData)((IData)(
                                                                      (0x1ffU 
                                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                      << 0x30U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0x1ffU 
                                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                     << 0x30U)
                                                     : 
                                                    ((QData)((IData)(
                                                                     (0x7fffU 
                                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                     << 0x2aU))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0x7fffU 
                                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                     << 0x2aU)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                      ? 
                                                     ((QData)((IData)(
                                                                      (0x7fffU 
                                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                      << 0x2aU)
                                                      : 
                                                     ((QData)((IData)(
                                                                      (0x7fffU 
                                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                      << 0x2aU))))))))
            : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                ? ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                    ? ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                        ? ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                            ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP
                            : ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                    ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP
                                    : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                        ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP
                                        : (0x1fffffffffffff0ULL 
                                           & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                              << 3U))))
                                : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                    ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                        ? (0x1fffffffffffff0ULL 
                                           & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                              << 3U))
                                        : (0x1ffffffffffffc0ULL 
                                           & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                              << 6U)))
                                    : (0x1ffffffffffffc0ULL 
                                       & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                          << 6U)))))
                        : ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                            ? ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                    ? (0x1fffffffffffe00ULL 
                                       & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                          << 9U)) : 
                                   ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                     ? (0x1fffffffffffe00ULL 
                                        & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                           << 9U)) : 
                                    (0x1fffffffffff000ULL 
                                     & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                        << 0xcU))))
                                : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                    ? (0x1fffffffffff000ULL 
                                       & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                          << 0xcU))
                                    : (0x1ffffffffff8000ULL 
                                       & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                          << 0xfU))))
                            : ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                    ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                        ? (0x1ffffffffff8000ULL 
                                           & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                              << 0xfU))
                                        : (0x1fffffffffc0000ULL 
                                           & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                              << 0x12U)))
                                    : (0x1fffffffffc0000ULL 
                                       & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                          << 0x12U)))
                                : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                    ? (0x1ffffffffe00000ULL 
                                       & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                          << 0x15U))
                                    : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                        ? (0x1ffffffffe00000ULL 
                                           & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                              << 0x15U))
                                        : (0x1ffffffff000000ULL 
                                           & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                              << 0x18U)))))))
                    : ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                        ? ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                            ? ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                    ? (0x1ffffffff000000ULL 
                                       & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                          << 0x18U))
                                    : ((QData)((IData)(
                                                       (0x3fffffffU 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                       << 0x1bU)) : 
                               ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                 ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                     ? ((QData)((IData)(
                                                        (0x3fffffffU 
                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                        << 0x1bU) : 
                                    ((QData)((IData)(
                                                     (0x7ffffffU 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                     << 0x1eU)) : ((QData)((IData)(
                                                                   (0x7ffffffU 
                                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                   << 0x1eU)))
                            : ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                    ? ((QData)((IData)(
                                                       (0xffffffU 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                       << 0x21U) : 
                                   ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                     ? ((QData)((IData)(
                                                        (0xffffffU 
                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                        << 0x21U) : 
                                    ((QData)((IData)(
                                                     (0x1fffffU 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                     << 0x24U))) : 
                               ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                 ? ((QData)((IData)(
                                                    (0x1fffffU 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                    << 0x24U) : ((QData)((IData)(
                                                                 (0x3ffffU 
                                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                 << 0x27U))))
                        : ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                            ? ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                    ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                        ? ((QData)((IData)(
                                                           (0x3ffffU 
                                                            & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                           << 0x27U)
                                        : ((QData)((IData)(
                                                           (0x7fffU 
                                                            & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                           << 0x2aU))
                                    : ((QData)((IData)(
                                                       (0x7fffU 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                       << 0x2aU)) : 
                               ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                 ? ((QData)((IData)(
                                                    (0xfffU 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                    << 0x2dU) : ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                  << 0x2dU)
                                                  : 
                                                 ((QData)((IData)(
                                                                  (0x1ffU 
                                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                  << 0x30U))))
                            : ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                    ? ((QData)((IData)(
                                                       (0x1ffU 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                       << 0x30U) : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)
                                : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))))
                : ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                    ? ((QData)((IData)((0x7ffffffU 
                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                       << 0x1eU) : ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                     ? ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                         ? ((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                            << 0x1eU)
                                         : ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                             ? ((2U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                 ? 
                                                ((QData)((IData)(
                                                                 (0xffffffU 
                                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                 << 0x21U)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffffffU 
                                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                  << 0x21U)
                                                  : 
                                                 ((QData)((IData)(
                                                                  (0x1fffffU 
                                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                  << 0x24U)))
                                             : ((2U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                 ? 
                                                ((QData)((IData)(
                                                                 (0x1fffffU 
                                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                 << 0x24U)
                                                 : 
                                                ((QData)((IData)(
                                                                 (0x3ffffU 
                                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                 << 0x27U))))
                                     : ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                         ? ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                             ? ((2U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0x3ffffU 
                                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                  << 0x27U)
                                                  : 
                                                 ((QData)((IData)(
                                                                  (0x7fffU 
                                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                  << 0x2aU))
                                                 : 
                                                ((QData)((IData)(
                                                                 (0x7fffU 
                                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                 << 0x2aU))
                                             : ((2U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                 ? 
                                                ((QData)((IData)(
                                                                 (0xfffU 
                                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                 << 0x2dU)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                  << 0x2dU)
                                                  : 
                                                 ((QData)((IData)(
                                                                  (0x1ffU 
                                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                  << 0x30U))))
                                         : ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                             ? ((2U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                 ? 
                                                ((QData)((IData)(
                                                                 (0x1ffU 
                                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                 << 0x30U)
                                                 : 
                                                ((QData)((IData)(
                                                                 (0x7ffffffU 
                                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                 << 0x1eU))
                                             : ((2U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                 ? 
                                                ((QData)((IData)(
                                                                 (0x7ffffffU 
                                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                 << 0x1eU)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0x7ffffffU 
                                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                  << 0x1eU)
                                                  : 
                                                 ((QData)((IData)(
                                                                  (0x7ffffffU 
                                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))) 
                                                  << 0x1eU)))))))));
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
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev 
        = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev)) 
           | (1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q) 
                    >> 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev 
        = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev)) 
           | (2U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q) 
                    << 1U)));
    if (vlTOPp->reset_ni) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d;
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = 0U;
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_bw_pp 
        = (((QData)((IData)((1U & (~ ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q 
                                               >> 0x20U)) 
                                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q)))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q))))))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d 
        = ((3U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d)) 
           | (4U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                    >> 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d 
        = ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d)) 
           | (3U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                    >> 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_priv_lvl[1U] 
        = (3U & ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                  ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                     >> 2U) : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0xfU) : ((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                    >> 0xcU))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q 
        = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q)) 
           | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
              << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q 
        = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q)) 
           | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
        = ((IData)(vlTOPp->reset_ni) & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
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
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xfU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xeU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xdU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xcU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xbU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xaU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[9U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[8U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[7U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[6U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[5U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[4U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[3U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xfU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xeU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xdU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xcU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xbU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xaU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[9U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[8U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[7U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[6U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[5U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[4U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[3U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0xcU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0xbU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0xaU] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[9U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[8U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[7U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[6U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[5U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[4U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[3U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
            = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                             >> 0x34U)));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
            = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                             >> 0x32U)));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
            = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                             >> 0x30U)));
    } else {
        if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
            if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                    = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                     >> 0x34U)));
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                    = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                     >> 0x32U)));
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                    = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                     >> 0x30U)));
            } else {
                if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                        = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                         >> 0x34U)));
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                        = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                         >> 0x32U)));
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                        = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                         >> 0x30U)));
                } else {
                    if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x34U)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x32U)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x30U)));
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        }
                    }
                }
            }
        } else {
            if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                    if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        }
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 4U)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 2U)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm));
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                    if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0xaU)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 8U)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 6U)));
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x10U)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0xeU)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0xcU)));
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x16U)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x14U)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x12U)));
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x1cU)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x1aU)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x18U)));
                        }
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x22U)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x20U)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x1eU)));
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x28U)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x26U)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x24U)));
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x2eU)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x2cU)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x2aU)));
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x34U)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x32U)));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x30U)));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready 
        = __Vdly__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Final_state_S 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S) 
           == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__State_ctl_S));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DN 
        = (0x1fffU & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Start_dly_S)
                       ? ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                             ? ((0x2000U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                            << 2U)) 
                                | ((0x1000U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                               << 1U)) 
                                   | ((0x800U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP)) 
                                      | (0x7ffU & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                   >> 1U)))))
                             : ((0x2000U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                            << 2U)) 
                                | ((0x1000U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                               << 1U)) 
                                   | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP)))) 
                           + ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                               ? (1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP))
                               : ((0x2000U & ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP) 
                                                  >> 0xbU)) 
                                              << 0xdU)) 
                                  | ((0x1000U & ((~ 
                                                  ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP) 
                                                   >> 0xbU)) 
                                                 << 0xcU)) 
                                     | (0xfffU & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP))))))) 
                          + ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
                              ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE
                              : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS))
                       : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[0U] 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S)
            ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                ? 0ULL : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP)
            : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__First_iteration_cell_div_a_D);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB 
        = (((QData)((IData)((0x1ffU & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                               >> 0x2dU))))) 
            << 0x31U) | (((QData)((IData)((1U & ((3U 
                                                  == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                  ? 
                                                 (3U 
                                                  == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                  : (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                                             >> 0x2cU)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (3U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                                                    >> 0x2aU))))) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((2U 
                                                              == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                              ? 
                                                             (2U 
                                                              == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                              : (IData)(
                                                                        (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                                                         >> 0x29U)))))) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            (0xfffU 
                                                             & (IData)(
                                                                       (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                                                        >> 0x1dU))))) 
                                            << 0x21U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((0U 
                                                                    == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    ? 
                                                                   (0U 
                                                                    == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    : (IData)(
                                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                                                               >> 0x1cU)))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0xfffffff0U 
                                                                  & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB) 
                                                                     << 4U)) 
                                                                 | ((1U 
                                                                     == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                    << 3U))))))))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_OF_S 
        = (1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)) 
                 & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP)) 
                    & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP)
                        ? ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                               & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))) 
                           & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S) 
                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP))))
                        : (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                            & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP)) 
                           | ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP)) 
                              & ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))) 
                                 & ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP) 
                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S))) 
                                    & ((0U != (0xfffU 
                                               & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                       & ((~ ((1U == 
                                               (0xfffU 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                              & (~ (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                            >> 0x38U))))) 
                                          & ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                 >> 0xcU)) 
                                             & (((((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                     >> 8U) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) 
                                                   | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                       >> 0xbU) 
                                                      & (1U 
                                                         == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                  | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                      >> 5U) 
                                                     & (2U 
                                                        == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                 | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                     >> 8U) 
                                                    & (3U 
                                                       == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                | ((((((0xffU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                       & (0U 
                                                          == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) 
                                                      | ((0x7ffU 
                                                          == 
                                                          (0x7ffU 
                                                           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                         & (1U 
                                                            == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                     | ((0x1fU 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                        & (2U 
                                                           == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                    | ((0xffU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                       & (3U 
                                                          == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                              >> 0x38U)))))))))))))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_res_norm_D 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)
            ? 0x7ffU : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP)
                         ? 0x7ffU : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP)
                                      ? 0x7ffU : (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))
                                                   ? 0U
                                                   : 
                                                  (0x7ffU 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP)
                                                       ? 
                                                      (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))
                                                        ? 0x7ffU
                                                        : 0U)
                                                       : 
                                                      (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))
                                                        ? 0x7ffU
                                                        : 
                                                       (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP) 
                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S))
                                                         ? 0x7ffU
                                                         : 
                                                        ((0U 
                                                          == 
                                                          (0xfffU 
                                                           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)))
                                                          ? 0U
                                                          : 
                                                         (((1U 
                                                            == 
                                                            (0xfffU 
                                                             & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                           & (~ (IData)(
                                                                        (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                                         >> 0x38U))))
                                                           ? 0U
                                                           : 
                                                          ((0x1000U 
                                                            & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))
                                                            ? 0U
                                                            : 
                                                           (((((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                 >> 8U) 
                                                                & (0U 
                                                                   == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) 
                                                               | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                   >> 0xbU) 
                                                                  & (1U 
                                                                     == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                              | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                  >> 5U) 
                                                                 & (2U 
                                                                    == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                             | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                 >> 8U) 
                                                                & (3U 
                                                                   == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))))
                                                             ? 0x7ffU
                                                             : 
                                                            ((((((0xffU 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                 & (0U 
                                                                    == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) 
                                                                | ((0x7ffU 
                                                                    == 
                                                                    (0x7ffU 
                                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                   & (1U 
                                                                      == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                               | ((0x1fU 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                  & (2U 
                                                                     == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                              | ((0xffU 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                 & (3U 
                                                                    == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))))
                                                              ? 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                                          >> 0x38U)))
                                                               ? 0x7ffU
                                                               : 
                                                              (VL_EXTENDS_II(11,13, (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)) 
                                                               - (IData)(1U)))
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                                          >> 0x38U)))
                                                               ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)
                                                               : 
                                                              (VL_EXTENDS_II(11,13, (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)) 
                                                               - (IData)(1U))))))))))))))));
    __Vtemp659[0U] = 0U;
    __Vtemp659[1U] = (0xffe00000U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                     << 0x15U));
    __Vtemp659[2U] = ((0x1fffffU & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                    >> 0xbU)) | (0xffe00000U 
                                                 & ((IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                             >> 0x20U)) 
                                                    << 0x15U)));
    __Vtemp659[3U] = (0x1fffffU & ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                            >> 0x20U)) 
                                   >> 0xbU));
    VL_SHIFTR_WWI(110,110,13, __Vtemp660, __Vtemp659, 
                  (0x1fffU & ((IData)(2U) + (~ VL_EXTENDS_II(13,13, (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_forround_D 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)
            ? 0ULL : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP)
                       ? 0ULL : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP)
                                  ? 0ULL : (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                             & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))
                                             ? 0ULL
                                             : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP)
                                                 ? 0ULL
                                                 : 
                                                (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))
                                                  ? 0ULL
                                                  : 
                                                 (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP) 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S))
                                                   ? 0ULL
                                                   : 
                                                  (0x1ffffffffffffffULL 
                                                   & ((0U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)))
                                                       ? 
                                                      ((0ULL 
                                                        != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D)
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D)))) 
                                                        << 0x34U)
                                                        : 0ULL)
                                                       : 
                                                      (((1U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                        & (~ (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                                      >> 0x38U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0xfU 
                                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D)))) 
                                                        << 0x35U)
                                                        : 
                                                       ((0x1000U 
                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          __Vtemp660[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           __Vtemp660[0U])))
                                                         : 
                                                        (((((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                              >> 8U) 
                                                             & (0U 
                                                                == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) 
                                                            | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                >> 0xbU) 
                                                               & (1U 
                                                                  == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                           | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                               >> 5U) 
                                                              & (2U 
                                                                 == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                          | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                              >> 8U) 
                                                             & (3U 
                                                                == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))))
                                                          ? 0ULL
                                                          : 
                                                         ((((((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                              & (0U 
                                                                 == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) 
                                                             | ((0x7ffU 
                                                                 == 
                                                                 (0x7ffU 
                                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                & (1U 
                                                                   == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                            | ((0x1fU 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                               & (2U 
                                                                  == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                           | ((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                              & (3U 
                                                                 == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                                       >> 0x38U)))
                                                            ? 0ULL
                                                            : 
                                                           ((QData)((IData)(
                                                                            (7U 
                                                                             & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D)))) 
                                                            << 0x36U))
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                                       >> 0x38U)))
                                                            ? 
                                                           ((QData)((IData)(
                                                                            (0xfU 
                                                                             & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D)))) 
                                                            << 0x35U)
                                                            : 
                                                           ((QData)((IData)(
                                                                            (7U 
                                                                             & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D)))) 
                                                            << 0x36U)))))))))))))));
    __Vtemp663[0U] = 0U;
    __Vtemp663[1U] = (0xffe00000U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                     << 0x15U));
    __Vtemp663[2U] = ((0x1fffffU & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                    >> 0xbU)) | (0xffe00000U 
                                                 & ((IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                             >> 0x20U)) 
                                                    << 0x15U)));
    __Vtemp663[3U] = (0x1fffffU & ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                            >> 0x20U)) 
                                   >> 0xbU));
    VL_SHIFTR_WWI(110,110,13, __Vtemp664, __Vtemp663, 
                  (0x1fffU & ((IData)(2U) + (~ VL_EXTENDS_II(13,13, (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_res_norm_D 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)
            ? 0x8000000000000ULL : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP)
                                     ? 0x8000000000000ULL
                                     : (0x1fffffffffffffULL 
                                        & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP)
                                            ? (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))
                                                ? 0x8000000000000ULL
                                                : (
                                                   ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S) 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP))
                                                    ? 0x8000000000000ULL
                                                    : 0ULL))
                                            : (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))
                                                ? 0ULL
                                                : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP)
                                                    ? 
                                                   (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))
                                                     ? 0x8000000000000ULL
                                                     : 0ULL)
                                                    : 
                                                   (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))
                                                     ? 0ULL
                                                     : 
                                                    (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP) 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S))
                                                      ? 0x8000000000000ULL
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)))
                                                       ? 
                                                      ((0ULL 
                                                        != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D)
                                                        ? 
                                                       (0xfffffffffffffULL 
                                                        & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                           >> 5U))
                                                        : 0ULL)
                                                       : 
                                                      (((1U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                        & (~ (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                                      >> 0x38U))))
                                                        ? 
                                                       (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                        >> 4U)
                                                        : 
                                                       ((0x1000U 
                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          (0x3fffU 
                                                                           & __Vtemp664[3U]))) 
                                                          << 0x27U) 
                                                         | (((QData)((IData)(
                                                                             __Vtemp664[2U])) 
                                                             << 7U) 
                                                            | ((QData)((IData)(
                                                                               __Vtemp664[1U])) 
                                                               >> 0x19U)))
                                                         : 
                                                        (((((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                              >> 8U) 
                                                             & (0U 
                                                                == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) 
                                                            | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                >> 0xbU) 
                                                               & (1U 
                                                                  == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                           | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                               >> 5U) 
                                                              & (2U 
                                                                 == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                          | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                              >> 8U) 
                                                             & (3U 
                                                                == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))))
                                                          ? 0ULL
                                                          : 
                                                         ((((((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                              & (0U 
                                                                 == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) 
                                                             | ((0x7ffU 
                                                                 == 
                                                                 (0x7ffU 
                                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                & (1U 
                                                                   == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                            | ((0x1fU 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                               & (2U 
                                                                  == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)))) 
                                                           | ((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                              & (3U 
                                                                 == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                                       >> 0x38U)))
                                                            ? 0ULL
                                                            : 
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                            >> 3U))
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                                       >> 0x38U)))
                                                            ? 
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                            >> 4U)
                                                            : 
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                            >> 3U)))))))))))))));
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
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__DOT__Cin_D 
        = ((~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI
            [0U]) & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                     [0U] & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                              [0U] >> 1U) | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                             [0U])));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__DOT__Cin_D 
        = ((~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI
            [1U]) & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                     [1U] & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                              [1U] >> 1U) | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                             [1U])));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__DOT__Cin_D 
        = ((~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI
            [2U]) & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                     [2U] & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                              [2U] >> 1U) | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                             [2U])));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO 
        = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (1U & (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                    [0U])));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO 
        = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (2U & ((~ ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                         [0U] >> 1U) ^ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                        [0U])) << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO 
        = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (1U & (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                    [1U])));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO 
        = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (2U & ((~ ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                         [1U] >> 1U) ^ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                        [1U])) << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO 
        = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (1U & (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                    [2U])));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO 
        = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (2U & ((~ ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                         [2U] >> 1U) ^ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                        [2U])) << 1U)));
    if ((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upper_D 
            = ((QData)((IData)((0xffffffU & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_res_norm_D 
                                                     >> 0x1dU))))) 
               << 0x1dU);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_lower_D 
            = (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_res_norm_D 
                             >> 0x1bU)));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_sticky_bit_D 
            = (0U != (0x7ffffffU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_res_norm_D)));
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upper_D 
            = ((1U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_res_norm_D
                : ((2U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                    ? ((QData)((IData)((0x7ffU & (IData)(
                                                         (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_res_norm_D 
                                                          >> 0x2aU))))) 
                       << 0x2aU) : ((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_res_norm_D 
                                                                >> 0x2dU))))) 
                                    << 0x2dU)));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_lower_D 
            = (3U & ((1U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                      ? (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_forround_D 
                                 >> 0x37U)) : ((2U 
                                                == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                ? (IData)(
                                                          (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_res_norm_D 
                                                           >> 0x28U))
                                                : (IData)(
                                                          (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_res_norm_D 
                                                           >> 0x2bU)))));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_sticky_bit_D 
            = ((1U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                ? (0U != (0xffffffffffffffULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_forround_D))
                : ((2U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                    ? (0U != (0x3ffU & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_res_norm_D 
                                                >> 0x1eU))))
                    : (0U != (0x1fffU & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_res_norm_D 
                                                 >> 0x1eU))))));
    }
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
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[2U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_rounded_S 
        = ((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_lower_D)) 
           | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_sticky_bit_D));
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
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT____Vcellout__i_divsqrt_lei__Fflags_SO 
        = ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)
              ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SP)
              : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP)
                  ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SP)
                  : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP)
                      ? (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                          & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP)) 
                         | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S) 
                            & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP)))
                      : ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                             & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))) 
                         & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP)
                             ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))
                             : ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))) 
                                & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP) 
                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S)))))))) 
            << 4U) | ((((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)) 
                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP)) 
                           & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP)) 
                              & ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))) 
                                 & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP)
                                     ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))
                                     : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))))))) 
                       << 3U) | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_OF_S) 
                                  << 2U) | ((2U & (
                                                   ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)) 
                                                    & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP)) 
                                                       & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP)) 
                                                          & ((~ 
                                                              ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                               & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))) 
                                                             & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP)) 
                                                                & ((~ 
                                                                    ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))) 
                                                                   & ((~ 
                                                                       ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP) 
                                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S))) 
                                                                      & ((0U 
                                                                          == 
                                                                          (0xfffU 
                                                                           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)))
                                                                          ? 
                                                                         (0ULL 
                                                                          != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D)
                                                                          : 
                                                                         (((1U 
                                                                            == 
                                                                            (0xfffU 
                                                                             & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                                           & (~ (IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                                                >> 0x38U)))) 
                                                                          | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                                             >> 0xcU)))))))))) 
                                                   << 1U)) 
                                            | ((0U 
                                                != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S)) 
                                               | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_rounded_S))))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S 
        = (1U & ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP) 
                     >> 2U)) & ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP))
                                 ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP))
                                     ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_rounded_S) 
                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP))
                                     : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_rounded_S) 
                                        & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP))))
                                 : ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP)) 
                                    & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_lower_D) 
                                        >> 1U) & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_lower_D) 
                                                   | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_sticky_bit_D)) 
                                                  | (((((0U 
                                                         == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                        & (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upper_D 
                                                                   >> 0x1dU))) 
                                                       | ((1U 
                                                           == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                          & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upper_D))) 
                                                      | ((2U 
                                                          == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upper_D 
                                                                    >> 0x2aU)))) 
                                                     | ((3U 
                                                         == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                        & (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upper_D 
                                                                   >> 0x2dU))))))))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q
        [1U];
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
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D 
        = (0x3fffffffffffffULL & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upper_D 
                                  + (((QData)((IData)(
                                                      ((3U 
                                                        == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S)))) 
                                      << 0x2dU) | (
                                                   ((QData)((IData)(
                                                                    ((2U 
                                                                      == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S)))) 
                                                    << 0x2aU) 
                                                   | (QData)((IData)(
                                                                     ((((0U 
                                                                         == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S)) 
                                                                       << 0x1dU) 
                                                                      | ((1U 
                                                                          == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S)))))))));
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
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x200000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [9U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [9U] 
                                                             >> 1U))))))) 
                                  << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x400000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [9U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [9U] 
                                                             >> 1U))))))) 
                                  << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x800000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [9U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffffU 
                                                 == 
                                                 (0xffffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [9U] 
                                                             >> 1U))))))) 
                                  << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x1000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [9U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [9U] 
                                                              >> 1U))))))) 
                                   << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x2000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [9U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [9U] 
                                                              >> 1U))))))) 
                                   << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x4000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [9U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [9U] 
                                                              >> 1U))))))) 
                                   << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x8000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [9U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffffU 
                                                  == 
                                                  (0xfffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [9U] 
                                                              >> 1U))))))) 
                                   << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x10000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [9U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [9U] 
                                                               >> 1U))))))) 
                                    << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x20000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [9U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [9U] 
                                                               >> 1U))))))) 
                                    << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x40000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [9U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffffU 
                                                   == 
                                                   (0x7fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [9U] 
                                                               >> 1U))))))) 
                                    << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x80000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [9U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffffU 
                                                   == (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [9U] 
                                                               >> 1U)))))) 
                                    << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xaU] 
                                            >> 3U))) 
                              | (~ (IData)((3U == (3U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                             << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xaU] 
                                            >> 3U))) 
                              | (~ (IData)((7U == (7U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                             << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xaU] 
                                            >> 3U))) 
                              | (~ (IData)((0xfU == 
                                            (0xfU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xaU] 
                                                             >> 1U))))))) 
                             << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xaU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                                << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xaU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                                << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xaU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fU 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                                << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xaU] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                                << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xaU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xaU] 
                                                            >> 1U))))))) 
                                 << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xaU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xaU] 
                                                            >> 1U))))))) 
                                 << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xaU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xaU] 
                                                            >> 1U))))))) 
                                 << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xaU] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffU 
                                                == 
                                                (0xfffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xaU] 
                                                            >> 1U))))))) 
                                 << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xaU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffU 
                                                 == 
                                                 (0x1fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xaU] 
                                                             >> 1U))))))) 
                                  << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xaU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffU 
                                                 == 
                                                 (0x3fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xaU] 
                                                             >> 1U))))))) 
                                  << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xaU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffU 
                                                 == 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xaU] 
                                                             >> 1U))))))) 
                                  << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xaU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffU 
                                                 == 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xaU] 
                                                             >> 1U))))))) 
                                  << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xaU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffU 
                                                  == 
                                                  (0x1ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                                   << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xaU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffU 
                                                  == 
                                                  (0x3ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                                   << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xaU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffU 
                                                  == 
                                                  (0x7ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                                   << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xaU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffU 
                                                  == 
                                                  (0xfffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                                   << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x100000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xaU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffU 
                                                   == 
                                                   (0x1fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xaU] 
                                                               >> 1U))))))) 
                                    << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x200000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xaU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffU 
                                                   == 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xaU] 
                                                               >> 1U))))))) 
                                    << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x400000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xaU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffU 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xaU] 
                                                               >> 1U))))))) 
                                    << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x800000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xaU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffU 
                                                   == 
                                                   (0xffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xaU] 
                                                               >> 1U))))))) 
                                    << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x1000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xaU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x1ffffffU 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xaU] 
                                                                >> 1U))))))) 
                                     << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x2000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xaU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x3ffffffU 
                                                    == 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xaU] 
                                                                >> 1U))))))) 
                                     << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x4000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xaU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x7ffffffU 
                                                    == 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xaU] 
                                                                >> 1U))))))) 
                                     << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x8000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xaU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0xfffffffU 
                                                    == 
                                                    (0xfffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xaU] 
                                                                >> 1U))))))) 
                                     << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x10000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xaU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x1fffffffU 
                                                     == 
                                                     (0x1fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xaU] 
                                                                 >> 1U))))))) 
                                      << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x20000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xaU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x3fffffffU 
                                                     == 
                                                     (0x3fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xaU] 
                                                                 >> 1U))))))) 
                                      << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x40000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xaU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x7fffffffU 
                                                     == 
                                                     (0x7fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xaU] 
                                                                 >> 1U))))))) 
                                      << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x80000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xaU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0xffffffffU 
                                                     == (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xaU] 
                                                                 >> 1U)))))) 
                                      << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xbU] 
                                            >> 3U))) 
                              | (~ (IData)((3U == (3U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                             << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xbU] 
                                            >> 3U))) 
                              | (~ (IData)((7U == (7U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                             << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xbU] 
                                            >> 3U))) 
                              | (~ (IData)((0xfU == 
                                            (0xfU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xbU] 
                                                             >> 1U))))))) 
                             << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xbU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                                << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xbU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                                << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xbU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fU 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                                << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xbU] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                                << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xbU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xbU] 
                                                            >> 1U))))))) 
                                 << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xbU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xbU] 
                                                            >> 1U))))))) 
                                 << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xbU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xbU] 
                                                            >> 1U))))))) 
                                 << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xbU] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffU 
                                                == 
                                                (0xfffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xbU] 
                                                            >> 1U))))))) 
                                 << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xbU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffU 
                                                 == 
                                                 (0x1fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xbU] 
                                                             >> 1U))))))) 
                                  << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xbU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffU 
                                                 == 
                                                 (0x3fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xbU] 
                                                             >> 1U))))))) 
                                  << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xbU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffU 
                                                 == 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xbU] 
                                                             >> 1U))))))) 
                                  << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xbU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffU 
                                                 == 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xbU] 
                                                             >> 1U))))))) 
                                  << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xbU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffU 
                                                  == 
                                                  (0x1ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                                   << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xbU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffU 
                                                  == 
                                                  (0x3ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                                   << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xbU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffU 
                                                  == 
                                                  (0x7ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                                   << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xbU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffU 
                                                  == 
                                                  (0xfffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                                   << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x100000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xbU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffU 
                                                   == 
                                                   (0x1fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xbU] 
                                                               >> 1U))))))) 
                                    << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x200000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xbU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffU 
                                                   == 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xbU] 
                                                               >> 1U))))))) 
                                    << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x400000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xbU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffU 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xbU] 
                                                               >> 1U))))))) 
                                    << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x800000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xbU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffU 
                                                   == 
                                                   (0xffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xbU] 
                                                               >> 1U))))))) 
                                    << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x1000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xbU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x1ffffffU 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xbU] 
                                                                >> 1U))))))) 
                                     << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x2000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xbU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x3ffffffU 
                                                    == 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xbU] 
                                                                >> 1U))))))) 
                                     << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x4000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xbU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x7ffffffU 
                                                    == 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xbU] 
                                                                >> 1U))))))) 
                                     << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x8000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xbU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0xfffffffU 
                                                    == 
                                                    (0xfffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xbU] 
                                                                >> 1U))))))) 
                                     << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x10000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xbU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x1fffffffU 
                                                     == 
                                                     (0x1fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xbU] 
                                                                 >> 1U))))))) 
                                      << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x20000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xbU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x3fffffffU 
                                                     == 
                                                     (0x3fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xbU] 
                                                                 >> 1U))))))) 
                                      << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x40000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xbU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x7fffffffU 
                                                     == 
                                                     (0x7fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xbU] 
                                                                 >> 1U))))))) 
                                      << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x80000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xbU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0xffffffffU 
                                                     == (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xbU] 
                                                                 >> 1U)))))) 
                                      << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xcU] 
                                            >> 3U))) 
                              | (~ (IData)((3U == (3U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                             << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xcU] 
                                            >> 3U))) 
                              | (~ (IData)((7U == (7U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                             << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xcU] 
                                            >> 3U))) 
                              | (~ (IData)((0xfU == 
                                            (0xfU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xcU] 
                                                             >> 1U))))))) 
                             << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xcU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                                << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xcU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                                << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xcU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fU 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                                << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xcU] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                                << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xcU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xcU] 
                                                            >> 1U))))))) 
                                 << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xcU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xcU] 
                                                            >> 1U))))))) 
                                 << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xcU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xcU] 
                                                            >> 1U))))))) 
                                 << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xcU] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffU 
                                                == 
                                                (0xfffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xcU] 
                                                            >> 1U))))))) 
                                 << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xcU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffU 
                                                 == 
                                                 (0x1fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xcU] 
                                                             >> 1U))))))) 
                                  << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xcU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffU 
                                                 == 
                                                 (0x3fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xcU] 
                                                             >> 1U))))))) 
                                  << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xcU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffU 
                                                 == 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xcU] 
                                                             >> 1U))))))) 
                                  << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xcU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffU 
                                                 == 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xcU] 
                                                             >> 1U))))))) 
                                  << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xcU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffU 
                                                  == 
                                                  (0x1ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                                   << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xcU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffU 
                                                  == 
                                                  (0x3ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                                   << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xcU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffU 
                                                  == 
                                                  (0x7ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                                   << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xcU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffU 
                                                  == 
                                                  (0xfffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                                   << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x100000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xcU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffU 
                                                   == 
                                                   (0x1fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xcU] 
                                                               >> 1U))))))) 
                                    << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x200000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xcU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffU 
                                                   == 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xcU] 
                                                               >> 1U))))))) 
                                    << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x400000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xcU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffU 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xcU] 
                                                               >> 1U))))))) 
                                    << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x800000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xcU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffU 
                                                   == 
                                                   (0xffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xcU] 
                                                               >> 1U))))))) 
                                    << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x1000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xcU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x1ffffffU 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xcU] 
                                                                >> 1U))))))) 
                                     << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x2000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xcU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x3ffffffU 
                                                    == 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xcU] 
                                                                >> 1U))))))) 
                                     << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x4000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xcU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x7ffffffU 
                                                    == 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xcU] 
                                                                >> 1U))))))) 
                                     << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x8000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xcU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0xfffffffU 
                                                    == 
                                                    (0xfffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xcU] 
                                                                >> 1U))))))) 
                                     << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x10000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xcU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x1fffffffU 
                                                     == 
                                                     (0x1fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xcU] 
                                                                 >> 1U))))))) 
                                      << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x20000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xcU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x3fffffffU 
                                                     == 
                                                     (0x3fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xcU] 
                                                                 >> 1U))))))) 
                                      << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x40000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xcU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x7fffffffU 
                                                     == 
                                                     (0x7fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xcU] 
                                                                 >> 1U))))))) 
                                      << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x80000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xcU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0xffffffffU 
                                                     == (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xcU] 
                                                                 >> 1U)))))) 
                                      << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xdU] 
                                            >> 3U))) 
                              | (~ (IData)((3U == (3U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                             << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xdU] 
                                            >> 3U))) 
                              | (~ (IData)((7U == (7U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                             << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xdU] 
                                            >> 3U))) 
                              | (~ (IData)((0xfU == 
                                            (0xfU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xdU] 
                                                             >> 1U))))))) 
                             << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xdU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                                << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xdU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                                << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xdU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fU 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                                << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xdU] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                                << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xdU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xdU] 
                                                            >> 1U))))))) 
                                 << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xdU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xdU] 
                                                            >> 1U))))))) 
                                 << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xdU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xdU] 
                                                            >> 1U))))))) 
                                 << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xdU] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffU 
                                                == 
                                                (0xfffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xdU] 
                                                            >> 1U))))))) 
                                 << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xdU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffU 
                                                 == 
                                                 (0x1fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xdU] 
                                                             >> 1U))))))) 
                                  << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xdU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffU 
                                                 == 
                                                 (0x3fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xdU] 
                                                             >> 1U))))))) 
                                  << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xdU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffU 
                                                 == 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xdU] 
                                                             >> 1U))))))) 
                                  << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xdU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffU 
                                                 == 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xdU] 
                                                             >> 1U))))))) 
                                  << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xdU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffU 
                                                  == 
                                                  (0x1ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                                   << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xdU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffU 
                                                  == 
                                                  (0x3ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                                   << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xdU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffU 
                                                  == 
                                                  (0x7ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                                   << 0x12U)));
}
