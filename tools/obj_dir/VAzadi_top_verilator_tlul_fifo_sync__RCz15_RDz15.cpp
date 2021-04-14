// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAzadi_top_verilator.h for the primary calling header

#include "VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15.h"
#include "VAzadi_top_verilator__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__123(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15::_combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__123\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
<<<<<<< HEAD
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp525[5];
    WData/*95:0*/ __Vtemp533[3];
    WData/*127:0*/ __Vtemp539[4];
    WData/*479:0*/ __Vtemp549[15];
    WData/*127:0*/ __Vtemp558[4];
=======
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
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
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [1U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
            [1U][1U]) | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [1U][1U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U]) 
           | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
               [1U][2U]) | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [1U][2U])));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [1U][2U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [1U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [2U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
            [2U][1U]) | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [2U][1U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U]) 
           | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
               [2U][2U]) | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [2U][2U])));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [2U][2U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [2U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [3U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
            [3U][1U]) | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [3U][1U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U]) 
           | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
               [3U][2U]) | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [3U][2U])));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [3U][2U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [3U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [4U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
            [4U][1U]) | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [4U][1U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U]) 
           | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
               [4U][2U]) | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [4U][2U])));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [4U][2U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [4U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [5U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
            [5U][1U]) | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [5U][1U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U]) 
           | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
               [5U][2U]) | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [5U][2U])));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [5U][2U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [5U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [6U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
            [6U][1U]) | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [6U][1U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U]) 
           | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
               [6U][2U]) | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [6U][2U])));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [6U][2U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [6U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [7U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
            [7U][1U]) | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [7U][1U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U]) 
           | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
               [7U][2U]) | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [7U][2U])));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [7U][2U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [7U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [8U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
            [8U][1U]) | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [8U][1U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U]) 
           | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
               [8U][2U]) | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [8U][2U])));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [8U][2U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [8U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [9U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
            [9U][1U]) | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [9U][1U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U]) 
           | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
               [9U][2U]) | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [9U][2U])));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [9U][2U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [9U][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [0xaU][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[1U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
            [0xaU][1U]) | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xaU][1U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U]) 
           | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
               [0xaU][2U]) | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                              [0xaU][2U])));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [0xaU][2U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [0xaU][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [0xbU][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_d_o[1U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
            [0xbU][1U]) | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xbU][1U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_d_o[2U]) 
           | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
               [0xbU][2U]) | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                              [0xbU][2U])));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_d_o[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [0xbU][2U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [0xbU][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [0xcU][0U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_d_o[1U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
            [0xcU][1U]) | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xcU][1U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x200000U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_d_o[2U]) 
           | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
               [0xcU][2U]) | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                              [0xcU][2U])));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_d_o[2U] 
        = ((0x1fffffU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_d_o[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [0xcU][2U]));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_d_o[0U] 
        = ((0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_d_o[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
              [0xcU][0U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[0U][0U] 
        = this->tl_d_o[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[0U][1U] 
        = this->tl_d_o[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[0U][2U] 
        = this->tl_d_o[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[1U][0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[1U][1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[1U][2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[2U][0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[2U][1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[2U][2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[3U][0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[3U][1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[3U][2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[4U][0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[4U][1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[4U][2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[5U][0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[5U][1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[5U][2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[6U][0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[6U][1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[6U][2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[7U][0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[7U][1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[7U][2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[8U][0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[8U][1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[8U][2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[9U][0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[9U][1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[9U][2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[0xaU][0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[0xaU][1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[0xaU][2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[0xbU][0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_d_o[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[0xbU][1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_d_o[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[0xbU][2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_d_o[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[0xcU][0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_d_o[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[0xcU][1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_d_o[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[0xcU][2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_d_o[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[0U][0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [0U][0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[0U][1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [0U][1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[0U][2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [0U][2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[1U][0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [1U][0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[1U][1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [1U][1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[1U][2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [1U][2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[2U][0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [2U][0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[2U][1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [2U][1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[2U][2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [2U][2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[3U][0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [3U][0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[3U][1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [3U][1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[3U][2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [3U][2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[4U][0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [4U][0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[4U][1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [4U][1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[4U][2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [4U][2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[5U][0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [5U][0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[5U][1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [5U][1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[5U][2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [5U][2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[6U][0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [6U][0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[6U][1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [6U][1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[6U][2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [6U][2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[7U][0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [7U][0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[7U][1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [7U][1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[7U][2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [7U][2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[8U][0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [8U][0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[8U][1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [8U][1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[8U][2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [8U][2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[9U][0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [9U][0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[9U][1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [9U][1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[9U][2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [9U][2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[0xaU][0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [0xaU][0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[0xaU][1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [0xaU][1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[0xaU][2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [0xaU][2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[0xbU][0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [0xbU][0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[0xbU][1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [0xbU][1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[0xbU][2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [0xbU][2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[0xcU][0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [0xcU][0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[0xcU][1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [0xcU][1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[0xcU][2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
        [0xcU][2U];
<<<<<<< HEAD
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__rdata 
        = ((0U == (0xfcU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                             [5U][2U] << 0x1bU) | (0x7fffffcU 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [5U][1U] 
                                                      >> 5U)))))
            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__ctrl)
            : ((4U == (0xfcU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                 [5U][2U] << 0x1bU) 
                                | (0x7fffffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [5U][1U] 
                                                 >> 5U)))))
                ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__divisor)
                : ((8U == (0xfcU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                     [5U][2U] << 0x1bU) 
                                    | (0x7fffffcU & 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                        [5U][1U] >> 5U)))))
                    ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__period)
                    : ((0xcU == (0xfcU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [5U][2U] 
                                           << 0x1bU) 
                                          | (0x7fffffcU 
                                             & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [5U][1U] 
                                                >> 5U)))))
                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__DC)
                        : ((0x1cU == (0xfcU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [5U][2U] 
                                                << 0x1bU) 
                                               | (0x7fffffcU 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [5U][1U] 
                                                     >> 5U)))))
                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__DC_2)
                            : ((0x18U == (0xfcU & (
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [5U][2U] 
                                                    << 0x1bU) 
                                                   | (0x7fffffcU 
                                                      & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                         [5U][1U] 
                                                         >> 5U)))))
                                ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__period_2)
                                : ((0x14U == (0xfcU 
                                              & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [5U][2U] 
                                                  << 0x1bU) 
                                                 | (0x7fffffcU 
                                                    & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                       [5U][1U] 
                                                       >> 5U)))))
                                    ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__divisor_2)
                                    : ((0x10U == (0xfcU 
                                                  & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [5U][2U] 
                                                      << 0x1bU) 
                                                     | (0x7fffffcU 
                                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                           [5U][1U] 
                                                           >> 5U)))))
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__ctrl_2)
                                        : 0U))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [5U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [5U][2U] 
                                                   >> 0xdU))) 
                                        | ((1U == (3U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [5U][2U] 
                                                      >> 0xdU)))
                                            ? (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [5U][1U] 
                                                  >> 5U))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [5U][2U] 
                                                    >> 0xdU))) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                  [5U][2U] 
                                                                  << 0x1bU) 
                                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                    [5U][1U] 
                                                                    >> 5U)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [5U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [5U][2U] 
                                                   >> 0xdU)))
                                         ? (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xfU 
                                                        & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                             [5U][2U] 
                                                             << 0x1fU) 
                                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                               [5U][1U] 
                                                               >> 1U)) 
                                                           & (~ 
                                                              ((IData)(1U) 
                                                               << 
                                                               (3U 
                                                                & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                    [5U][2U] 
                                                                    << 0x1bU) 
                                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                      [5U][1U] 
                                                                      >> 5U))))))))))
                                         : ((1U == 
                                             (3U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [5U][2U] 
                                               >> 0xdU)))
                                             ? ((0x40U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [5U][1U])
                                                 ? 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                 [5U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                   [5U][1U] 
                                                                   >> 1U))))))
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xcU 
                                                             & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                 [5U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                   [5U][1U] 
                                                                   >> 1U)))))))
                                             : (2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [5U][2U] 
                                                    >> 0xdU)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
        = ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
            [5U][2U] >> 0x15U) & ((0U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [5U][2U] 
                                                >> 0xdU)))
                                   ? (0U != (0xfU & 
                                             (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [5U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [5U][1U] 
=======
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
        = ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
            [6U][2U] >> 0x15U) & ((0U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [6U][2U] 
                                                >> 0xdU)))
                                   ? (0U != (0xfU & 
                                             (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [6U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [6U][1U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                  >> 1U)) 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                      [5U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                        [5U][1U] 
                                                        >> 5U)))))))
                                   : ((1U == (3U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [5U][2U] 
                                               >> 0xdU)))
                                       ? ((0x40U & 
                                           vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [5U][1U])
                                           ? (3U == 
                                              (3U & 
                                               ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [5U][2U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [5U][1U] 
=======
                                                      [6U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                        [6U][1U] 
                                                        >> 5U)))))))
                                   : ((1U == (3U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][2U] 
                                               >> 0xdU)))
                                       ? ((0x40U & 
                                           vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [6U][1U])
                                           ? (3U == 
                                              (3U & 
                                               ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [6U][2U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                   >> 3U))))
                                           : (3U == 
                                              (3U & 
                                               ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                 [5U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [5U][1U] 
                                                   >> 1U)))))
                                       : ((2U == (3U 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [5U][2U] 
=======
                                                 [6U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   >> 1U)))))
                                       : ((2U == (3U 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [6U][2U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                     >> 0xdU))) 
                                          & (0xfU == 
                                             (0xfU 
                                              & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [5U][1U] 
                                                    >> 1U))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [5U][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [2U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [2U][2U] 
                                                   >> 0xdU))) 
                                        | ((1U == (3U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [2U][2U] 
                                                      >> 0xdU)))
                                            ? (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [2U][1U] 
=======
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [6U][1U] 
                                                    >> 1U))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [6U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][2U] 
                                                   >> 0xdU))) 
                                        | ((1U == (3U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [6U][2U] 
                                                      >> 0xdU)))
                                            ? (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [6U][1U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                  >> 5U))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                    [2U][2U] 
=======
                                                    [6U][2U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                    >> 0xdU))) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                                  [2U][2U] 
                                                                  << 0x1bU) 
                                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                    [2U][1U] 
                                                                    >> 5U)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [2U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [2U][2U] 
=======
                                                                  [6U][2U] 
                                                                  << 0x1bU) 
                                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                    [6U][1U] 
                                                                    >> 5U)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [6U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][2U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                   >> 0xdU)))
                                         ? (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xfU 
                                                        & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                             [2U][2U] 
                                                             << 0x1fU) 
                                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                               [2U][1U] 
=======
                                                             [6U][2U] 
                                                             << 0x1fU) 
                                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                               [6U][1U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                               >> 1U)) 
                                                           & (~ 
                                                              ((IData)(1U) 
                                                               << 
                                                               (3U 
                                                                & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                                    [2U][2U] 
                                                                    << 0x1bU) 
                                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                      [2U][1U] 
=======
                                                                    [6U][2U] 
                                                                    << 0x1bU) 
                                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                      [6U][1U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                                      >> 5U))))))))))
                                         : ((1U == 
                                             (3U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                               [2U][2U] 
                                               >> 0xdU)))
                                             ? ((0x40U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [2U][1U])
=======
                                               [6U][2U] 
                                               >> 0xdU)))
                                             ? ((0x40U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [6U][1U])
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                 ? 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                                 [2U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                   [2U][1U] 
=======
                                                                 [6U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                   [6U][1U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                                   >> 1U))))))
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xcU 
                                                             & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                                 [2U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                   [2U][1U] 
=======
                                                                 [6U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                   [6U][1U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                                   >> 1U)))))))
                                             : (2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                    [2U][2U] 
                                                    >> 0xdU)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
        = ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
            [2U][2U] >> 0x15U) & ((0U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [2U][2U] 
                                                >> 0xdU)))
                                   ? (0U != (0xfU & 
                                             (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [2U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [2U][1U] 
                                                  >> 1U)) 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [2U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                        [2U][1U] 
                                                        >> 5U)))))))
                                   : ((1U == (3U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [2U][2U] 
                                               >> 0xdU)))
                                       ? ((0x40U & 
                                           vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [2U][1U])
                                           ? (3U == 
                                              (3U & 
                                               ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [2U][2U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [2U][1U] 
                                                   >> 3U))))
                                           : (3U == 
                                              (3U & 
                                               ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [2U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [2U][1U] 
                                                   >> 1U)))))
                                       : ((2U == (3U 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [2U][2U] 
                                                     >> 0xdU))) 
                                          & (0xfU == 
                                             (0xfU 
                                              & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [2U][1U] 
                                                    >> 1U))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [2U][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit 
        = ((0x7ffeU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit)) 
           | (0U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                               [6U][2U] << 0x1bU) | 
                              (0x7fffffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                             [6U][1U] 
                                             >> 5U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit 
        = ((0x7ffdU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit)) 
           | ((4U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                [6U][2U] << 0x1bU) 
                               | (0x7fffffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [6U][1U] 
                                                >> 5U))))) 
              << 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit 
        = ((0x7ffbU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit)) 
           | ((8U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                [6U][2U] << 0x1bU) 
                               | (0x7fffffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [6U][1U] 
                                                >> 5U))))) 
              << 2U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit 
        = ((0x7ff7U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit)) 
           | ((0xcU == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                  [6U][2U] << 0x1bU) 
                                 | (0x7fffffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [6U][1U] 
                                                  >> 5U))))) 
              << 3U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit 
        = ((0x7fefU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit)) 
           | ((0x10U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [6U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
              << 4U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit 
        = ((0x7fdfU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit)) 
           | ((0x14U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [6U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
              << 5U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit 
        = ((0x7fbfU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit)) 
           | ((0x18U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [6U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
              << 6U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit 
        = ((0x7f7fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit)) 
           | ((0x1cU == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [6U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
              << 7U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit 
        = ((0x7effU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit)) 
           | ((0x20U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [6U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
              << 8U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit 
        = ((0x7dffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit)) 
           | ((0x24U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [6U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
              << 9U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit 
        = ((0x7bffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit)) 
           | ((0x28U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [6U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
              << 0xaU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit 
        = ((0x77ffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit)) 
           | ((0x2cU == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [6U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
              << 0xbU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit 
        = ((0x6fffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit)) 
           | ((0x30U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [6U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
              << 0xcU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit 
        = ((0x5fffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit)) 
           | ((0x34U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [6U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
              << 0xdU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit)) 
           | ((0x38U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [6U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   >> 5U))))) 
              << 0xeU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit 
        = ((0xffeU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit)) 
           | (0U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                               [0U][2U] << 0x1bU) | 
                              (0x7fffffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                             [0U][1U] 
                                             >> 5U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit 
        = ((0xffdU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit)) 
           | ((4U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                [0U][2U] << 0x1bU) 
                               | (0x7fffffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [0U][1U] 
                                                >> 5U))))) 
              << 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit 
        = ((0xffbU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit)) 
           | ((8U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                [0U][2U] << 0x1bU) 
                               | (0x7fffffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [0U][1U] 
                                                >> 5U))))) 
              << 2U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit 
        = ((0xff7U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit)) 
           | ((0xcU == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                  [0U][2U] << 0x1bU) 
                                 | (0x7fffffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][1U] 
                                                  >> 5U))))) 
              << 3U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit 
        = ((0xfefU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit)) 
           | ((0x10U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [0U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [0U][1U] 
                                                   >> 5U))))) 
              << 4U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit 
        = ((0xfdfU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit)) 
           | ((0x14U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [0U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [0U][1U] 
                                                   >> 5U))))) 
              << 5U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit 
        = ((0xfbfU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit)) 
           | ((0x18U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [0U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [0U][1U] 
                                                   >> 5U))))) 
              << 6U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit 
        = ((0xf7fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit)) 
           | ((0x1cU == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [0U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [0U][1U] 
                                                   >> 5U))))) 
              << 7U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit 
        = ((0xeffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit)) 
           | ((0x20U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [0U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [0U][1U] 
                                                   >> 5U))))) 
              << 8U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit 
        = ((0xdffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit)) 
           | ((0x24U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [0U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [0U][1U] 
                                                   >> 5U))))) 
              << 9U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit 
        = ((0xbffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit)) 
           | ((0x28U == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [0U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [0U][1U] 
                                                   >> 5U))))) 
              << 0xaU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit 
        = ((0x7ffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit)) 
           | ((0x2cU == (0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [0U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [0U][1U] 
                                                   >> 5U))))) 
              << 0xbU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [6U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][2U] 
                                                   >> 0xdU))) 
                                        | ((1U == (3U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [6U][2U] 
                                                      >> 0xdU)))
                                            ? (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [6U][1U] 
                                                  >> 5U))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [6U][2U] 
                                                    >> 0xdU))) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                  [6U][2U] 
                                                                  << 0x1bU) 
                                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                    [6U][1U] 
                                                                    >> 5U)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [6U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][2U] 
                                                   >> 0xdU)))
                                         ? (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xfU 
                                                        & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                             [6U][2U] 
                                                             << 0x1fU) 
                                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                               [6U][1U] 
                                                               >> 1U)) 
                                                           & (~ 
                                                              ((IData)(1U) 
                                                               << 
                                                               (3U 
                                                                & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                    [6U][2U] 
                                                                    << 0x1bU) 
                                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                      [6U][1U] 
                                                                      >> 5U))))))))))
                                         : ((1U == 
                                             (3U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][2U] 
                                               >> 0xdU)))
                                             ? ((0x40U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [6U][1U])
                                                 ? 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                 [6U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                   [6U][1U] 
                                                                   >> 1U))))))
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xcU 
                                                             & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                 [6U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                   [6U][1U] 
                                                                   >> 1U)))))))
                                             : (2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [6U][2U] 
                                                    >> 0xdU)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
        = ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
            [6U][2U] >> 0x15U) & ((0U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [6U][2U] 
                                                >> 0xdU)))
                                   ? (0U != (0xfU & 
                                             (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [6U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [6U][1U] 
=======
                                                    [6U][2U] 
                                                    >> 0xdU)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [6U][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | (0U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                               [7U][2U] << 0x1bU) | 
                              (0x7fffffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                             [7U][1U] 
                                             >> 5U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffffdU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((4U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                [7U][2U] << 0x1bU) 
                               | (0x7fffffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [7U][1U] 
                                                >> 5U))))) 
              << 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffffbU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((8U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                [7U][2U] << 0x1bU) 
                               | (0x7fffffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [7U][1U] 
                                                >> 5U))))) 
              << 2U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffff7U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0xcU == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                  [7U][2U] << 0x1bU) 
                                 | (0x7fffffcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [7U][1U] 
                                                  >> 5U))))) 
              << 3U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffefU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x10U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 4U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffdfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x14U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 5U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3fffbfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x18U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 6U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3fff7fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x1cU == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 7U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffeffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x20U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 8U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffdffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x24U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 9U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3ffbffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x28U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 0xaU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3ff7ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x2cU == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 0xbU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3fefffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x30U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 0xcU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3fdfffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x34U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 0xdU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3fbfffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x38U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 0xeU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3f7fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x3cU == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 0xfU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3effffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x40U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 0x10U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3dffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x44U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 0x11U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x3bffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x48U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 0x12U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x37ffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x4cU == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 0x13U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x2fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x50U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 0x14U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit 
        = ((0x1fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit) 
           | ((0x54U == (0x7cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [7U][2U] << 0x1bU) 
                                  | (0x7fffffcU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 5U))))) 
              << 0x15U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
        = ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
            [7U][2U] >> 0x15U) & ((0U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [7U][2U] 
                                                >> 0xdU)))
                                   ? (0U != (0xfU & 
                                             (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [7U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [7U][1U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                  >> 1U)) 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                      [6U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                        [6U][1U] 
                                                        >> 5U)))))))
                                   : ((1U == (3U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][2U] 
                                               >> 0xdU)))
                                       ? ((0x40U & 
                                           vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [6U][1U])
                                           ? (3U == 
                                              (3U & 
                                               ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [6U][2U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
=======
                                                      [7U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                        [7U][1U] 
                                                        >> 5U)))))))
                                   : ((1U == (3U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [7U][2U] 
                                               >> 0xdU)))
                                       ? ((0x40U & 
                                           vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [7U][1U])
                                           ? (3U == 
                                              (3U & 
                                               ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [7U][2U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                   >> 3U))))
                                           : (3U == 
                                              (3U & 
                                               ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                 [6U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   >> 1U)))))
                                       : ((2U == (3U 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [6U][2U] 
=======
                                                 [7U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][1U] 
                                                   >> 1U)))))
                                       : ((2U == (3U 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [7U][2U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                     >> 0xdU))) 
                                          & (0xfU == 
                                             (0xfU 
                                              & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [6U][1U] 
                                                    >> 1U))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [0U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [0U][2U] 
                                                   >> 0xdU))) 
                                        | ((1U == (3U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [0U][2U] 
                                                      >> 0xdU)))
                                            ? (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][1U] 
