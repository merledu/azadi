// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vazadi_soc_top.h for the primary calling header

#include "Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1.h"
#include "Vazadi_soc_top__Syms.h"

//==========

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__35(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__35\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__53(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__53\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__36(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__36\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__54(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__54\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__37(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__37\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__55(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__55\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__38(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__38\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__56(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__56\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__39(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__39\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__57(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__57\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__40(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__40\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__58(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__58\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__41(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__41\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__59(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__59\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__42(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__42\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__60(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__60\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__43(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__43\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__61(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__61\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__44(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__44\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__62(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__62\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__45(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__45\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__63(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__63\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__46(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__46\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__64(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__64\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__47(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__47\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__65(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__65\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__48(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__48\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__66(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__66\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__49(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__49\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__67(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__67\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__50(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__50\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__68(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__68\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__51(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__51\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__82(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__82\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__52(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__52\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                        | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__83(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__83\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__23(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__23\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__102(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__102\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                   [0U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                         [0U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [0U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [0U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                           [0U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                           [0U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__24(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__24\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__103(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__103\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                   [1U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                         [1U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [1U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [1U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                           [1U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                           [1U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__25(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__25\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                    [2U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                             [2U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                    [2U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                   [2U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                            [2U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                      [2U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__104(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__104\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                   [2U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                         [2U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [2U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [2U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                           [2U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                           [2U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__26(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__26\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [0U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [0U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [0U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [0U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [0U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__93(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__93\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__27(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__27\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [1U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [1U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [1U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [1U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [1U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__94(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__94\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__28(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__28\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [2U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [2U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [2U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [2U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [2U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__95(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__95\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [2U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [2U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [2U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [2U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [2U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [2U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__29(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__29\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [3U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [3U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [3U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [3U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [3U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__96(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__96\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [3U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [3U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [3U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [3U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [3U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [3U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__30(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__30\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [4U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [4U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [4U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [4U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [4U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__97(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__97\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [4U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [4U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [4U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [4U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [4U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [4U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__31(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__31\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [5U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [5U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [5U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [5U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [5U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__98(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__98\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [5U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [5U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [5U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [5U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [5U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [5U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__32(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__32\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [6U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [6U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [6U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [6U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [6U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__99(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__99\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [6U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [6U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [6U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [6U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [6U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [6U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__33(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__33\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [7U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [7U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [7U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [7U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [7U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__100(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__100\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [7U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [7U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [7U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [7U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [7U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [7U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__34(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__34\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                   [8U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [8U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                      [8U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [8U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [8U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__101(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__101\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [8U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                             [8U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                    [8U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                   [8U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                            [8U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                      [8U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__14(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__14\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [0U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [0U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [0U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [0U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [0U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__84(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__84\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__15(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__15\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [1U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [1U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [1U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [1U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [1U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__85(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__85\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__16(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__16\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [2U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [2U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [2U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [2U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [2U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__86(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__86\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [2U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [2U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [2U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [2U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [2U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [2U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__17(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__17\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [3U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [3U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [3U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [3U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [3U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__87(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__87\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [3U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [3U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [3U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [3U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [3U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [3U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__18(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__18\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [4U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [4U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [4U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [4U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [4U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__88(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__88\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [4U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [4U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [4U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [4U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [4U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [4U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__19(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__19\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [5U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [5U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [5U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [5U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [5U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__89(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__89\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [5U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [5U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [5U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [5U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [5U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [5U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__20(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__20\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [6U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [6U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [6U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [6U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [6U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__90(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__90\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [6U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [6U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [6U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [6U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [6U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [6U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__21(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__21\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [7U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [7U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [7U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [7U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [7U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__91(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__91\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [7U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [7U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [7U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [7U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [7U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [7U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__22(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__22\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                   [8U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [8U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [8U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [8U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [8U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__92(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__92\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [8U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                             [8U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [8U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                   [8U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                            [8U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                      [8U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__1(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__1\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [0U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                    [0U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                            [0U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [0U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__69(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__69\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [0U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [0U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [0U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__2(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__2\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [1U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                    [1U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [1U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                            [1U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [1U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__70(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__70\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [1U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [1U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [1U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [1U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [1U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [1U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__3(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__3\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [2U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                    [2U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [2U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                            [2U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [2U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__71(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__71\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [2U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [2U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [2U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [2U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [2U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [2U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__4(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__4\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [3U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                    [3U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [3U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                            [3U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [3U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__72(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__72\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [3U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [3U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [3U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [3U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [3U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [3U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__5(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__5\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [4U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                    [4U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [4U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                            [4U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [4U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__73(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__73\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [4U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [4U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [4U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [4U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [4U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [4U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__6(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__6\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [5U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                    [5U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [5U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                            [5U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [5U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__74(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__74\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [5U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [5U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [5U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [5U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [5U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [5U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__7(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__7\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [6U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                    [6U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [6U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                            [6U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [6U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__75(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__75\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [6U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [6U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [6U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [6U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [6U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [6U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__8(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__8\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [7U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                    [7U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [7U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                            [7U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [7U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__76(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__76\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [7U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [7U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [7U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [7U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [7U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [7U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__9(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__9\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [8U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                    [8U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [8U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                            [8U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [8U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__77(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__77\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [8U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [8U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [8U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [8U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [8U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [8U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__10(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__10\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [9U] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                    [9U] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [9U] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                            [9U] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [9U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__78(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__78\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [9U][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [9U][1U]) | (0xfffffffeU & 
                                      vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                      [9U][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [9U][2U]) | (0x1ffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [9U][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [9U][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [9U][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__11(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__11\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [0xaU] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                    [0xaU] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0xaU] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                            [0xaU] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [0xaU] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__79(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__79\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [0xaU][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [0xaU][1U]) | (0xfffffffeU 
                                        & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                        [0xaU][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0xaU][2U]) | (0x1ffffeU 
                                           & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                           [0xaU][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xaU][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xaU][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__12(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__12\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [0xbU] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                    [0xbU] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0xbU] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                            [0xbU] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [0xbU] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__80(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__80\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [0xbU][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [0xbU][1U]) | (0xfffffffeU 
                                        & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                        [0xbU][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0xbU][2U]) | (0x1ffffeU 
                                           & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                           [0xbU][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xbU][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xbU][0U]));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__13(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__13\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_h_o = ((0xffffffffffffeULL & this->tl_h_o) 
                    | (IData)((IData)((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU])))));
    this->tl_h_o = ((0x8000000000001ULL & this->tl_h_o) 
                    | (((QData)((IData)((0x1ffffU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                             [0xcU] 
                                                             >> 0x22U))))) 
                        << 0x22U) | (((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                    [0xcU] 
                                                                    >> 0x30U))))
                                                        ? (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0xcU] 
                                                                   >> 2U))
                                                        : 0U))) 
                                      << 2U) | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                            [0xcU] 
                                                                            >> 1U))))) 
                                                << 1U))));
    this->tl_h_o = ((0x7ffffffffffffULL & this->tl_h_o) 
                    | ((QData)((IData)((1U & (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [0xcU] 
                                                      >> 0x33U))))) 
                       << 0x33U));
}

VL_INLINE_OPT void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__81(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__81\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                   [0xcU][0U]));
    this->tl_d_o[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [0xcU][1U]) | (0xfffffffeU 
                                        & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                        [0xcU][1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0xcU][2U]) | (0x1ffffeU 
                                           & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                           [0xcU][2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xcU][2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xcU][0U]));
}
