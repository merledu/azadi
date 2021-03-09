// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAzadi_top_verilator.h for the primary calling header

#include "VAzadi_top_verilator_tlul_socket_m1__pi4.h"
#include "VAzadi_top_verilator__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VAzadi_top_verilator_tlul_socket_m1__pi4) {
    VL_CELL(__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo, VAzadi_top_verilator_tlul_fifo_sync__RCz4_RDz4);
    VL_CELL(__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo, VAzadi_top_verilator_tlul_fifo_sync__RCz4_RDz4);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VAzadi_top_verilator_tlul_socket_m1__pi4::__Vconfigure(VAzadi_top_verilator__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VAzadi_top_verilator_tlul_socket_m1__pi4::~VAzadi_top_verilator_tlul_socket_m1__pi4() {
}

void VAzadi_top_verilator_tlul_socket_m1__pi4::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__1(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi4::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__1\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
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
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                               >> 0x33U))))) 
                                   << 0x33U));
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

void VAzadi_top_verilator_tlul_socket_m1__pi4::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__2(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi4::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__2\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer0_i)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer0_i 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
                                                                  ((1U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer0_i 
                                                                                >> 0x30U))))
                                                                    ? (IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer0_i 
                                                                               >> 2U))
                                                                    : 0U))) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer0_i 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer0_i 
                                                               >> 0x33U))))) 
                                   << 0x33U));
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

void VAzadi_top_verilator_tlul_socket_m1__pi4::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__3(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi4::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__3\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
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
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                               >> 0x33U))))) 
                                   << 0x33U));
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

void VAzadi_top_verilator_tlul_socket_m1__pi4::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__4(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi4::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__4\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
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
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                               >> 0x33U))))) 
                                   << 0x33U));
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

void VAzadi_top_verilator_tlul_socket_m1__pi4::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__5(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi4::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__5\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
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
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                               >> 0x33U))))) 
                                   << 0x33U));
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

void VAzadi_top_verilator_tlul_socket_m1__pi4::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__6(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi4::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__6\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
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
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                               >> 0x33U))))) 
                                   << 0x33U));
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

void VAzadi_top_verilator_tlul_socket_m1__pi4::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__7(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi4::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__7\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__drsp_fifo_o = ((0xffffffffffffeULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (IData)((IData)((1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_plic_i)))));
    this->__PVT__drsp_fifo_o = ((0x8000000000001ULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | (((QData)((IData)(
                                                    (0x1ffffU 
                                                     & (IData)(
                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_plic_i 
                                                                >> 0x22U))))) 
                                    << 0x22U) | (((QData)((IData)(
                                                                  ((1U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_plic_i 
                                                                                >> 0x30U))))
                                                                    ? (IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_plic_i 
                                                                               >> 2U))
                                                                    : 0U))) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_plic_i 
                                                                                >> 1U))))) 
                                                    << 1U))));
    this->__PVT__drsp_fifo_o = ((0x7ffffffffffffULL 
                                 & this->__PVT__drsp_fifo_o) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_plic_i 
                                                               >> 0x33U))))) 
                                   << 0x33U));
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

void VAzadi_top_verilator_tlul_socket_m1__pi4::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi4::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, tl_h_i[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        tl_h_o[__Vi0] = VL_RAND_RESET_Q(52);
    }
    VL_RAND_RESET_W(86, tl_d_o);
    tl_d_i = VL_RAND_RESET_Q(52);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, __PVT__hreq_fifo_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __PVT__hrsp_fifo_i[__Vi0] = VL_RAND_RESET_Q(52);
    }
    __PVT__hrequest = VL_RAND_RESET_I(2);
    __PVT__hgrant = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(86, __PVT__dreq_fifo_i);
    __PVT__drsp_fifo_o = VL_RAND_RESET_Q(52);
    __PVT__hfifo_rspvalid = VL_RAND_RESET_I(2);
    __PVT__dfifo_rspready = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(86, __PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i);
    VL_RAND_RESET_W(86, __PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i);
    VL_RAND_RESET_W(86, __Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(86, __Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[__Vi0]);
    }
    __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = VL_RAND_RESET_I(1);
    __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req = VL_RAND_RESET_I(2);
    __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out = VL_RAND_RESET_I(2);
    __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req = VL_RAND_RESET_I(2);
    __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = VL_RAND_RESET_I(2);
    __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner = VL_RAND_RESET_I(2);
}