=======
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [7U][1U] 
                                                    >> 1U))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [7U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][2U] 
                                                   >> 0xdU))) 
                                        | ((1U == (3U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [7U][2U] 
                                                      >> 0xdU)))
                                            ? (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [7U][1U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                  >> 5U))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                    [0U][2U] 
=======
                                                    [7U][2U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                    >> 0xdU))) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                                  [0U][2U] 
                                                                  << 0x1bU) 
                                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                    [0U][1U] 
                                                                    >> 5U)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [0U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [0U][2U] 
=======
                                                                  [7U][2U] 
                                                                  << 0x1bU) 
                                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                    [7U][1U] 
                                                                    >> 5U)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [7U][2U] >> 0x15U) & ((0U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [7U][2U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                   >> 0xdU)))
                                         ? (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xfU 
                                                        & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                             [0U][2U] 
                                                             << 0x1fU) 
                                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                               [0U][1U] 
=======
                                                             [7U][2U] 
                                                             << 0x1fU) 
                                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                               [7U][1U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                               >> 1U)) 
                                                           & (~ 
                                                              ((IData)(1U) 
                                                               << 
                                                               (3U 
                                                                & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                                    [0U][2U] 
                                                                    << 0x1bU) 
                                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                      [0U][1U] 
=======
                                                                    [7U][2U] 
                                                                    << 0x1bU) 
                                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                      [7U][1U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                                      >> 5U))))))))))
                                         : ((1U == 
                                             (3U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                               [0U][2U] 
                                               >> 0xdU)))
                                             ? ((0x40U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0U][1U])
