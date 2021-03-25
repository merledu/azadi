// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAzadi_top_verilator.h for the primary calling header

#include "VAzadi_top_verilator_tlul_socket_m1__pi7.h"
#include "VAzadi_top_verilator__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VAzadi_top_verilator_tlul_socket_m1__pi7::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__22(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi7::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__22\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hfifo_rspvalid = ((2U & (IData)(this->__PVT__hfifo_rspvalid)) 
                                   | (1U & ((IData)(
                                                    (this->__PVT__drsp_fifo_o 
                                                     >> 0x33U)) 
                                            & (~ (IData)(
                                                         (this->__PVT__drsp_fifo_o 
                                                          >> 0x23U))))));
    this->__PVT__hfifo_rspvalid = ((1U & (IData)(this->__PVT__hfifo_rspvalid)) 
                                   | (2U & (((IData)(
                                                     (this->__PVT__drsp_fifo_o 
                                                      >> 0x33U)) 
                                             & (IData)(
                                                       (this->__PVT__drsp_fifo_o 
                                                        >> 0x23U))) 
                                            << 1U)));
}

VL_INLINE_OPT void VAzadi_top_verilator_tlul_socket_m1__pi7::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__71(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi7::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__71\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((2U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((1U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (2U & (((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)))));
}

VL_INLINE_OPT void VAzadi_top_verilator_tlul_socket_m1__pi7::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__78(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi7::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__78\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (2U & ((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
}

VL_INLINE_OPT void VAzadi_top_verilator_tlul_socket_m1__pi7::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__85(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi7::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__85\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    }
    if ((2U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator_tlul_socket_m1__pi7::_combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__156(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi7::_combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__156\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp50[3];
    WData/*95:0*/ __Vtemp51[3];
    // Body
    this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (2U & ((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
    this->__PVT__hgrant = ((1U & (IData)(this->__PVT__drsp_fifo_o))
                            ? (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
                            : 0U);
    this->__PVT__hrsp_fifo_i[0U] = (((QData)((IData)(
                                                     (1U 
                                                      & (IData)(this->__PVT__hfifo_rspvalid)))) 
                                     << 0x33U) | (((QData)((IData)(
                                                                   (7U 
                                                                    & (IData)(
                                                                              (this->__PVT__drsp_fifo_o 
                                                                               >> 0x30U))))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2dU))))) 
                                                      << 0x2dU) 
                                                     | (((QData)((IData)(
                                                                         (3U 
                                                                          & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2bU))))) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(
                                                                            (0x7fU 
                                                                             & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x24U))))) 
                                                            << 0x23U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x22U))))) 
                                                               << 0x22U) 
                                                              | (((QData)((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 2U))) 
                                                                  << 2U) 
                                                                 | (QData)((IData)(
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(this->__PVT__hgrant))))))))))));
    this->__PVT__hrsp_fifo_i[1U] = (((QData)((IData)(
                                                     (1U 
                                                      & ((IData)(this->__PVT__hfifo_rspvalid) 
                                                         >> 1U)))) 
                                     << 0x33U) | (((QData)((IData)(
                                                                   (7U 
                                                                    & (IData)(
                                                                              (this->__PVT__drsp_fifo_o 
                                                                               >> 0x30U))))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2dU))))) 
                                                      << 0x2dU) 
                                                     | (((QData)((IData)(
                                                                         (3U 
                                                                          & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2bU))))) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(
                                                                            (0x7fU 
                                                                             & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x24U))))) 
                                                            << 0x23U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x22U))))) 
                                                               << 0x22U) 
                                                              | (((QData)((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 2U))) 
                                                                  << 2U) 
                                                                 | (QData)((IData)(
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(this->__PVT__hgrant) 
                                                                                >> 1U))))))))))));
    __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o 
        = ((0xffffffffffffeULL & __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->__PVT__hrsp_fifo_i
                                           [0U])))));
    __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o 
        = ((0x8000000000001ULL & __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->__PVT__hrsp_fifo_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o 
        = ((0x7ffffffffffffULL & __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o 
        = ((0xffffffffffffeULL & __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->__PVT__hrsp_fifo_i
                                           [1U])))));
    __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o 
        = ((0x8000000000001ULL & __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->__PVT__hrsp_fifo_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o 
        = ((0x7ffffffffffffULL & __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    this->tl_h_o[0U] = __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o;
    this->tl_h_o[1U] = __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_3__tl_h_o[0U] 
        = this->tl_h_o[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_3__tl_h_o[1U] 
        = this->tl_h_o[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_3__tl_h_o
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_3__tl_h_o
        [1U];
    VL_EXTEND_WQ(86,52, __Vtemp50, vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                 [0U]);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i[6U][0U] 
        = __Vtemp50[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i[6U][1U] 
        = __Vtemp50[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i[6U][2U] 
        = __Vtemp50[2U];
    VL_EXTEND_WQ(86,52, __Vtemp51, vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                 [1U]);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i[6U][0U] 
        = __Vtemp51[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i[6U][1U] 
        = __Vtemp51[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i[6U][2U] 
        = __Vtemp51[2U];
}

VL_INLINE_OPT void VAzadi_top_verilator_tlul_socket_m1__pi7::_combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__158(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi7::_combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__158\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    }
    if ((2U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
    }
    this->__PVT__hgrant = ((1U & (IData)(this->__PVT__drsp_fifo_o))
                            ? (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
                            : 0U);
    this->__PVT__hrsp_fifo_i[0U] = (((QData)((IData)(
                                                     (1U 
                                                      & (IData)(this->__PVT__hfifo_rspvalid)))) 
                                     << 0x33U) | (((QData)((IData)(
                                                                   (7U 
                                                                    & (IData)(
                                                                              (this->__PVT__drsp_fifo_o 
                                                                               >> 0x30U))))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2dU))))) 
                                                      << 0x2dU) 
                                                     | (((QData)((IData)(
                                                                         (3U 
                                                                          & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2bU))))) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(
                                                                            (0x7fU 
                                                                             & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x24U))))) 
                                                            << 0x23U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x22U))))) 
                                                               << 0x22U) 
                                                              | (((QData)((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 2U))) 
                                                                  << 2U) 
                                                                 | (QData)((IData)(
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(this->__PVT__hgrant))))))))))));
    this->__PVT__hrsp_fifo_i[1U] = (((QData)((IData)(
                                                     (1U 
                                                      & ((IData)(this->__PVT__hfifo_rspvalid) 
                                                         >> 1U)))) 
                                     << 0x33U) | (((QData)((IData)(
                                                                   (7U 
                                                                    & (IData)(
                                                                              (this->__PVT__drsp_fifo_o 
                                                                               >> 0x30U))))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2dU))))) 
                                                      << 0x2dU) 
                                                     | (((QData)((IData)(
                                                                         (3U 
                                                                          & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2bU))))) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(
                                                                            (0x7fU 
                                                                             & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x24U))))) 
                                                            << 0x23U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x22U))))) 
                                                               << 0x22U) 
                                                              | (((QData)((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 2U))) 
                                                                  << 2U) 
                                                                 | (QData)((IData)(
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(this->__PVT__hgrant) 
                                                                                >> 1U))))))))))));
    __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o 
        = ((0xffffffffffffeULL & __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->__PVT__hrsp_fifo_i
                                           [0U])))));
    __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o 
        = ((0x8000000000001ULL & __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->__PVT__hrsp_fifo_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o 
        = ((0x7ffffffffffffULL & __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o 
        = ((0xffffffffffffeULL & __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->__PVT__hrsp_fifo_i
                                           [1U])))));
    __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o 
        = ((0x8000000000001ULL & __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->__PVT__hrsp_fifo_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o 
        = ((0x7ffffffffffffULL & __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    this->tl_h_o[0U] = __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o;
    this->tl_h_o[1U] = __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__PLIC__tl_h_o[0U] 
        = this->tl_h_o[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__PLIC__tl_h_o[1U] 
        = this->tl_h_o[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__PLIC__tl_h_o
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__PLIC__tl_h_o
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o[3U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o[4U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o[5U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o[7U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o[8U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o[3U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o[4U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o[5U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o[7U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o[8U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
        [0xdU];
    if ((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
            [0U];
    }
    if ((1U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
            [1U];
    }
    if ((2U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
            [2U];
    }
    if ((3U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
            [3U];
    }
    if ((4U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
            [4U];
    }
    if ((5U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
            [5U];
    }
    if ((6U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
            [6U];
    }
    if ((7U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
            [7U];
    }
    if ((8U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
            [8U];
    }
    if ((9U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
            [9U];
    }
    if ((0xaU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
            [0xaU];
    }
    if ((0xbU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
            [0xbU];
    }
    if ((0xcU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
            [0xcU];
    }
}
