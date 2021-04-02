// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vazadi_soc_top.h for the primary calling header

#include "Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1.h"
#include "Vazadi_soc_top__Syms.h"

//==========

VL_CTOR_IMP(Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::__Vconfigure(Vazadi_soc_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::~Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1() {
}

void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__23(Vazadi_soc_top__Syms* __restrict vlSymsp) {
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

void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__24(Vazadi_soc_top__Syms* __restrict vlSymsp) {
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

void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__25(Vazadi_soc_top__Syms* __restrict vlSymsp) {
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

void Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1::_ctor_var_reset\n"); );
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