=======
                                               [7U][2U] 
                                               >> 0xdU)))
                                             ? ((0x40U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [7U][1U])
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                 ? 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                                 [0U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                   [0U][1U] 
=======
                                                                 [7U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                   [7U][1U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                                   >> 1U))))))
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xcU 
                                                             & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                                 [0U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                   [0U][1U] 
=======
                                                                 [7U][2U] 
                                                                 << 0x1fU) 
                                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                   [7U][1U] 
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
                                                                   >> 1U)))))))
                                             : (2U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
<<<<<<< HEAD
                                                    [0U][2U] 
                                                    >> 0xdU)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
        = ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
            [0U][2U] >> 0x15U) & ((0U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [0U][2U] 
                                                >> 0xdU)))
                                   ? (0U != (0xfU & 
                                             (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][1U] 
                                                  >> 1U)) 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [0U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                        [0U][1U] 
                                                        >> 5U)))))))
                                   : ((1U == (3U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU)))
                                       ? ((0x40U & 
                                           vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [0U][1U])
                                           ? (3U == 
                                              (3U & 
                                               ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0U][2U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [0U][1U] 
                                                   >> 3U))))
                                           : (3U == 
                                              (3U & 
                                               ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [0U][1U] 
                                                   >> 1U)))))
                                       : ((2U == (3U 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [0U][2U] 
                                                     >> 0xdU))) 
                                          & (0xfU == 
                                             (0xfU 
                                              & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [0U][1U] 
                                                    >> 1U))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [6U][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [0U][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__tl_reg_d2h)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                           [6U][2U] >> 0x12U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__a_ack) 
           & (4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                           [5U][2U] >> 0x12U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [5U][2U] >> 0x12U))) | 
              (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [5U][2U] >> 0x12U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__a_ack) 
           & (4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                           [2U][2U] >> 0x12U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [2U][2U] >> 0x12U))) | 
              (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [2U][2U] >> 0x12U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                           [0U][2U] >> 0x12U))));
