// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAzadi_top_verilator.h for the primary calling header

#include "VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15.h"
#include "VAzadi_top_verilator__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::__Vconfigure(VAzadi_top_verilator__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::~VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15() {
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__48(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__48\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__62(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__62\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__49(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__49\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__63(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__63\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__22(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__22\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__121(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__121\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__23(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__23\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__122(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__122\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__50(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__50\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__64(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__64\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__51(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__51\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__65(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__65\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__52(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__52\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__66(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__66\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__53(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__53\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__67(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__67\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__54(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__54\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__68(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__68\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__55(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__55\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__69(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__69\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__17(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__17\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__110(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__110\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__18(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__18\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__111(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__111\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__56(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__56\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__70(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__70\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__57(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__57\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__71(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__71\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__58(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__58\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__72(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__72\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__59(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__59\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__73(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__73\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__60(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__60\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__87(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__87\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__61(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__61\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__88(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__88\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__24(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__24\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__112(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__112\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                   [0U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                         [0U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [0U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [0U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                           [0U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                           [0U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__25(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__25\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__113(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__113\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                   [1U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                         [1U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [1U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [1U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                           [1U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                           [1U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__26(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__26\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                    [2U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                             [2U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                    [2U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                   [2U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                            [2U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                      [2U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__114(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__114\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                   [2U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                         [2U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [2U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [2U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                           [2U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                           [2U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__37(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__37\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [0U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [0U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [0U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [0U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [0U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__99(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__99\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__38(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__38\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [1U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [1U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [1U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [1U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [1U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__100(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__100\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__39(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__39\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [2U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [2U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [2U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [2U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [2U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__101(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__101\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [2U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [2U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [2U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [2U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [2U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [2U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__40(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__40\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [3U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [3U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [3U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [3U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [3U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__102(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__102\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [3U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [3U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [3U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [3U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [3U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [3U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__41(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__41\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [4U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [4U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [4U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [4U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [4U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__103(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__103\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [4U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [4U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [4U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [4U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [4U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [4U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__42(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__42\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [5U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [5U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [5U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [5U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [5U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__104(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__104\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [5U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [5U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [5U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [5U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [5U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [5U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__43(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__43\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [6U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [6U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [6U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [6U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [6U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__105(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__105\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [6U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [6U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [6U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [6U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [6U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [6U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__44(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__44\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [7U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [7U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [7U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [7U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [7U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__106(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__106\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [7U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [7U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [7U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [7U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [7U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [7U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__45(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__45\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [8U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [8U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [8U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [8U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [8U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__107(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__107\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [8U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [8U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [8U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [8U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [8U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [8U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__46(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__46\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [9U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [9U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [9U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [9U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [9U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [9U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__108(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__108\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [9U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [9U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [9U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [9U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [9U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [9U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__47(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__47\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [0xaU][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [0xaU][1U]) | (0xfffffffeU 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                        [0xaU][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [0xaU][2U]) | (0x1ffffeU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                           [0xaU][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [0xaU][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [0xaU][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__109(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__109\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [0xaU])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [0xaU] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [0xaU] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [0xaU] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [0xaU] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [0xaU] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__27(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__27\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [0U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [0U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [0U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [0U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [0U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__89(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__89\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__28(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__28\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [1U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [1U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [1U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [1U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [1U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__90(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__90\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__29(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__29\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [2U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [2U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [2U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [2U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [2U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__91(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__91\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [2U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [2U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [2U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [2U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [2U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [2U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__30(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__30\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [3U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [3U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [3U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [3U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [3U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__92(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__92\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [3U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [3U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [3U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [3U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [3U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [3U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__31(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__31\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [4U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [4U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [4U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [4U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [4U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__93(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__93\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [4U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [4U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [4U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [4U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [4U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [4U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__32(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__32\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [5U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [5U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [5U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [5U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [5U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__94(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__94\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [5U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [5U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [5U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [5U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [5U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [5U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__33(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__33\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [6U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [6U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [6U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [6U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [6U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__95(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__95\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [6U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [6U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [6U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [6U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [6U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [6U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__34(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__34\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [7U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [7U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [7U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [7U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [7U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__96(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__96\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [7U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [7U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [7U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [7U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [7U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [7U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__35(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__35\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [8U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [8U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [8U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [8U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [8U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__97(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__97\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [8U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [8U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [8U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [8U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [8U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [8U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__36(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__36\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [9U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [9U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [9U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [9U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [9U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [9U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__98(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__98\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [9U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [9U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [9U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [9U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [9U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [9U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__19(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__19\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__118(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__118\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__20(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__20\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__119(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__119\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__21(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__21\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [2U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                             [2U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                      [2U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__120(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__120\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__1(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__1\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__115(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__115\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__2(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__2\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__116(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__116\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__3(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__3\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [2U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                             [2U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                      [2U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__117(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo__117\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__4(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__4\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__74(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__74\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [0U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [0U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [0U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__5(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__5\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__75(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__75\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [1U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [1U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [1U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [1U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [1U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [1U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__6(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__6\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [2U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [2U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__76(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__76\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [2U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [2U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [2U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [2U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [2U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [2U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__7(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__7\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [3U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [3U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__77(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__77\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [3U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [3U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [3U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [3U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [3U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [3U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__8(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__8\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [4U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [4U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__78(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__78\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [4U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [4U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [4U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [4U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [4U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [4U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__9(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__9\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [5U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [5U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__79(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__79\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [5U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [5U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [5U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [5U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [5U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [5U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__10(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__10\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [6U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [6U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__80(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__80\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [6U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [6U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [6U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [6U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [6U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [6U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__11(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__11\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [7U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [7U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__81(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__81\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [7U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [7U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [7U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [7U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [7U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [7U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__12(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__12\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [8U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [8U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__82(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__82\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [8U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [8U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [8U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [8U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [8U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [8U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__13(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__13\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [9U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [9U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__83(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__83\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [9U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [9U][1U]) | (0xfffffffeU & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [9U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [9U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [9U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [9U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [9U][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__14(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__14\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [0xaU] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [0xaU] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__84(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__84\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [0xaU][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [0xaU][1U]) | (0xfffffffeU 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                        [0xaU][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0xaU][2U]) | (0x1ffffeU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                           [0xaU][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xaU][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xaU][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__15(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__15\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [0xbU] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [0xbU] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__85(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__85\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [0xbU][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [0xbU][1U]) | (0xfffffffeU 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                        [0xbU][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0xbU][2U]) | (0x1ffffeU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                           [0xbU][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xbU][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xbU][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__16(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__16\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [0xcU] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
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
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [0xcU] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__86(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__86\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [0xcU][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [0xcU][1U]) | (0xfffffffeU 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                        [0xcU][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0xcU][2U]) | (0x1ffffeU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                           [0xcU][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xcU][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xcU][0U]));
}

void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(86, tl_h_i);
    tl_h_o = VL_RAND_RESET_Q(52);
    VL_RAND_RESET_W(86, tl_d_o);
    tl_d_i = VL_RAND_RESET_Q(52);
    spare_req_i = VL_RAND_RESET_I(1);
    __PVT__spare_req_o = VL_RAND_RESET_I(1);
    spare_rsp_i = VL_RAND_RESET_I(1);
    __PVT__spare_rsp_o = VL_RAND_RESET_I(1);
}