=======
                                                    [7U][2U] 
                                                    >> 0xdU)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                  [7U][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__tl_reg_d2h)));
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [6U][2U] >> 0x12U))) | 
              (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [6U][2U] >> 0x12U)))));
<<<<<<< HEAD
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [0U][2U] >> 0x12U))) | 
              (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [0U][2U] >> 0x12U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [5U][2U] << 0x1bU) 
                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                     [5U][1U] >> 5U))))) 
                 | (~ ((((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [5U][2U] >> 0x12U))) 
                         | (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [5U][2U] >> 0x12U)))) 
                        | (4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                        [5U][2U] >> 0x12U)))) 
                       & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                          & (((4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [5U][2U] 
                                            >> 0x12U))) 
                              | (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [5U][2U] 
                                              >> 0x12U)))) 
                             | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [2U][2U] << 0x1bU) 
                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                     [2U][1U] >> 5U))))) 
                 | (~ ((((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [2U][2U] >> 0x12U))) 
                         | (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [2U][2U] >> 0x12U)))) 
                        | (4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                        [2U][2U] >> 0x12U)))) 
                       & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                          & (((4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [2U][2U] 
                                            >> 0x12U))) 
                              | (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [2U][2U] 
                                              >> 0x12U)))) 
                             | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [6U][2U] << 0x1bU) 
                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                     [6U][1U] >> 5U))))) 
                 | (~ ((((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [6U][2U] >> 0x12U))) 
                         | (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [6U][2U] >> 0x12U)))) 
                        | (4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                        [6U][2U] >> 0x12U)))) 
                       & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                          & (((4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [6U][2U] 
                                            >> 0x12U))) 
                              | (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [6U][2U] 
                                              >> 0x12U)))) 
                             | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                   [0U][2U] << 0x1bU) 
                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                     [0U][1U] >> 5U))))) 
                 | (~ ((((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0U][2U] >> 0x12U))) 
                         | (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0U][2U] >> 0x12U)))) 
                        | (4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                        [0U][2U] >> 0x12U)))) 
                       & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                          & (((4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0U][2U] 
                                            >> 0x12U))) 
                              | (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [0U][2U] 
                                              >> 0x12U)))) 
                             | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rd_req) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__write 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__wr_req) 
            & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__err_internal))) 
           & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rd_req) 
                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__err_internal)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__re 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rd_req) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__err_internal)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__we 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__wr_req) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__err_internal)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rd_req) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__spi_tx_sel 
        = ((0xeU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__spi_tx_sel)) 
           | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__we) 
               & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__re))) 
              & (0U == (7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                               [2U][2U] << 0x19U) | 
                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                               [2U][1U] >> 7U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__spi_tx_sel 
        = ((0xdU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__spi_tx_sel)) 
           | ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__we) 
                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__re))) 
               & (1U == (7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                [2U][2U] << 0x19U) 
                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                  [2U][1U] >> 7U))))) 
              << 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__spi_tx_sel 
        = ((0xbU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__spi_tx_sel)) 
           | ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__we) 
                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__re))) 
               & (2U == (7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                [2U][2U] << 0x19U) 
                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                  [2U][1U] >> 7U))))) 
              << 2U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__spi_tx_sel 
        = ((7U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__spi_tx_sel)) 
           | ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__we) 
                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__re))) 
               & (3U == (7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                [2U][2U] << 0x19U) 
                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                  [2U][1U] >> 7U))))) 
              << 3U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 0U;
    if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
          & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
           >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
           >> 2U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
           >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
           >> 4U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
           >> 5U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
           >> 6U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
           >> 7U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
           >> 8U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
           >> 9U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
           >> 0xaU) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
           >> 0xbU) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
           >> 0xcU) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
           >> 0xdU) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
           >> 0xeU) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [6U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((0xfffffU < ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [6U][1U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [6U][0U] 
                                            >> 1U)))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err = 1U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 0U;
    if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
          & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][2U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [0U][1U] 
                                                >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][2U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [0U][1U] 
                                                >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 2U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][2U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [0U][1U] 
                                                >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [0U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [0U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 4U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][2U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [0U][1U] 
                                                >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 5U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][2U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [0U][1U] 
                                                >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 6U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][2U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [0U][1U] 
                                                >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 7U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][2U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [0U][1U] 
                                                >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 8U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (7U != (7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][2U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [0U][1U] 
                                                >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 9U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][2U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [0U][1U] 
                                                >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 0xaU) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (3U != (3U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][2U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [0U][1U] 
                                                >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 0xbU) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [0U][2U] << 0x1fU) | 
                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                              [0U][1U] >> 1U)))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT____Vcellinp__shift__latch 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__spi_tx_sel) 
           & (- (IData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__we))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_enable_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_rising_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
             >> 0xaU) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_falling_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
             >> 0xbU) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
             >> 0xcU) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
             >> 0xdU) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__ctrl_en_input_filter_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
             >> 0xeU) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_watermark_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_watermark_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_empty_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_overflow_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_frame_err_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_break_err_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_timeout_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_parity_err_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_tx_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rx_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nf_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_slpbk_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_llpbk_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_parity_en_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_parity_odd_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rxblvl_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nco_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wdata_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 6U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxrst_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 7U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txrst_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 7U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 7U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txilvl_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 7U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txen_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 9U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txval_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 9U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_val_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 0xbU) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_en_we 
        = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 0xbU) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_state_we 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_watermark_we 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_watermark_we 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_empty_we 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_overflow_we 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_frame_err_we 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_break_err_we 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_timeout_we 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_parity_err_we 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    __Vtemp525[0U] = (IData)((((QData)((IData)(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err))))) 
                               << 0x32U) | (((QData)((IData)(
                                                             ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                               [6U][1U] 
                                                               << 0x1fU) 
                                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                 [6U][0U] 
                                                                 >> 1U)))) 
                                             << 0x12U) 
                                            | (QData)((IData)(
                                                              ((0xfffe0000U 
                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                                                     << 0xdU) 
                                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we) 
                                                                       << 0x11U)) 
                                                                   & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)) 
                                                                      << 0x11U))) 
                                                               | ((0x7feU 
                                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                   [6U][0U]) 
                                                                  | ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                                                       >> 5U) 
                                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err))))))))));
    __Vtemp525[1U] = ((0xfff80000U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                      [6U][0U] << 0x12U)) 
                      | (IData)(((((QData)((IData)(
                                                   ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                                      >> 2U) 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err))))) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                   [6U][1U] 
                                                                   << 0x1fU) 
                                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                     [6U][0U] 
                                                                     >> 1U)))) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
                                                                  ((0xfffe0000U 
                                                                    & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                                                         << 0xdU) 
                                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we) 
                                                                           << 0x11U)) 
                                                                       & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)) 
                                                                          << 0x11U))) 
                                                                   | ((0x7feU 
                                                                       & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                       [6U][0U]) 
                                                                      | ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                                                           >> 5U) 
                                                                          & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                                                         & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err))))))))) 
                                 >> 0x20U)));
    __Vtemp533[0U] = (IData)((((QData)((IData)(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                                  >> 7U) 
                                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err))))) 
                               << 0x32U) | (((QData)((IData)(
                                                             (0xffffU 
                                                              & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                  [6U][1U] 
                                                                  << 0x1fU) 
                                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                    [6U][0U] 
                                                                    >> 1U))))) 
                                             << 0x22U) 
                                            | (((QData)((IData)(
                                                                ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                                                   >> 8U) 
                                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                                                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err))))) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                        [6U][1U] 
                                                                        << 0xfU) 
                                                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                          [6U][0U] 
                                                                          >> 0x11U))))) 
                                                   << 0x11U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                                                           << 8U) 
                                                                          & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we) 
                                                                             << 0x10U)) 
                                                                         & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)) 
                                                                            << 0x10U))) 
                                                                     | (0xffffU 
                                                                        & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                            [6U][1U] 
                                                                            << 0x1fU) 
                                                                           | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                              [6U][0U] 
                                                                              >> 1U)))))))))));
    __Vtemp533[1U] = ((0xfff80000U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                      [6U][0U] << 0x12U)) 
                      | (IData)(((((QData)((IData)(
                                                   ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                                      >> 7U) 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err))))) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                      [6U][1U] 
                                                                      << 0x1fU) 
                                                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                        [6U][0U] 
                                                                        >> 1U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                                                       >> 8U) 
                                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err))))) 
                                                    << 0x21U) 
                                                   | (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                            [6U][1U] 
                                                                            << 0xfU) 
                                                                           | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                              [6U][0U] 
                                                                              >> 0x11U))))) 
                                                       << 0x11U) 
                                                      | (QData)((IData)(
                                                                        ((0xffff0000U 
                                                                          & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                                                               << 8U) 
                                                                              & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we) 
                                                                                << 0x10U)) 
                                                                             & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0x10U))) 
                                                                         | (0xffffU 
                                                                            & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [6U][1U] 
                                                                                << 0x1fU) 
                                                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [6U][0U] 
                                                                                >> 1U)))))))))) 
                                 >> 0x20U)));
    __Vtemp539[3U] = ((0xffc00000U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                      [6U][0U] << 0xbU)) 
                      | ((0xffe00000U & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                           << 0x10U) 
                                          & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we) 
                                             << 0x15U)) 
                                         & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)) 
                                            << 0x15U))) 
                         | ((0x1fffe0U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [6U][0U] 
                                          << 4U)) | 
                            ((0x3ffffff0U & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                               >> 2U) 
                                              & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we) 
                                                 << 4U)) 
                                             & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)) 
                                                << 4U))) 
                             | (0xfU & ((0xffff8U & 
                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [6U][1U] 
                                          << 3U)) | 
                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [6U][0U] >> 0x1dU)))))));
    __Vtemp549[0xcU] = ((0xffffffU & ((0x7ffU & ((0x400U 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [6U][1U] 
                                                     << 0xaU)) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [6U][0U] 
                                                    >> 0x16U))) 
                                      | (0xfff800U 
                                         & ((IData)(
                                                    (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q)))) 
                                            << 0xbU)))) 
                        | (0xff000000U & ((IData)((
                                                   ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q)))) 
                                          << 0xbU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[3U] 
        = (IData)((((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[4U] 
        = (IData)(((((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q))) 
                   >> 0x20U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[5U] 
        = ((0xfffc0000U & (__Vtemp533[0U] << 0x12U)) 
           | ((0xfffe0000U & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                << 8U) & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we) 
                                          << 0x11U)) 
                              & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)) 
                                 << 0x11U))) | ((0x1fffeU 
                                                 & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [6U][1U] 
                                                     << 0x10U) 
                                                    | (0xfffeU 
                                                       & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                          [6U][0U] 
                                                          >> 0x10U)))) 
                                                | ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                                     >> 9U) 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[6U] 
        = ((0x3ffffU & (__Vtemp533[0U] >> 0xeU)) | 
           (0xfffc0000U & (__Vtemp533[1U] << 0x12U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[7U] 
        = ((0x3ffffU & (__Vtemp533[1U] >> 0xeU)) | 
           (0xfffc0000U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                           [6U][0U] << 4U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[8U] 
        = ((0x3ffffU & ((0x3ffc0U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                     [6U][0U] >> 0xbU)) 
                        | ((0x3ffe0U & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                          >> 1U) & 
                                         ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we) 
                                          << 5U)) & 
                                        ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)) 
                                         << 5U))) | 
                           (0x1fU & ((0x10U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][1U] 
                                               << 4U)) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                        [6U][0U] >> 0x1cU)))))) 
           | (0xfffc0000U & (__Vtemp539[3U] << 0x12U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[9U] 
        = (0xfc0000U | ((0xff000000U & (__Vtemp525[0U] 
                                        << 0x18U)) 
                        | (0x3ffffU & (__Vtemp539[3U] 
                                       >> 0xeU))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xaU] 
        = ((0xffffffU & (__Vtemp525[0U] >> 8U)) | (0xff000000U 
                                                   & (__Vtemp525[1U] 
                                                      << 0x18U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xbU] 
        = ((0xffffffU & (__Vtemp525[1U] >> 8U)) | (0xff000000U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [6U][0U] 
                                                      << 0xaU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xcU] 
        = __Vtemp549[0xcU];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xdU] 
        = ((0xffffffU & ((0x7ffU & ((IData)((((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q)))) 
                                    >> 0x15U)) | (0xfff800U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q))) 
                                                              >> 0x20U)) 
                                                     << 0xbU)))) 
           | (0xff000000U & ((IData)(((((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q))) 
                                      >> 0x20U)) << 0xbU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xeU] 
        = (0x7ffU & ((IData)(((((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                << 0x20U) | (QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q))) 
                              >> 0x20U)) >> 0x15U));
    __Vtemp558[0U] = (IData)((((QData)((IData)((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                 >> 4U) 
                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re)))) 
                               << 0x3cU) | (((QData)((IData)(
                                                             ((0xc0000000U 
                                                               & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                   << 0x1aU) 
                                                                  & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                     << 0x1eU))) 
                                                              | ((0xf0000000U 
                                                                  & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                      << 0x18U) 
                                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                        << 0x1cU))) 
                                                                 | ((0xfff80000U 
                                                                     & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                         << 0xeU) 
                                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                           << 0x13U))) 
                                                                    | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_wdata__q) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_wdata__qe) 
                                                                           << 0xaU) 
                                                                          | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                              << 9U) 
                                                                             | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__qe) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q)))))))))))))) 
                                             << 0x1cU) 
                                            | (QData)((IData)(
                                                              (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__qe) 
                                                                << 0x1bU) 
                                                               | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                   << 0x1aU) 
                                                                  | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                      << 0x19U) 
                                                                     | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
                                                                         << 1U) 
                                                                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q))))))))));
    __Vtemp558[1U] = ((0xe0000000U & ((IData)((((QData)((IData)(
                                                                (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                                  << 0x1fU) 
                                                                 | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                                     << 0x1eU) 
                                                                    | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                                                        << 0x1dU) 
                                                                       | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                                                           << 0x1cU) 
                                                                          | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                                              << 0x1bU) 
                                                                             | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 0xeU)) 
                                                                                | ((0xffffc000U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xcU) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xeU)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 0xbU)) 
                                                                                | ((0xfffff000U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xaU) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xcU)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 8U)) 
                                                                                | ((0xfffffc00U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 8U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xaU)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 5U)) 
                                                                                | ((0xffffff00U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 6U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 8U)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 2U)) 
                                                                                | ((0xffffffc0U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 4U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 6U)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                >> 1U)) 
                                                                                | ((0xfffffff0U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 2U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 4U)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                >> 4U)) 
                                                                                | ((0xfffffffcU 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 2U)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                >> 7U)) 
                                                                                | ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 2U) 
                                                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
                                                                                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)))))))))))))))))))))))))))))))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
                                                                   << 0x1fU) 
                                                                  | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                                      << 0x1eU) 
                                                                     | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                                         << 0x1dU) 
                                                                        | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                                            << 0x1cU) 
                                                                           | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                                                                << 7U) 
                                                                                | ((0xffffffe0U 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 1U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 5U))) 
                                                                                | ((0x7ffffff8U 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 1U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 3U))) 
                                                                                | (0x1ffffffeU 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 3U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 1U)))))))))))))))))) 
                                      << 0x1dU)) | (IData)(
                                                           ((((QData)((IData)(
                                                                              (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 4U) 
                                                                               & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re)))) 
                                                              << 0x3cU) 
                                                             | (((QData)((IData)(
                                                                                ((0xc0000000U 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0x1aU) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 0x1eU))) 
                                                                                | ((0xf0000000U 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0x18U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 0x1cU))) 
                                                                                | ((0xfff80000U 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xeU) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 0x13U))) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_wdata__q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_wdata__qe) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__qe) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q)))))))))))))) 
                                                                 << 0x1cU) 
                                                                | (QData)((IData)(
                                                                                (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__qe) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                                << 0x19U) 
                                                                                | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q))))))))) 
                                                            >> 0x20U)));
    __Vtemp558[2U] = ((0x1fffffffU & ((IData)((((QData)((IData)(
                                                                (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                                  << 0x1fU) 
                                                                 | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                                     << 0x1eU) 
                                                                    | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                                                        << 0x1dU) 
                                                                       | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                                                           << 0x1cU) 
                                                                          | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                                              << 0x1bU) 
                                                                             | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 0xeU)) 
                                                                                | ((0xffffc000U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xcU) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xeU)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 0xbU)) 
                                                                                | ((0xfffff000U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xaU) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xcU)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 8U)) 
                                                                                | ((0xfffffc00U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 8U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xaU)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 5U)) 
                                                                                | ((0xffffff00U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 6U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 8U)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 2U)) 
                                                                                | ((0xffffffc0U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 4U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 6U)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                >> 1U)) 
                                                                                | ((0xfffffff0U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 2U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 4U)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                >> 4U)) 
                                                                                | ((0xfffffffcU 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 2U)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                >> 7U)) 
                                                                                | ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 2U) 
                                                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
                                                                                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)))))))))))))))))))))))))))))))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
                                                                   << 0x1fU) 
                                                                  | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                                      << 0x1eU) 
                                                                     | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                                         << 0x1dU) 
                                                                        | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                                            << 0x1cU) 
                                                                           | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                                                                << 7U) 
                                                                                | ((0xffffffe0U 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 1U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 5U))) 
                                                                                | ((0x7ffffff8U 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 1U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 3U))) 
                                                                                | (0x1ffffffeU 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 3U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 1U)))))))))))))))))) 
                                      >> 3U)) | (0xe0000000U 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 0xeU)) 
                                                                                | ((0xffffc000U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xcU) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xeU)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 0xbU)) 
                                                                                | ((0xfffff000U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xaU) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xcU)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 8U)) 
                                                                                | ((0xfffffc00U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 8U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xaU)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 5U)) 
                                                                                | ((0xffffff00U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 6U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 8U)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 2U)) 
                                                                                | ((0xffffffc0U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 4U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 6U)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                >> 1U)) 
                                                                                | ((0xfffffff0U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 2U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 4U)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                >> 4U)) 
                                                                                | ((0xfffffffcU 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 2U)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                >> 7U)) 
                                                                                | ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 2U) 
                                                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
                                                                                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)))))))))))))))))))))))))))))))))))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                                                                << 7U) 
                                                                                | ((0xffffffe0U 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 1U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 5U))) 
                                                                                | ((0x7ffffff8U 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 1U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 3U))) 
                                                                                | (0x1ffffffeU 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 3U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 1U))))))))))))))))) 
                                                             >> 0x20U)) 
                                                    << 0x1dU)));
    __Vtemp558[3U] = (0x1fffffffU & ((IData)(((((QData)((IData)(
                                                                (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                                  << 0x1fU) 
                                                                 | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                                     << 0x1eU) 
                                                                    | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                                                        << 0x1dU) 
                                                                       | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                                                           << 0x1cU) 
                                                                          | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                                              << 0x1bU) 
                                                                             | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 0xeU)) 
                                                                                | ((0xffffc000U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xcU) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xeU)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 0xbU)) 
                                                                                | ((0xfffff000U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xaU) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xcU)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 8U)) 
                                                                                | ((0xfffffc00U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 8U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xaU)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 5U)) 
                                                                                | ((0xffffff00U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 6U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 8U)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                << 2U)) 
                                                                                | ((0xffffffc0U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 4U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 6U)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                >> 1U)) 
                                                                                | ((0xfffffff0U 
                                                                                & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 2U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 4U)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                >> 4U)) 
                                                                                | ((0xfffffffcU 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 2U)) 
                                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                                                [0U][0U] 
                                                                                >> 7U)) 
                                                                                | ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 2U) 
                                                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
                                                                                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)))))))))))))))))))))))))))))))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
                                                                   << 0x1fU) 
                                                                  | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                                      << 0x1eU) 
                                                                     | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                                         << 0x1dU) 
                                                                        | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                                            << 0x1cU) 
                                                                           | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                                                                << 7U) 
                                                                                | ((0xffffffe0U 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 1U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 5U))) 
                                                                                | ((0x7ffffff8U 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 1U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 3U))) 
                                                                                | (0x1ffffffeU 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 3U) 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 1U))))))))))))))))) 
                                              >> 0x20U)) 
                                     >> 3U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
        = __Vtemp558[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
        = __Vtemp558[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
        = __Vtemp558[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
        = __Vtemp558[3U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_fifo_rxrst 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                  >> 5U) & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                            >> 4U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_fifo_txrst 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                  >> 3U) & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                            >> 2U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                  >> 6U) & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__full))));
    vlTOPp->uart_tx = ((0x1000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])
                        ? (IData)(vlTOPp->uart_rx) : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_out_q));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_in 
        = (1U & ((0x2000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])
                  ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_q)
                  : ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                      >> 0x18U) | ((0x4000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])
                                    ? (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync) 
                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2))) 
                                       | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                          & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2)))
                                    : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (1U & ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                     ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                     : vlTOPp->gpio_i)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xfffffffdU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (2U & (((2U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                      ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                      : (vlTOPp->gpio_i >> 1U)) << 1U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xfffffffbU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (4U & (((4U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                      ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                      : (vlTOPp->gpio_i >> 2U)) << 2U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xfffffff7U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (8U & (((8U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                      ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                      : (vlTOPp->gpio_i >> 3U)) << 3U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xffffffefU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x10U & (((0x10U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                         ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                         : (vlTOPp->gpio_i >> 4U)) 
                       << 4U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xffffffdfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x20U & (((0x20U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                         ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                         : (vlTOPp->gpio_i >> 5U)) 
                       << 5U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xffffffbfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x40U & (((0x40U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                         ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                         : (vlTOPp->gpio_i >> 6U)) 
                       << 6U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xffffff7fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x80U & (((0x80U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                         ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                         : (vlTOPp->gpio_i >> 7U)) 
                       << 7U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xfffffeffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x100U & (((0x100U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                          : (vlTOPp->gpio_i >> 8U)) 
                        << 8U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xfffffdffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x200U & (((0x200U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                          : (vlTOPp->gpio_i >> 9U)) 
                        << 9U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xfffffbffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x400U & (((0x400U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                          : (vlTOPp->gpio_i >> 0xaU)) 
                        << 0xaU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xfffff7ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x800U & (((0x800U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                          : (vlTOPp->gpio_i >> 0xbU)) 
                        << 0xbU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xffffefffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x1000U & (((0x1000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                           ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                           : (vlTOPp->gpio_i >> 0xcU)) 
                         << 0xcU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xffffdfffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x2000U & (((0x2000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                           ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                           : (vlTOPp->gpio_i >> 0xdU)) 
                         << 0xdU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xffffbfffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x4000U & (((0x4000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                           ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                           : (vlTOPp->gpio_i >> 0xeU)) 
                         << 0xeU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xffff7fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x8000U & (((0x8000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                           ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                           : (vlTOPp->gpio_i >> 0xfU)) 
                         << 0xfU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xfffeffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x10000U & (((0x10000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                            : (vlTOPp->gpio_i >> 0x10U)) 
                          << 0x10U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xfffdffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x20000U & (((0x20000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                            : (vlTOPp->gpio_i >> 0x11U)) 
                          << 0x11U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xfffbffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x40000U & (((0x40000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                            : (vlTOPp->gpio_i >> 0x12U)) 
                          << 0x12U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xfff7ffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x80000U & (((0x80000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                            : (vlTOPp->gpio_i >> 0x13U)) 
                          << 0x13U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xffefffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x100000U & (((0x100000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                             ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                             : (vlTOPp->gpio_i >> 0x14U)) 
                           << 0x14U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xffdfffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x200000U & (((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                             ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                             : (vlTOPp->gpio_i >> 0x15U)) 
                           << 0x15U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xffbfffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x400000U & (((0x400000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                             ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                             : (vlTOPp->gpio_i >> 0x16U)) 
                           << 0x16U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xff7fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x800000U & (((0x800000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                             ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                             : (vlTOPp->gpio_i >> 0x17U)) 
                           << 0x17U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xfeffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x1000000U & (((0x1000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                              ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                              : (vlTOPp->gpio_i >> 0x18U)) 
                            << 0x18U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xfdffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x2000000U & (((0x2000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                              ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                              : (vlTOPp->gpio_i >> 0x19U)) 
                            << 0x19U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xfbffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x4000000U & (((0x4000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                              ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                              : (vlTOPp->gpio_i >> 0x1aU)) 
                            << 0x1aU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xf7ffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x8000000U & (((0x8000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                              ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                              : (vlTOPp->gpio_i >> 0x1bU)) 
                            << 0x1bU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xefffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x10000000U & (((0x10000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                               ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                               : (vlTOPp->gpio_i >> 0x1cU)) 
                             << 0x1cU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xdfffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x20000000U & (((0x20000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                               ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                               : (vlTOPp->gpio_i >> 0x1dU)) 
                             << 0x1dU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0xbfffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x40000000U & (((0x40000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                               ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                               : (vlTOPp->gpio_i >> 0x1eU)) 
                             << 0x1eU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
        = ((0x7fffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
           | (0x80000000U & (((0x80000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                               ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                               : (vlTOPp->gpio_i >> 0x1fU)) 
                             << 0x1fU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event 
        = (1U & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 3U) & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                             >> 4U)) | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_d 
        = ((0U == (3U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                          << 4U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
                                    >> 0x1cU)))) ? 
           (2U > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_depth))
            : ((1U == (3U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                              << 4U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
                                        >> 0x1cU))))
                ? (4U > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_depth))
                : ((2U == (3U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                  << 4U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
                                            >> 0x1cU))))
                    ? (8U > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_depth))
                    : (0x10U > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_depth)))));
    vlTOPp->__Vtableidx14 = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                              << 3U) | (7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                               << 1U) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
                                                 >> 0x1fU))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d 
        = vlTOPp->__Vtable14_Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d
        [vlTOPp->__Vtableidx14];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout 
        = ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q 
            == (0xffffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                              << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
                                           >> 1U)))) 
           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U]);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle 
        = (1U & ((~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                     >> 0x1cU)) | (0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_parity_err 
        = (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
             >> 0x17U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q)) 
           & (VL_REDXOR_32((0x1ffU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                      >> 1U))) ^ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                                  >> 0x16U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data 
        = (0xffU & ((0x800000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])
                     ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                        >> 1U) : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                  >> 2U)));
    if ((0x8000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q;
        if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_in)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d = 0U;
        } else {
            if (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d 
                    = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                         == ((0x800000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])
                              ? 0xbU : 0xaU)) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_in)) 
                       | (1U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q)));
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d = 1U;
    }
    if ((0x8000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        if ((0x10000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__nco_sum_q)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d 
                = (1U & (((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q)) 
                         >> 4U));
        }
        if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_in)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
    }
    if ((0x8000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q;
        if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_in)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((0x800000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])
                    ? 0xbU : 0xaU);
        } else {
            if (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                    = ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                         == ((0x800000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])
                              ? 0xbU : 0xaU)) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_in))
                        ? 0U : (0xfU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                                        - (IData)(1U))));
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d = 0U;
    }
    if ((0x8000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q;
        if ((0x10000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__nco_sum_q)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q)));
        }
        if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_in)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = 8U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_d 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U])
            ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout)
                ? 0U : (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                         != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                         ? 0U : ((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth))
                                  ? 0U : (0xffffffU 
                                          & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q)
                                              ? ((IData)(1U) 
                                                 + vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)
                                              : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)))))
            : 0U);
    if ((0x8000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q;
        if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_in)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
        } else {
            if (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
                if ((1U & (~ (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                               == ((0x800000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])
                                    ? 0xbU : 0xaU)) 
                              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_in))))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d 
                        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_in) 
                            << 0xaU) | (0x3ffU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                                  >> 1U)));
                }
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle) 
            & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty))) 
           & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
              >> 0x1cU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[5U] 
        = ((0x1fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[5U]) 
           | (0xffe00000U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
                             << 0x15U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U] 
        = ((0xffe00000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U]) 
           | (0x1fffffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
                           >> 0xbU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__intr_hw__DOT__new_event 
        = (((- (IData)((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xbU] 
                              >> 0xaU)))) & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xcU] 
                                              << 0x15U) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xbU] 
                                                >> 0xbU))) 
           | ((((((~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q) 
                  & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[4U]) 
                | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q 
                    & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d)) 
                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[3U])) 
               | ((~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
                  & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[1U])) 
              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[2U])));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
        = ((0xffffdfffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U]) 
           | (0xffffe000U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle) 
                              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                             << 0xdU)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event 
        = (1U & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                   >> 0x1fU) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U]) 
                 | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event 
        = (1U & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                   >> 0x1dU) & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                >> 0x1eU)) | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_parity_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event 
        = (1U & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 0xbU) & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                               >> 0xcU)) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_d) 
                                            & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_prev_q)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event 
        = (1U & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 9U) & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                             >> 0xaU)) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d) 
                                          & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_prev_q)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event 
        = (1U & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 7U) & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                             >> 8U)) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle_q))) 
                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
            & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err))) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_parity_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__break_st_q) 
            | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
               & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err)) 
                  | (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data)))))
            ? 0U : (0x1fU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err) 
                              & (0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data)))
                              ? ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_q))
                              : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_q))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__full)));
    if ((0x10000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = ((0x800000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])
                    ? 0xbU : 0xaU);
        } else {
            if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                    = (0xfU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q) 
                               - (IData)(1U)));
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = 0U;
    }
    if ((0x10000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_q;
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x400U | ((0x200U & (((~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                             >> 0x17U)) 
                                         << 9U) | (
                                                   (VL_REDXOR_32((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_data)) 
                                                    << 9U) 
                                                   ^ 
                                                   (0x7fe00U 
                                                    & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                                       >> 0xdU))))) 
                             | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_data) 
                                << 1U)));
        } else {
            if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
                    = (0x400U | (0x3ffU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_q) 
                                           >> 1U)));
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_d = 0x7ffU;
    }
    if ((0x10000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_d 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_q;
        if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready)))) {
            if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_d 
                    = (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_q));
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_d = 1U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U] 
        = ((0x1fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U]) 
           | (0xffe00000U & ((IData)((((QData)((IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__intr_hw__DOT__new_event 
                                                        | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xeU] 
                                                            << 0x15U) 
                                                           | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xdU] 
                                                              >> 0xbU))))) 
                                       << 1U) | (QData)((IData)(
                                                                (0U 
                                                                 != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__intr_hw__DOT__new_event))))) 
                             << 0x15U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[7U] 
        = ((0x1fffffU & ((IData)((((QData)((IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__intr_hw__DOT__new_event 
                                                    | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xeU] 
                                                        << 0x15U) 
                                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xdU] 
                                                          >> 0xbU))))) 
                                   << 1U) | (QData)((IData)(
                                                            (0U 
                                                             != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__intr_hw__DOT__new_event))))) 
                         >> 0xbU)) | (0xffe00000U & 
                                      ((IData)(((((QData)((IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__intr_hw__DOT__new_event 
                                                                   | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xeU] 
                                                                       << 0x15U) 
                                                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xdU] 
                                                                         >> 0xbU))))) 
                                                  << 1U) 
                                                 | (QData)((IData)(
                                                                   (0U 
                                                                    != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__intr_hw__DOT__new_event)))) 
                                                >> 0x20U)) 
                                       << 0x15U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event 
        = (1U & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 5U) & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                             >> 6U)) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid) 
                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__full))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_break_err 
        = (((0U == (3U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                           << 0xcU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                       >> 0x14U))))
             ? (2U <= (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d))
             : ((1U == (3U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                               << 0xcU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 0x14U))))
                 ? (4U <= (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d))
                 : ((2U == (3U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                   << 0xcU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                               >> 0x14U))))
                     ? (8U <= (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d))
                     : (0x10U <= (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d))))) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__break_st_q)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_state__DOT__wr_data 
        = (((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U])
             ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[7U] 
                 << 0xaU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U] 
                             >> 0x16U)) : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
           & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_state_we)
               ? (~ ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                      [6U][1U] << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [6U][0U] 
                                            >> 1U)))
               : 0xffffffffU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((1U & ((((((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                     | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                        >> 1U)) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                   >> 2U)) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                              >> 3U)) 
                  | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                     >> 4U)) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                >> 5U)) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                           >> 6U)) 
               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                  >> 7U)))) {
        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q;
        } else {
            if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next 
                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q;
            } else {
                if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next = 0U;
                } else {
                    if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))) {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next 
                            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__q;
                    } else {
                        if ((0x10U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next 
                                = ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[5U] 
                                    << 0xcU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[4U] 
                                                >> 0x14U));
                        } else {
                            if ((0x20U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next 
                                    = ((0xfffffc00U 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next) 
                                       | (0x3ffU & 
                                          ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[5U] 
                                            << 0x16U) 
                                           | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[4U] 
                                              >> 0xaU))));
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next 
                                    = (0xfff00000U 
                                       | (0x3ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next));
                            } else {
                                if ((0x40U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next 
                                        = ((0xffff0000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next) 
                                           | (0xffffU 
                                              & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[3U] 
                                                    >> 0x10U))));
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next 
                                        = (0xffffU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next);
                                } else {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next 
                                        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[2U];
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x100U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff0000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[2U] 
                                  << 0x10U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[1U] 
                                               >> 0x10U))));
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0xffff0000U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[1U] 
                                     << 0x10U)));
        } else {
            if ((0x200U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffff0000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next) 
                       | (0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[1U] 
                                      << 0x10U) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[0U] 
                                                   >> 0x10U))));
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next) 
                       | (0xffff0000U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[0U] 
                                         << 0x10U)));
            } else {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0x400U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))
                        ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q
                        : ((0x800U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))
                            ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q
                            : ((0x1000U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))
                                ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q
                                : ((0x2000U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))
                                    ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q
                                    : ((0x4000U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))
                                        ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q
                                        : 0xffffffffU)))));
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event 
        = (1U & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 1U) & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                             >> 2U)) | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_break_err)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
        = ((0x1ffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U]) 
           | (0xfffe0000U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event) 
                              << 0x1fU) | ((0x40000000U 
                                            & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event) 
                                                << 0x1eU) 
                                               | (0xc0000000U 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                                     << 3U)))) 
                                           | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event) 
                                               << 0x1dU) 
                                              | ((0x10000000U 
                                                  & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event) 
                                                      << 0x1cU) 
                                                     | (0xf0000000U 
                                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                                           << 2U)))) 
                                                 | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event) 
                                                     << 0x1bU) 
                                                    | ((0x4000000U 
                                                        & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event) 
                                                            << 0x1aU) 
                                                           | (0xfc000000U 
                                                              & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                                                 << 1U)))) 
                                                       | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event) 
                                                           << 0x19U) 
                                                          | ((0x1000000U 
                                                              & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event) 
                                                                  << 0x18U) 
                                                                 | (0xff000000U 
                                                                    & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U]))) 
                                                             | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event) 
                                                                 << 0x17U) 
                                                                | ((0x400000U 
                                                                    & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event) 
                                                                        << 0x16U) 
                                                                       | (0x7fc00000U 
                                                                          & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                                                             >> 1U)))) 
                                                                   | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event) 
                                                                       << 0x15U) 
                                                                      | ((0x100000U 
                                                                          & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event) 
                                                                              << 0x14U) 
                                                                             | (0x3ff00000U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                                                                >> 2U)))) 
                                                                         | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event) 
                                                                             << 0x13U) 
                                                                            | ((0x40000U 
                                                                                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event) 
                                                                                << 0x12U) 
                                                                                | (0x1ffc0000U 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                                                                >> 3U)))) 
                                                                               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event) 
                                                                                << 0x11U)))))))))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[2U] 
        = (0x1ffffU & ((1U & ((0x1ffffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event)) 
                              | (0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                         >> 0x1cU)))) 
                       | ((0x1ffffU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event) 
                                       >> 1U)) | ((0x1ffffU 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event) 
                                                      >> 3U)) 
                                                  | ((0x1ffffU 
                                                      & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event) 
                                                         >> 5U)) 
                                                     | ((0x1ffffU 
                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event) 
                                                            >> 7U)) 
                                                        | ((0x1ffffU 
                                                            & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event) 
                                                               >> 9U)) 
                                                           | ((0x1ffffU 
                                                               & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event) 
                                                                  >> 0xbU)) 
                                                              | ((0x1ffffU 
                                                                  & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event) 
                                                                     >> 0xdU)) 
                                                                 | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event) 
                                                                    >> 0xfU))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_tx_watermark__DOT__wr_data 
        = (1U & (((0x80000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                   ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[2U]
                   : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)) 
                 & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_watermark_we)) 
                    | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][0U] >> 1U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__wr_data 
        = (1U & (((0x20000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x1eU) : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q)) 
                 & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_watermark_we)) 
                    | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][0U] >> 2U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__wr_data 
        = (1U & (((0x8000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x1cU) : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q)) 
                 & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_empty_we)) 
                    | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][0U] >> 3U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data 
        = (1U & (((0x2000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x1aU) : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)) 
                 & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_overflow_we)) 
                    | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][0U] >> 4U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data 
        = (1U & (((0x800000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x18U) : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)) 
                 & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_frame_err_we)) 
                    | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][0U] >> 5U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data 
        = (1U & (((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x16U) : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)) 
                 & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_break_err_we)) 
                    | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][0U] >> 6U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data 
        = (1U & (((0x80000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x14U) : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)) 
                 & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_timeout_we)) 
                    | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][0U] >> 7U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data 
        = (1U & (((0x20000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x12U) : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)) 
                 & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_parity_err_we)) 
                    | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                          [0U][0U] >> 8U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((1U & ((((((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                     | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                        >> 1U)) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                   >> 2U)) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                              >> 3U)) 
                  | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                     >> 4U)) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                >> 5U)) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                           >> 6U)) 
               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                  >> 7U)))) {
        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q));
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffdU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                      << 1U));
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffbU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                      << 2U));
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff7U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                      << 3U));
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffefU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                      << 4U));
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffdfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                      << 5U));
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffbfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                      << 6U));
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff7fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                      << 7U));
        } else {
            if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q));
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffdU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                          << 1U));
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffbU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                          << 2U));
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffff7U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                          << 3U));
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffffefU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                          << 4U));
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffffdfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                          << 5U));
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffffbfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                          << 6U));
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffff7fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                          << 7U));
            } else {
                if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xfffffffdU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xfffffffbU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xfffffff7U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xffffffefU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xffffffdfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xffffffbfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xffffff7fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                } else {
                    if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q));
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xfffffffdU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                  << 1U));
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xfffffffbU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                  << 2U));
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xffffffefU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                  << 4U));
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xffffffdfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                  << 5U));
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xffffffbfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                  << 6U));
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xffffff7fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                  << 7U));
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xfffffcffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                  << 8U));
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                  << 0x10U));
                    } else {
                        if ((0x10U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                            >> 0x10U)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffffdU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (2U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                            >> 0xeU)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffffbU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (4U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                            >> 0xcU)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffff7U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (8U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                            >> 0xaU)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffffefU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (0x10U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                               >> 8U)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffffdfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (0x20U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                               >> 6U)));
                        } else {
                            if ((0x20U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                    = ((0xffffff00U 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                       | (0xffU & (
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[2U] 
                                                    << 0x1dU) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                      >> 3U))));
                            } else {
                                if ((0x40U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                        = (0xffffff00U 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                                } else {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                        = (0xfffffffeU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                        = (0xfffffffdU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                        = ((0xffffffe3U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                                              << 2U));
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                        = ((0xffffff9fU 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                              << 5U));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x100U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffc0U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0x3fU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                << 0xaU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[0U] 
                                            >> 0x16U))));
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffc0ffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0x3f0000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[0U]));
        } else {
            if ((0x200U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q));
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffdU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                          << 1U));
            } else {
                if ((0x400U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = ((0xffff0000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                           | (0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[0U]));
                } else {
                    if ((0x800U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xff000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q);
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0x7fffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                  << 0x1fU));
                    } else {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next = 0xffffffffU;
                    }
                }
            }
        }
    }
=======
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [7U][2U] >> 0x12U))) | 
              (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [7U][2U] >> 0x12U)))));
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
}
