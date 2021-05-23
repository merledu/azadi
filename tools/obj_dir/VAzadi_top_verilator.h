// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAZADI_TOP_VERILATOR_H_
#define _VAZADI_TOP_VERILATOR_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"
#include "VAzadi_top_verilator__Dpi.h"

//==========

class VAzadi_top_verilator__Syms;
class VAzadi_top_verilator_VerilatedVcd;
class VAzadi_top_verilator_gpio_reg_pkg;
class VAzadi_top_verilator_rv_plic_reg_pkg;
class VAzadi_top_verilator_uart_reg_pkg;
class VAzadi_top_verilator_i2c_reg_pkg;
class VAzadi_top_verilator_rv_timer_reg_pkg;
class VAzadi_top_verilator_tlul_socket_m1__pi7;
class VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15;


//----------

VL_MODULE(VAzadi_top_verilator) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VAzadi_top_verilator_gpio_reg_pkg* __PVT__gpio_reg_pkg;
    VAzadi_top_verilator_rv_plic_reg_pkg* __PVT__rv_plic_reg_pkg;
    VAzadi_top_verilator_uart_reg_pkg* __PVT__uart_reg_pkg;
    VAzadi_top_verilator_i2c_reg_pkg* __PVT__i2c_reg_pkg;
    VAzadi_top_verilator_rv_timer_reg_pkg* __PVT__rv_timer_reg_pkg;
    VAzadi_top_verilator_tlul_socket_m1__pi7* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM;
    VAzadi_top_verilator_tlul_socket_m1__pi7* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM;
    VAzadi_top_verilator_tlul_socket_m1__pi7* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0;
    VAzadi_top_verilator_tlul_socket_m1__pi7* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1;
    VAzadi_top_verilator_tlul_socket_m1__pi7* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2;
    VAzadi_top_verilator_tlul_socket_m1__pi7* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3;
    VAzadi_top_verilator_tlul_socket_m1__pi7* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4;
    VAzadi_top_verilator_tlul_socket_m1__pi7* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC;
    VAzadi_top_verilator_tlul_socket_m1__pi7* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint all: 3 4 5 6 7 8 9 10 11 12 13 14 16 17 18 19 20 21 23 24 28 34 
    VL_IN8(clock,0,0);
    // Begin mtask footprint all: 5 12 16 19 20 21 34 
    VL_IN8(reset_ni,0,0);
    // Begin mtask footprint all: 3 
    VL_OUT(gpio_o,19,0);
    // Begin mtask footprint all: 3 44 
    VL_IN8(uart_rx,0,0);
    // Begin mtask footprint all: 44 
    VL_OUT8(uart_tx,0,0);
    // Begin mtask footprint all: 3 4 5 21 44 
    VL_IN(gpio_i,19,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 3 4 5 6 7 8 9 10 11 12 13 14 16 17 18 19 20 21 23 24 28 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq;
        // Begin mtask footprint all: 17 18 19 20 23 24 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk;
        // Begin mtask footprint all: 17 18 19 20 23 50 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d;
        // Begin mtask footprint all: 10 36 38 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o[14][3];
        // Begin mtask footprint all: 36 49 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_4[2][3];
        // Begin mtask footprint all: 8 13 
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q;
        // Begin mtask footprint all: 8 13 34 
        WData/*69:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[3];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q;
        // Begin mtask footprint all: 8 13 41 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ip;
        // Begin mtask footprint all: 13 41 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__claim;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__complete;
        WData/*377:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[12];
        // Begin mtask footprint all: 13 18 41 
        QData/*62:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree;
        // Begin mtask footprint all: 18 41 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__threshold[1];
        WData/*188:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6];
        // Begin mtask footprint all: 41 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ie[1];
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__complete_id[1];
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__prio[32];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 6 7 
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_fifo_wdata;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        WData/*255:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__storage[8];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__bit_decr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__bit_clr;
        // Begin mtask footprint all: 5 21 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__data_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__data_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__jtag_rsp;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    };
    struct {
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req_valid;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__state_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__state_q;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__address_d;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__address_q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_d;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_wptr__DOT__intq;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d;
        // Begin mtask footprint all: 20 21 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d;
        WData/*255:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[8];
        // Begin mtask footprint all: 4 5 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d;
        // Begin mtask footprint all: 4 5 20 25 52 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q;
        // Begin mtask footprint all: 5 20 25 52 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q;
        // Begin mtask footprint all: 5 20 21 25 52 
        WData/*255:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[8];
        // Begin mtask footprint all: 5 20 25 51 52 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q;
        // Begin mtask footprint all: 4 5 20 25 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q;
        // Begin mtask footprint all: 4 18 20 25 34 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q;
        // Begin mtask footprint all: 12 34 51 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask;
        // Begin mtask footprint all: 12 51 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[3];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__req_i;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrequest;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__tlul_error;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
    };
    struct {
        // Begin mtask footprint all: 3 5 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d;
        // Begin mtask footprint all: 3 8 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we;
        // Begin mtask footprint all: 3 7 39 
        WData/*67:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__hw2reg[3];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__ctrl_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__cfg0_prescale_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__cfg0_step_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__timer_v_lower0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__timer_v_upper0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__compare_lower0_0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__compare_upper0_0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__intr_enable0_we;
        // Begin mtask footprint all: 3 18 39 
        WData/*154:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__reg2hw[5];
        // Begin mtask footprint all: 3 39 
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__prescaler[1];
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__gen_harts__BRA__0__KET____DOT__u_core__DOT__tick_count;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__intr_state0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_intr_state0__DOT__wr_data;
        // Begin mtask footprint all: 3 9 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio10_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio11_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio12_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio13_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio14_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio15_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio16_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio17_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio18_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio19_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we;
        // Begin mtask footprint all: 9 21 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio4_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio5_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio6_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio8_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio20_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio21_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we;
        // Begin mtask footprint all: 9 37 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__wr_err;
        // Begin mtask footprint all: 9 33 37 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_we;
        // Begin mtask footprint all: 9 33 34 37 39 
        QData/*37:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit;
        // Begin mtask footprint all: 9 33 37 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_re;
        // Begin mtask footprint all: 33 37 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7[2];
        // Begin mtask footprint all: 9 33 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        // Begin mtask footprint all: 9 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_i_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__sda_i_q;
        // Begin mtask footprint all: 9 34 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next;
        // Begin mtask footprint all: 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[2];
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[2];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2];
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[2];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_pwm[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar;
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_spi[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_res_assemble__BRA__3__KET____DOT__pre_round_mantissa;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__gpio_intr;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_slice_result;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_q;
        IData/*22:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_res_assemble__BRA__4__KET____DOT__pre_round_mantissa;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_vec_class_result;
        WData/*159:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[5];
        WData/*127:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[4];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_slice_result;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_d;
    };
    struct {
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_vec_class_result;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__iccm__DOT__wdata;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_res_assemble__BRA__2__KET____DOT__pre_round_mantissa;
        SData/*10:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_res_assemble__BRA__3__KET____DOT__pre_round_exponent;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_class_mask;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_result;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_result;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_class_mask;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_result;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_id_fpu;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_we;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operation;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_floating_type_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__target_aux_q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_tags;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_res_assemble__BRA__1__KET____DOT__pre_round_exponent;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_res_assemble__BRA__1__KET____DOT__pre_round_mantissa;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_res_assemble__BRA__2__KET____DOT__pre_round_exponent;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_res_assemble__BRA__4__KET____DOT__pre_round_exponent;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_busy;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_in_ready;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_ext_bit;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_tags;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_vectorial;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_busy;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_is_class;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_sign;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_in_ready;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_out_valid;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__target_aux_q;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_tags;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_busy;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_in_ready;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_ext_bit;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_tags;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_vectorial;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_busy;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_is_class;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_sign;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__scanmode_i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__scanmode_i;
        // Begin mtask footprint all: 49 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__unnamedblk1__DOT__i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set_spec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_1;
        // Begin mtask footprint all: 16 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__error_internal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        // Begin mtask footprint all: 16 
        WData/*131:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[5];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__iccm_cntrl_data;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rdata_o;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rdata_tlword;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage;
        SData/*13:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q;
        SData/*13:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_d;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__uart_rx_i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rvalid_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_valid;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        IData/*19:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_ns;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q0;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q1;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q2;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q3;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_d;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data_R;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main;
        // Begin mtask footprint all: 16 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        // Begin mtask footprint all: 18 52 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__resumereq;
        // Begin mtask footprint all: 18 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_busy_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fetch_enable_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__intr_out;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q;
        // Begin mtask footprint all: 18 50 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_d;
        // Begin mtask footprint all: 50 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped;
        // Begin mtask footprint all: 47 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o[3][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[3];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dfifo_rspready;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req;
        // Begin mtask footprint all: 47 49 51 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i[3][3];
        // Begin mtask footprint all: 49 51 52 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int;
        // Begin mtask footprint all: 12 49 51 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we;
        // Begin mtask footprint all: 12 16 49 51 52 
        IData/*29:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w;
        // Begin mtask footprint all: 12 49 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q;
        // Begin mtask footprint all: 49 52 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[3];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__instr_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__hold_all_requests;
        // Begin mtask footprint all: 12 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d;
        // Begin mtask footprint all: 12 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i[3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__iccm__DOT__iccm__DOT__mem[4096];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hgrant;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hfifo_rspvalid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__error;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage;
        // Begin mtask footprint all: 12 39 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__tl_reg_d2h;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__reg_rdata_next;
        SData/*8:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__addr_hit;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__wr_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        // Begin mtask footprint all: 12 47 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrequest;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
        // Begin mtask footprint all: 12 19 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3[3];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rom_rdata;
        WData/*65:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data;
    };
    struct {
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword;
        IData/*25:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__instr_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__rvalid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty;
        // Begin mtask footprint all: 12 19 51 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
        // Begin mtask footprint all: 19 51 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 51 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o[3][3];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits;
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__unnamedblk1__DOT__i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__data_valid;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_op_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_mem;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_branch;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_jump;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_id;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_alu;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__csr_pipe_flush;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wreq;
        // Begin mtask footprint all: 46 50 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id;
        // Begin mtask footprint all: 46 48 50 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__stall;
        // Begin mtask footprint all: 46 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_all;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        // Begin mtask footprint all: 25 46 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn;
        // Begin mtask footprint all: 25 48 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__debug_cause;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        // Begin mtask footprint all: 19 25 48 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_csr__DOT__rdata_q;
        // Begin mtask footprint all: 19 25 48 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio;
        // Begin mtask footprint all: 17 19 25 48 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug;
        // Begin mtask footprint all: 17 25 48 49 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
    };
    struct {
        // Begin mtask footprint all: 17 19 24 25 48 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q;
        // Begin mtask footprint all: 17 19 24 25 40 48 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
        // Begin mtask footprint all: 17 19 24 25 46 48 49 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
        // Begin mtask footprint all: 17 19 25 46 48 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
        // Begin mtask footprint all: 19 25 46 48 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn;
        // Begin mtask footprint all: 17 19 24 25 46 47 48 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
        // Begin mtask footprint all: 17 19 25 46 47 48 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q;
        // Begin mtask footprint all: 17 19 25 46 47 
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
        // Begin mtask footprint all: 17 46 47 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int;
        // Begin mtask footprint all: 17 24 25 46 47 48 
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_addr;
        // Begin mtask footprint all: 17 19 24 25 47 48 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_csr__DOT__rdata_q;
        // Begin mtask footprint all: 17 19 24 25 35 47 48 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        // Begin mtask footprint all: 17 18 19 24 25 35 40 46 50 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q;
        // Begin mtask footprint all: 17 24 25 46 50 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id;
        // Begin mtask footprint all: 17 24 25 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[2];
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q;
        // Begin mtask footprint all: 17 23 24 25 50 52 
        IData/*30:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q;
        // Begin mtask footprint all: 50 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_valid;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed;
        // Begin mtask footprint all: 17 50 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err;
        // Begin mtask footprint all: 17 19 50 52 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q;
        // Begin mtask footprint all: 19 50 52 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__entry_en;
        // Begin mtask footprint all: 19 50 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_d;
        // Begin mtask footprint all: 19 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i[3];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_up_cast;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_down_cast;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_up_cast;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_down_cast;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hgrant;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 19 52 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_i[4];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_q;
        WData/*95:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[3];
        WData/*95:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[3];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 19 20 52 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata;
        // Begin mtask footprint all: 20 52 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d;
        // Begin mtask footprint all: 4 20 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q;
        // Begin mtask footprint all: 4 20 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d;
        // Begin mtask footprint all: 4 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q;
        // Begin mtask footprint all: 4 52 
        WData/*511:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[16];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__clear_resumeack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resume;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__go;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command;
        // Begin mtask footprint all: 4 5 52 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q;
        // Begin mtask footprint all: 5 52 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_d;
        // Begin mtask footprint all: 52 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror_valid;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__going;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__exception;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_aligned;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__hfifo_reqready;
        // Begin mtask footprint all: 35 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load;
        WData/*113:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4];
        WData/*272:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__data_wb;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr;
        WData/*159:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[5];
        WData/*127:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[4];
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__pre_round_abs;
    };
    struct {
        WData/*74:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[3];
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__rounded_abs;
        WData/*79:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[3];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__out_ready_fpu2c;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_instr_ret_wb;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_branch;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_load;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_store;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_spec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_in_ready;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_ready;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_in_ready;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__of_after_round;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_round_sticky_bits;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_of_after_round;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_uf_after_round;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_ready;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_ready;
        // Begin mtask footprint all: 35 40 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill;
        // Begin mtask footprint all: 40 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wb_exception;
        // Begin mtask footprint all: 40 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_p;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_us_d2h;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__hfifo_reqready;
        // Begin mtask footprint all: 30 40 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i[12];
        // Begin mtask footprint all: 23 40 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec;
        // Begin mtask footprint all: 23 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__icache_inval;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_a_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_c_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_swap_oprnds_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__use_rs3_q;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_opcode;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_source;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_size;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe;
        // Begin mtask footprint all: 23 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
        // Begin mtask footprint all: 23 24 26 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__is_fp_instr;
        // Begin mtask footprint all: 23 24 35 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_id;
        // Begin mtask footprint all: 23 24 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op;
        // Begin mtask footprint all: 23 24 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_access;
        // Begin mtask footprint all: 24 25 46 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_op;
        // Begin mtask footprint all: 24 25 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_d;
        // Begin mtask footprint all: 24 25 49 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match;
        // Begin mtask footprint all: 24 49 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__stored_addr_q;
    };
    struct {
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_req_int;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev;
        // Begin mtask footprint all: 24 
        WData/*194:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_outputs[7];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__fp_rf_wdata_wb_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__busy;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_busy;
        // Begin mtask footprint all: 24 50 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_d;
        // Begin mtask footprint all: 24 50 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw;
        // Begin mtask footprint all: 24 52 
        IData/*30:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
        // Begin mtask footprint all: 19 24 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err;
        // Begin mtask footprint all: 19 24 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id;
        // Begin mtask footprint all: 19 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn;
        // Begin mtask footprint all: 19 49 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 19 47 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_mux_id;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q;
        // Begin mtask footprint all: 19 47 50 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_d;
        // Begin mtask footprint all: 19 47 52 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_q;
        // Begin mtask footprint all: 19 47 49 52 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n;
        // Begin mtask footprint all: 20 34 47 49 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err[2];
        // Begin mtask footprint all: 4 5 21 25 45 51 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty;
        // Begin mtask footprint all: 4 5 21 25 51 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmdbusy;
        // Begin mtask footprint all: 4 5 25 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q;
        // Begin mtask footprint all: 5 25 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q;
        // Begin mtask footprint all: 5 18 25 52 
        IData/*19:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel;
        // Begin mtask footprint all: 18 25 48 49 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq;
        // Begin mtask footprint all: 18 24 47 49 50 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req;
        // Begin mtask footprint all: 18 24 47 49 50 52 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q;
        // Begin mtask footprint all: 17 24 47 49 50 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set;
        // Begin mtask footprint all: 17 24 47 49 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q;
        // Begin mtask footprint all: 17 19 24 49 50 52 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q;
        // Begin mtask footprint all: 17 50 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err;
        // Begin mtask footprint all: 17 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe;
        // Begin mtask footprint all: 17 30 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_opcode;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_source;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_size;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 17 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d;
        // Begin mtask footprint all: 17 45 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_rsp;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_rsp;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_opcode;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_source;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_size;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 17 47 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_d;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we;
        // Begin mtask footprint all: 17 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d;
        // Begin mtask footprint all: 17 19 24 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err;
        // Begin mtask footprint all: 17 19 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
        // Begin mtask footprint all: 17 19 48 
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q;
        // Begin mtask footprint all: 17 19 27 48 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q;
        // Begin mtask footprint all: 17 19 25 27 48 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q;
        // Begin mtask footprint all: 17 18 19 25 48 
        IData/*17:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs;
        // Begin mtask footprint all: 17 19 25 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err_plus2;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q;
        // Begin mtask footprint all: 19 25 
        IData/*17:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_c_id;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_wb;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
        // Begin mtask footprint all: 19 25 47 48 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_csr__DOT__rdata_q;
        // Begin mtask footprint all: 25 47 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_cause;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__debug_csr_save;
        // Begin mtask footprint all: 25 47 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_restore_mret_id;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_restore_dret_id;
        // Begin mtask footprint all: 17 25 47 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q;
        // Begin mtask footprint all: 17 25 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d;
        // Begin mtask footprint all: 17 48 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        // Begin mtask footprint all: 19 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_en;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_en;
        // Begin mtask footprint all: 18 19 48 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q;
        // Begin mtask footprint all: 19 20 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal;
        // Begin mtask footprint all: 20 48 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_we_ex;
        // Begin mtask footprint all: 20 27 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d;
        // Begin mtask footprint all: 20 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[2];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[2];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__data_req_out;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx;
        // Begin mtask footprint all: 20 26 
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req;
        // Begin mtask footprint all: 20 26 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q;
        // Begin mtask footprint all: 20 26 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q;
        // Begin mtask footprint all: 20 46 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d;
        // Begin mtask footprint all: 20 28 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[3];
        // Begin mtask footprint all: 20 28 45 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[3];
        // Begin mtask footprint all: 20 45 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_d;
        // Begin mtask footprint all: 20 51 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d;
        // Begin mtask footprint all: 32 51 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1[3][3];
        // Begin mtask footprint all: 32 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2[2][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5[2][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9[2][3];
        // Begin mtask footprint all: 32 37 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9[2];
        // Begin mtask footprint all: 37 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10[2];
        // Begin mtask footprint all: 34 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_we_lsu;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_wen;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_qs;
        // Begin mtask footprint all: 34 40 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err;
        // Begin mtask footprint all: 34 48 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we;
    };
    struct {
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux_we;
        // Begin mtask footprint all: 8 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q;
        // Begin mtask footprint all: 8 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__irq_id_o[1];
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__cc_id[1];
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd;
        // Begin mtask footprint all: 8 41 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__claim_id[1];
        // Begin mtask footprint all: 8 37 39 41 
        WData/*171:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[6];
        // Begin mtask footprint all: 10 30 32 33 36 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i[11][3];
        // Begin mtask footprint all: 10 28 32 33 36 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i[10][3];
        // Begin mtask footprint all: 10 36 
        IData/*16:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_req_pending;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 10 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8[2];
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_opcode;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_source;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_size;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe;
        // Begin mtask footprint all: 10 45 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_rsp;
        // Begin mtask footprint all: 45 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8[2][3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i[11];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbaddress_sba_csrs;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__hfifo_reqready;
        // Begin mtask footprint all: 33 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6[2][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7[2][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10[2][3];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
    };
    struct {
        // Begin mtask footprint all: 42 
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_rdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__event_nak;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__event_sda_interference;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__event_stretch_timeout;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__event_tx_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_flag_read_continue;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__tx_fifo_rdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__acq_fifo_wvalid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__load_tcount;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__sda_temp;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__intr_hw_fmt_watermark__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__intr_hw_rx_watermark__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__intr_hw_fmt_overflow__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__intr_hw_rx_overflow__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__intr_hw_nak__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__intr_hw_scl_interference__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__intr_hw_sda_interference__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__intr_hw_stretch_timeout__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__intr_hw_sda_unstable__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__intr_hw_trans_complete__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__intr_hw_tx_empty__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__intr_hw_tx_nonempty__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__intr_hw_tx_overflow__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__intr_hw_acq_overflow__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__intr_hw_ack_stop__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__intr_hw_host_timeout__DOT__new_event;
        // Begin mtask footprint all: 28 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_3;
        // Begin mtask footprint all: 28 45 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__hold_all_requests;
        // Begin mtask footprint all: 17 28 45 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o[11][3];
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__dev_select_outstanding;
        // Begin mtask footprint all: 17 28 
        IData/*16:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding;
        // Begin mtask footprint all: 24 25 27 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid;
        // Begin mtask footprint all: 24 25 26 27 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a;
        // Begin mtask footprint all: 26 27 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd;
        // Begin mtask footprint all: 24 26 27 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b;
        // Begin mtask footprint all: 23 24 26 27 
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator;
        // Begin mtask footprint all: 23 24 27 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode;
        // Begin mtask footprint all: 18 23 24 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle;
        // Begin mtask footprint all: 18 23 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_c_insn_id;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm;
        // Begin mtask footprint all: 18 23 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update;
        // Begin mtask footprint all: 23 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_d;
        // Begin mtask footprint all: 19 23 48 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q;
        // Begin mtask footprint all: 19 23 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b;
        // Begin mtask footprint all: 19 23 31 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt;
        // Begin mtask footprint all: 23 31 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1;
        // Begin mtask footprint all: 23 26 31 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2;
        // Begin mtask footprint all: 23 26 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_raddr_a;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_write_wb;
    };
    struct {
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
        // Begin mtask footprint all: 23 26 48 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q;
        // Begin mtask footprint all: 24 26 27 35 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel;
        // Begin mtask footprint all: 20 24 26 27 48 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q;
        // Begin mtask footprint all: 19 23 24 26 27 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext;
        // Begin mtask footprint all: 19 23 26 27 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex;
        // Begin mtask footprint all: 23 24 27 31 35 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator;
        // Begin mtask footprint all: 19 24 27 31 35 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt;
        // Begin mtask footprint all: 24 27 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__in_valid_c2fpu;
        // Begin mtask footprint all: 24 27 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_valid;
        // Begin mtask footprint all: 23 24 27 48 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator;
        // Begin mtask footprint all: 24 27 48 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        // Begin mtask footprint all: 24 27 34 48 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        // Begin mtask footprint all: 27 48 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        // Begin mtask footprint all: 27 35 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        // Begin mtask footprint all: 27 35 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_in_ready;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        // Begin mtask footprint all: 24 27 35 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
        // Begin mtask footprint all: 24 25 27 35 46 
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q;
        // Begin mtask footprint all: 24 35 46 48 50 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_in_ready;
        // Begin mtask footprint all: 24 35 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__valid_id_fpu;
        // Begin mtask footprint all: 27 35 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        // Begin mtask footprint all: 35 46 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_req_done;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_jump;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_tbranch;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multicycle_done;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        // Begin mtask footprint all: 19 35 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_misaligned_access;
        // Begin mtask footprint all: 19 35 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew;
        // Begin mtask footprint all: 19 35 40 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_ld_hz;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec;
        // Begin mtask footprint all: 35 40 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_resp_valid;
        // Begin mtask footprint all: 18 35 40 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q;
        // Begin mtask footprint all: 18 23 35 40 46 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec;
        // Begin mtask footprint all: 23 35 40 46 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing;
        // Begin mtask footprint all: 35 40 46 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access;
        // Begin mtask footprint all: 35 46 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_wb;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        // Begin mtask footprint all: 20 34 35 46 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req;
        // Begin mtask footprint all: 18 20 34 35 40 46 48 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
    };
    struct {
        // Begin mtask footprint all: 19 23 34 35 40 46 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q;
        // Begin mtask footprint all: 23 35 40 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec;
        // Begin mtask footprint all: 17 35 40 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_load_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_store_err;
        // Begin mtask footprint all: 17 34 35 40 46 48 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q;
        // Begin mtask footprint all: 17 34 40 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q;
        // Begin mtask footprint all: 17 18 34 40 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q;
        // Begin mtask footprint all: 17 18 40 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err;
        // Begin mtask footprint all: 17 40 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run;
        // Begin mtask footprint all: 17 29 
        IData/*16:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding;
        // Begin mtask footprint all: 17 29 30 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o[12][3];
        // Begin mtask footprint all: 17 29 40 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__dev_select_outstanding;
        // Begin mtask footprint all: 29 40 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__hold_all_requests;
        // Begin mtask footprint all: 29 40 45 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[3];
        // Begin mtask footprint all: 40 45 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_11[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i;
        // Begin mtask footprint all: 36 40 45 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o[3];
        // Begin mtask footprint all: 36 40 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__hfifo_reqready;
        // Begin mtask footprint all: 36 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11[2][3];
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__dev_sel_s1n_14;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__hold_all_requests;
        // Begin mtask footprint all: 11 36 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[14];
        // Begin mtask footprint all: 11 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[13];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__error;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        // Begin mtask footprint all: 11 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        // Begin mtask footprint all: 3 11 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_enable_rx_watermark_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_enable_fmt_overflow_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_enable_rx_overflow_we;
        // Begin mtask footprint all: 11 21 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_enable_nak_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_enable_scl_interference_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_enable_sda_interference_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_enable_trans_complete_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_enable_tx_empty_we;
        // Begin mtask footprint all: 10 21 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_enable_acq_overflow_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_enable_ack_stop_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_enable_host_timeout_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__ctrl_enablehost_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__timing4_tsu_sto_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__timing4_t_buf_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__timeout_ctrl_val_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__target_id_address0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__target_id_mask0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__target_id_address1_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__target_id_mask1_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__stretch_ctrl_enableaddr_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__stretch_ctrl_enabletx_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__stretch_ctrl_enableacq_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__stretch_ctrl_stop_we;
        // Begin mtask footprint all: 3 10 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_enable_fmt_watermark_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__ovrd_sclval_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__ovrd_sdaval_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__timing0_thigh_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__timing0_tlow_we;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__timing1_t_r_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__timing1_t_f_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__timing2_tsu_sta_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__timing2_thd_sta_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__timing3_tsu_dat_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__timing3_thd_dat_we;
        // Begin mtask footprint all: 3 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_ctrl__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_cfg0_prescale__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_cfg0_step__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_timer_v_lower0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_timer_v_upper0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_intr_enable0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_intr_state0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_state__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_enable__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio10__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_2__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_msip0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_tx_watermark__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_enable_tx_watermark__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_nco__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ovrd_txen__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ovrd_txval__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__qe;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__sync_rx__DOT__intq;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_fmt_watermark__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_host_timeout__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_enable_fmt_watermark__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_enable_rx_watermark__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_enable_fmt_overflow__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_enable_rx_overflow__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_ctrl_enabletarget__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_ovrd_txovrden__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_ovrd_sclval__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_ovrd_sdaval__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_timing0_thigh__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_timing0_tlow__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_timing1_t_r__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_timing1_t_f__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_timing2_tsu_sta__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_timing2_thd_sta__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_timing3_tsu_dat__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_timing3_thd_dat__DOT__qe;
        // Begin mtask footprint all: 3 13 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__q;
        // Begin mtask footprint all: 3 13 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__msip0_we;
        // Begin mtask footprint all: 13 39 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__set;
        // Begin mtask footprint all: 13 21 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio1_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio2_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio3_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio9_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio22_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio23_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio24_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio25_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio26_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio27_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio28_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio29_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio30_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio31_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we;
        // Begin mtask footprint all: 13 21 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__host_timeout_ctrl_we;
        // Begin mtask footprint all: 3 13 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__ctrl_enabletarget_we;
        // Begin mtask footprint all: 3 13 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_enable_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_rising_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_falling_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__ctrl_en_input_filter_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_watermark_we;
        // Begin mtask footprint all: 13 21 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_watermark_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_empty_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_overflow_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_frame_err_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_parity_err_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_tx_we;
        // Begin mtask footprint all: 13 21 44 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_break_err_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_parity_en_we;
        // Begin mtask footprint all: 3 13 44 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_parity_odd_we;
    };
    struct {
        // Begin mtask footprint all: 3 7 13 44 
        WData/*64:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[3];
        // Begin mtask footprint all: 7 13 44 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txilvl_we;
        // Begin mtask footprint all: 7 44 
        WData/*458:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[15];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_tx_watermark__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_break_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__break_st_q;
        // Begin mtask footprint all: 3 7 44 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_watermark_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_watermark_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_empty_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_overflow_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_frame_err_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_break_err_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_timeout_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_parity_err_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q;
        // Begin mtask footprint all: 3 7 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_en_q;
        // Begin mtask footprint all: 3 7 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_state_we;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q;
        // Begin mtask footprint all: 3 7 43 44 
        WData/*245:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[8];
        SData/*10:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q;
        // Begin mtask footprint all: 7 43 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_state__DOT__wr_data;
        SData/*10:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d;
        // Begin mtask footprint all: 7 10 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wdata_we;
        // Begin mtask footprint all: 7 10 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__txdata_we;
        // Begin mtask footprint all: 3 10 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rxblvl_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nco_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_val_we;
        // Begin mtask footprint all: 3 43 
        SData/*10:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_q;
        SData/*10:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_d;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d;
        // Begin mtask footprint all: 3 44 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__q;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_depth;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_prev_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_prev_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 3 12 44 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txen_we;
        // Begin mtask footprint all: 3 12 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txval_we;
        // Begin mtask footprint all: 3 11 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_en_we;
        // Begin mtask footprint all: 11 43 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__reg_rdata_next;
        // Begin mtask footprint all: 11 21 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_slpbk_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_llpbk_we;
        // Begin mtask footprint all: 11 21 44 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_timeout_we;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rx_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nf_we;
        // Begin mtask footprint all: 11 44 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        // Begin mtask footprint all: 7 11 44 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txrst_we;
        // Begin mtask footprint all: 7 11 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_uart0_tx_watermark;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_uart0_rx_watermark;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_uart0_tx_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_uart0_rx_overflow;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_uart0_rx_frame_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_uart0_rx_break_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_uart0_rx_timeout;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_rx_overflow;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_nak;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_scl_interference;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_sda_interference;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_stretch_timeout;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_sda_unstable;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_trans_complete;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_tx_empty;
        // Begin mtask footprint all: 7 11 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxrst_we;
        // Begin mtask footprint all: 11 43 44 
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err;
        // Begin mtask footprint all: 43 44 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout;
        // Begin mtask footprint all: 9 43 44 
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        // Begin mtask footprint all: 3 9 43 44 
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_q;
        // Begin mtask footprint all: 3 9 43 
        IData/*16:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__nco_sum_q;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q;
        // Begin mtask footprint all: 3 9 
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_val_q;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        WData/*255:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[8];
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        WData/*255:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[8];
        // Begin mtask footprint all: 3 9 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_state_fmt_watermark_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_state_rx_watermark_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_state_host_timeout_we;
        // Begin mtask footprint all: 9 42 
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_wdata;
        WData/*415:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__storage[13];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_fmt_watermark__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_fmt_overflow__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_nak__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_scl_interference__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_sda_interference__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_host_timeout__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__event_scl_interference;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__event_sda_unstable;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__event_ack_stop;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__i2c_fifo_fmtrst;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__i2c_fifo_txrst;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__input_byte_clr;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__bit_idx;
        // Begin mtask footprint all: 9 21 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_state_fmt_overflow_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_state_rx_overflow_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_state_nak_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_state_scl_interference_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_state_sda_interference_we;
        // Begin mtask footprint all: 9 21 42 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_state_stretch_timeout_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_state_sda_unstable_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_state_trans_complete_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_state_tx_empty_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_state_tx_nonempty_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_state_tx_overflow_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_state_acq_overflow_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_state_ack_stop_we;
        // Begin mtask footprint all: 7 9 11 12 42 43 
        WData/*388:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[13];
        // Begin mtask footprint all: 7 9 11 43 44 
        WData/*124:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[4];
        // Begin mtask footprint all: 7 9 43 44 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_in;
        // Begin mtask footprint all: 9 43 
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_sda_unstable__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_trans_complete__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_tx_nonempty__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_tx_overflow__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_acq_overflow__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_ack_stop__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__stop_det;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d;
        // Begin mtask footprint all: 3 9 44 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_out_q;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 9 44 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_fifo_rxrst;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_fifo_txrst;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        // Begin mtask footprint all: 16 44 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q;
        // Begin mtask footprint all: 16 34 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__we_i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__tlul_error;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 14 34 
        IData/*30:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec;
        // Begin mtask footprint all: 14 
        WData/*991:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[31];
        // Begin mtask footprint all: 14 48 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        // Begin mtask footprint all: 48 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_rdata_ext;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        // Begin mtask footprint all: 27 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[2];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[2];
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext;
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d;
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
        IData/*20:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_in_ready;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_in_ready;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_in_ready;
        // Begin mtask footprint all: 19 27 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
        // Begin mtask footprint all: 19 40 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__outstanding_load_wb;
        // Begin mtask footprint all: 26 
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be;
        // Begin mtask footprint all: 26 28 29 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[3];
        // Begin mtask footprint all: 29 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_2;
        // Begin mtask footprint all: 25 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[16];
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[16];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[32];
    };
    struct {
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[32];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_mtval;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_if;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_id;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__autoexecdata_idx;
        // Begin mtask footprint all: 5 25 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__resp_queue_data;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum0;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum1;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum2;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum3;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned;
        // Begin mtask footprint all: 5 
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[4];
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req;
        QData/*63:0*/ Azadi_top_verilator__DOT__u_jtagdpi__DOT__ctx;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped2;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat3;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1;
        CData/*0:0*/ Azadi_top_verilator__DOT__cio_jtag_tck;
        CData/*0:0*/ Azadi_top_verilator__DOT__cio_jtag_tdi;
        CData/*0:0*/ Azadi_top_verilator__DOT__cio_jtag_tms;
        CData/*0:0*/ Azadi_top_verilator__DOT__cio_jtag_trst_n;
        CData/*0:0*/ Azadi_top_verilator__DOT__cio_jtag_srst_n;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync;
        // Begin mtask footprint all: 5 44 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q;
        // Begin mtask footprint all: 44 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__intr_hw__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_parity_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event;
        // Begin mtask footprint all: 24 47 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_mtvec_init;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we;
        // Begin mtask footprint all: 32 47 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3[3][3];
        // Begin mtask footprint all: 22 
        WData/*194:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_outputs[7];
        WData/*272:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9];
        WData/*194:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_outputs[7];
        WData/*272:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9];
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_valid;
        IData/*20:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid;
        IData/*20:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
        IData/*20:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
    };
    struct {
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
        // Begin mtask footprint all: 22 35 
        WData/*151:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_outputs[5];
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_ext;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        // Begin mtask footprint all: 22 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        // Begin mtask footprint all: 22 24 
        WData/*272:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9];
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid;
        // Begin mtask footprint all: 22 24 48 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        // Begin mtask footprint all: 1 22 24 48 
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        // Begin mtask footprint all: 15 22 24 48 
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        // Begin mtask footprint all: 17 22 24 48 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q;
        // Begin mtask footprint all: 24 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_en;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        // Begin mtask footprint all: 2 24 48 
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        // Begin mtask footprint all: 19 35 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec;
        // Begin mtask footprint all: 19 24 25 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en;
        // Begin mtask footprint all: 18 19 25 
        IData/*17:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q;
        // Begin mtask footprint all: 18 25 
        IData/*17:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ctrl_busy;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart;
        // Begin mtask footprint all: 18 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q;
        // Begin mtask footprint all: 18 23 26 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we;
        // Begin mtask footprint all: 18 19 23 26 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type;
        // Begin mtask footprint all: 18 19 23 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec;
        // Begin mtask footprint all: 18 19 23 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn;
        // Begin mtask footprint all: 18 19 23 40 46 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q;
        // Begin mtask footprint all: 18 23 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id;
        // Begin mtask footprint all: 19 23 25 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q;
        // Begin mtask footprint all: 23 25 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec;
        // Begin mtask footprint all: 23 25 26 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_id;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q;
        // Begin mtask footprint all: 19 23 26 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__mult_sel_ex;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match;
        // Begin mtask footprint all: 18 19 23 24 25 26 31 46 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id;
        // Begin mtask footprint all: 18 20 23 24 46 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done;
        // Begin mtask footprint all: 18 23 34 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q;
        // Begin mtask footprint all: 23 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q;
        // Begin mtask footprint all: 11 23 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__error;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__error;
        // Begin mtask footprint all: 11 23 44 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__tl_reg_d2h;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        // Begin mtask footprint all: 23 44 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        // Begin mtask footprint all: 23 43 44 
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err;
        // Begin mtask footprint all: 6 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__byte_clr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp;
        // Begin mtask footprint all: 6 
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__scl_rx_val;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__sda_rx_val;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__acq_fifo_rdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__byte_decr;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__read_byte;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__read_byte_clr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__shift_data_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__restart;
        // Begin mtask footprint all: 6 42 
        IData/*19:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_d;
        IData/*30:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__stretch;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_high_cnt;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__acq_fifo_wdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__event_trans_complete;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__event_tx_nonempty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_wready;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_byte;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_fifo_wvalid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_fifo_wready;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_fifo_depth;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_watermark_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_watermark_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_watermark_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_watermark_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__tx_fifo_wready;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__host_idle;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__target_idle;
        // Begin mtask footprint all: 6 13 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__fifo_ctrl_txrst_we;
        // Begin mtask footprint all: 7 13 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__fdata_fbyte_we;
        // Begin mtask footprint all: 7 13 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__ia;
        // Begin mtask footprint all: 7 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_gpio;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_uart0_rx_parity_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_fmt_watermark;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_rx_watermark;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_fmt_overflow;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_tx_nonempty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_tx_overflow;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_acq_overflow;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_ack_stop;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_host_timeout;
        // Begin mtask footprint all: 7 11 39 
        QData/*56:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_vector;
        // Begin mtask footprint all: 11 39 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__src_q;
        // Begin mtask footprint all: 39 
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__step[1];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__mtime_d[1];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__mtime[1];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__mtimecmp[1][1];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__mtimecmp_update[1][1];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__le;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__tick;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__gen_harts__BRA__0__KET____DOT__u_intr_hw__DOT__new_event;
        // Begin mtask footprint all: 19 25 35 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
        // Begin mtask footprint all: 19 25 35 47 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
        // Begin mtask footprint all: 25 35 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int;
        // Begin mtask footprint all: 31 35 
        WData/*194:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_outputs[7];
        IData/*18:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__sum_sticky_bits;
        WData/*79:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_special_result[3];
        SData/*8:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__final_mantissa;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__final_exponent;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__effective_subtraction;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__result_is_special;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__addend_sticky_bits;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__final_sign;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__of_before_round;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__regular_status;
        // Begin mtask footprint all: 24 31 35 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_out_valid;
        // Begin mtask footprint all: 24 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid;
        // Begin mtask footprint all: 20 24 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q;
        // Begin mtask footprint all: 20 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d;
        // Begin mtask footprint all: 20 25 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_d;
        // Begin mtask footprint all: 20 25 26 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id;
        // Begin mtask footprint all: 20 25 45 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q;
        // Begin mtask footprint all: 20 21 25 45 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q;
        // Begin mtask footprint all: 25 45 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbaddress_write_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbdata_write_valid;
        // Begin mtask footprint all: 21 45 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbdata_read_valid;
        // Begin mtask footprint all: 21 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[4];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dmi_rsp;
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_d;
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__testmode_i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sberror_valid;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sberror;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_dmi_busy;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_sync;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_rptr__DOT__intq;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_15__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_16__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_18__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_19__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_20__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_30__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio1__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio3__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio5__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio6__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio8__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio21__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio25__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio26__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_16__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_18__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_19__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_enable_rx_watermark__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_enable_tx_empty__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_enable_rx_overflow__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_enable_rx_frame_err__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_enable_rx_timeout__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_enable_rx_parity_err__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_tx__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_rx__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_nf__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_fmt_overflow__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_nak__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_scl_interference__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_sda_interference__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_sda_unstable__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_trans_complete__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_tx_nonempty__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_tx_overflow__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_acq_overflow__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_state_ack_stop__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_enable_nak__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_enable_scl_interference__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_enable_sda_interference__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_enable_stretch_timeout__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_enable_sda_unstable__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_enable_trans_complete__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_enable_tx_empty__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_enable_tx_nonempty__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_enable_tx_overflow__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_enable_acq_overflow__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_enable_ack_stop__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_intr_enable_host_timeout__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_ctrl_enablehost__DOT__qe;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_timing4_tsu_sto__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_timing4_t_buf__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_target_id_address0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_target_id_mask0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_target_id_address1__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_target_id_mask1__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_stretch_ctrl_enableaddr__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_stretch_ctrl_enabletx__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_stretch_ctrl_enableacq__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_stretch_ctrl_stop__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_host_timeout_ctrl__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n;
        // Begin mtask footprint all: 16 19 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem[4096];
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword;
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__fwd_rom_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty;
        // Begin mtask footprint all: 16 19 34 
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__addr_i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__req_i;
        // Begin mtask footprint all: 19 34 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wdata_int;
        // Begin mtask footprint all: 18 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__fp_rf_we_wb_q;
        // Begin mtask footprint all: 18 24 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__fp_rf_waddr_wb_q;
        // Begin mtask footprint all: 18 24 46 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_busy;
        // Begin mtask footprint all: 24 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_dyn_mod;
        // Begin mtask footprint all: 24 46 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_branch;
        // Begin mtask footprint all: 40 46 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set;
        // Begin mtask footprint all: 12 19 37 40 45 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o[11];
        // Begin mtask footprint all: 19 37 45 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o[10];
        // Begin mtask footprint all: 14 26 
        WData/*1023:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[32];
        // Begin mtask footprint all: 14 26 31 
        WData/*1023:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[32];
        // Begin mtask footprint all: 26 31 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_rdata_b;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc;
        // Begin mtask footprint all: 31 
        WData/*95:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fpu_op_a;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fpu_op_b;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__b;
        IData/*27:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__addend_after_shift;
        IData/*28:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__sum_raw;
        IData/*27:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__sum;
        IData/*28:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__sum_shifted;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes;
        IData/*18:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp;
        QData/*47:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__operand_a;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__operand_b;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__operand_c;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__exponent_addend;
    };
    struct {
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__exponent_product;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__exponent_difference;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__normalized_exponent;
        QData/*47:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__trimmed_ops;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_special_results__BRA__0__KET____DOT__active_format__DOT__special_results__DOT__special_res;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__value;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__1__KET____DOT__value;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__2__KET____DOT__value;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands;
        QData/*47:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_swap_oprnds;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__input_boxed;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__input_boxed;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__input_boxed;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_1op;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_2op;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_sign;
        WData/*119:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_exponent[4];
        WData/*104:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_mantissa[4];
        WData/*119:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__info_q[4];
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__info_a;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__info_b;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__info_c;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__any_operand_inf;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__any_operand_nan;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__tentative_sign;
        IData/*24:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_special_status;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result_is_special;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__addend_shamt;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__mantissa_c;
        WData/*94:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_lut[3];
        WData/*159:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[5];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_normal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_inf;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_nan;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_zero;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__1__KET____DOT__is_normal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__1__KET____DOT__is_inf;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__1__KET____DOT__is_nan;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__1__KET____DOT__is_zero;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__2__KET____DOT__is_boxed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__2__KET____DOT__is_normal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__2__KET____DOT__is_inf;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__2__KET____DOT__is_nan;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__2__KET____DOT__is_signalling;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__2__KET____DOT__is_quiet;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__2__KET____DOT__is_zero;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__2__KET____DOT__is_subnormal;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_1op;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_2op;
        // Begin mtask footprint all: 13 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d;
    };
    struct {
        // Begin mtask footprint all: 13 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__accept_t_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__accept_t_rsp;
        // Begin mtask footprint all: 13 49 
        IData/*16:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding;
        // Begin mtask footprint all: 13 49 52 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__dev_select_outstanding;
        // Begin mtask footprint all: 23 49 52 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o[4][3];
        // Begin mtask footprint all: 23 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_req_pending;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 11 23 42 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__tl_reg_d2h;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        // Begin mtask footprint all: 23 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__reg_re;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__wr_err;
        // Begin mtask footprint all: 23 42 43 
        IData/*21:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__addr_hit;
        // Begin mtask footprint all: 42 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_wvalid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_flag_start_before;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_flag_stop_after;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__address_match;
        // Begin mtask footprint all: 6 42 43 
        IData/*19:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__tcount_q;
        SData/*8:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__byte_index;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_depth;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_flag_read_bytes;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__acq_fifo_wready;
        // Begin mtask footprint all: 6 7 42 43 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__bit_index;
        // Begin mtask footprint all: 6 9 42 43 
        WData/*115:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__hw2reg[4];
        CData/*0:0*/ Azadi_top_verilator__DOT__i2c0_scl_in;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__tx_fifo_depth;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_q;
        // Begin mtask footprint all: 9 42 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_rvalid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__tx_fifo_rvalid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__start_det;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__input_byte;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__bit_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__host_ack;
        // Begin mtask footprint all: 6 9 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__i2c0_sda_in;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__under_rst;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__under_rst;
        WData/*255:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__storage[8];
        // Begin mtask footprint all: 6 9 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_rready;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__tx_fifo_rready;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__no_stop;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__log_start;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__log_stop;
        // Begin mtask footprint all: 6 12 
        WData/*319:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__storage[10];
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__under_rst;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        // Begin mtask footprint all: 6 12 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_fifo_rvalid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__acq_fifo_rvalid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__under_rst;
        // Begin mtask footprint all: 12 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__fdata_start_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__fdata_stop_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__fdata_read_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__fdata_rcont_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__fdata_nakok_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__fifo_ctrl_rxrst_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__fifo_ctrl_fmtrst_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__fifo_ctrl_acqrst_we;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__i2c_fifo_acqrst;
        // Begin mtask footprint all: 3 12 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__ovrd_txovrden_we;
        // Begin mtask footprint all: 7 12 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__i2c_fifo_rxrst;
        // Begin mtask footprint all: 12 21 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_enable_stretch_timeout_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_enable_sda_unstable_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_enable_tx_nonempty_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__intr_enable_tx_overflow_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__timeout_ctrl_en_we;
        // Begin mtask footprint all: 10 12 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__fifo_ctrl_fmtilvl_we;
        // Begin mtask footprint all: 10 11 12 13 23 38 42 43 44 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[13][3];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 20 24 26 27 35 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[2];
        // Begin mtask footprint all: 20 27 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[2];
        // Begin mtask footprint all: 20 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[2];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[2];
        QData/*33:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0;
        QData/*33:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v1;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v3;
        // Begin mtask footprint all: 20 34 
        IData/*31:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q;
        // Begin mtask footprint all: 4 
        IData/*31:0*/ __Vfunc_load__34__Vfuncout;
        IData/*31:0*/ __Vfunc_float_load__37__Vfuncout;
        IData/*31:0*/ __Vfunc_load__38__Vfuncout;
        IData/*31:0*/ __Vfunc_load__40__Vfuncout;
        IData/*31:0*/ __Vfunc_csrw__41__Vfuncout;
        IData/*31:0*/ __Vfunc_store__47__Vfuncout;
        IData/*31:0*/ __Vfunc_float_store__49__Vfuncout;
        IData/*31:0*/ __Vfunc_store__50__Vfuncout;
        IData/*31:0*/ __Vfunc_csrr__52__Vfuncout;
        IData/*31:0*/ __Vfunc_store__53__Vfuncout;
        SData/*11:0*/ __Vfunc_csrw__41__csr;
        SData/*11:0*/ __Vfunc_csrr__52__csr;
        CData/*2:0*/ __Vfunc_load__34__size;
        CData/*2:0*/ __Vfunc_float_load__37__size;
        CData/*4:0*/ __Vfunc_float_load__37__dest;
        CData/*2:0*/ __Vfunc_load__38__size;
        CData/*4:0*/ __Vfunc_load__38__dest;
        CData/*2:0*/ __Vfunc_load__40__size;
        CData/*2:0*/ __Vfunc_store__47__size;
        CData/*2:0*/ __Vfunc_float_store__49__size;
        CData/*4:0*/ __Vfunc_float_store__49__src;
        CData/*2:0*/ __Vfunc_store__50__size;
        CData/*4:0*/ __Vfunc_store__50__src;
        CData/*2:0*/ __Vfunc_store__53__size;
        // Begin mtask footprint all: 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[2];
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[2];
        CData/*0:0*/ __Vm_traceActivity[167];
        WData/*113:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4];
        WData/*272:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9];
        WData/*272:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9];
        WData/*272:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9];
        WData/*272:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9];
        QData/*62:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree;
        IData/*17:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q;
        IData/*31:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes;
        IData/*31:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__status_o;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__status_o;
        CData/*0:0*/ __VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq;
        CData/*0:0*/ __VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq;
        CData/*0:0*/ __Vclklast__TOP__clock;
        CData/*0:0*/ __Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk;
        CData/*0:0*/ __Vclklast__TOP__reset_ni;
        CData/*0:0*/ __Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
        CData/*0:0*/ __Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n;
        CData/*0:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req;
        CData/*5:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
    };
    struct {
        CData/*2:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        IData/*20:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*6:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*6:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*7:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*7:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*4:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__regular_status;
        WData/*159:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[5];
        IData/*20:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*6:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*6:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*7:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*7:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        IData/*20:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*6:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*6:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*7:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*7:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        IData/*20:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*6:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*6:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*7:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*7:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*0:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
        CData/*2:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*2:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*0:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq;
        WData/*377:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[12];
        WData/*188:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6];
        CData/*1:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*1:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*1:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__dfifo_rspready;
        // Begin mtask footprint all: 49 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o[3][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__DEBUG_ROM__tl_h_i[2][3];
        // Begin mtask footprint all: 13 49 52 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[3];
        // Begin mtask footprint all: 23 52 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o;
        // Begin mtask footprint all: 42 
        SData/*8:0*/ __Vtableidx12;
        // Begin mtask footprint all: 7 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fdata_fbyte__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_txdata__qe;
        // Begin mtask footprint all: 7 10 42 
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_txdata__q;
        // Begin mtask footprint all: 7 10 42 43 
        IData/*30:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_timing0_thigh__q;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_timing0_tlow__q;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_timing1_t_r__q;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_timing1_t_f__q;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_timing2_tsu_sta__q;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_timing2_thd_sta__q;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_timing3_tsu_dat__q;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_timing3_thd_dat__q;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_timing4_tsu_sto__q;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_timing4_t_buf__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q;
    };
    struct {
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_fmtilvl__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_ovrd_sclval__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_ovrd_sdaval__q;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_target_id_address0__q;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_target_id_mask0__q;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_target_id_address1__q;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_target_id_mask1__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_enableaddr__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_enabletx__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_enableacq__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_stretch_ctrl_stop__q;
        // Begin mtask footprint all: 7 13 42 
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fdata_fbyte__q;
        // Begin mtask footprint all: 7 13 42 43 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_host_timeout_ctrl__q;
        // Begin mtask footprint all: 7 13 
        IData/*31:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__ia;
        // Begin mtask footprint all: 7 13 44 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q;
        // Begin mtask footprint all: 7 44 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_wdata__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__qe;
        // Begin mtask footprint all: 7 10 44 
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_wdata__q;
        // Begin mtask footprint all: 7 11 44 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q;
        // Begin mtask footprint all: 7 12 44 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q;
        // Begin mtask footprint all: 7 43 44 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q;
        // Begin mtask footprint all: 44 
        SData/*8:0*/ __Vtableidx11;
        // Begin mtask footprint all: 41 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[32];
        // Begin mtask footprint all: 47 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i[3][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[3][3];
    };
    struct {
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3];
        // Begin mtask footprint all: 37 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__PLIC__tl_h_o[2];
        // Begin mtask footprint all: 38 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[13][3];
        // Begin mtask footprint all: 33 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_1__tl_h_o[2];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_1__tl_h_i[2][3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_2__tl_h_o[2];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_2__tl_h_i[2][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__PLIC__tl_h_i[2][3];
        // Begin mtask footprint all: 35 
        CData/*1:0*/ __Vfunc_get_opgroup__0__Vfuncout;
        CData/*3:0*/ __Vfunc_get_opgroup__0__op;
        // Begin mtask footprint all: 31 
        IData/*31:0*/ __Vfunc_bias__9__Vfuncout;
        IData/*31:0*/ __Vfunc_bias__10__Vfuncout;
        IData/*31:0*/ __Vfunc_bias__11__Vfuncout;
        IData/*31:0*/ __Vfunc_bias__12__Vfuncout;
        IData/*31:0*/ __Vfunc_exp_bits__13__Vfuncout;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vlvbound3;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT____Vlvbound1;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound1;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound2;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound3;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound4;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vlvbound1;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vlvbound2;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT____Vcellout__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__i_lzc__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vlvbound1;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vlvbound2;
        CData/*2:0*/ __Vfunc_bias__9__fmt;
        CData/*2:0*/ __Vfunc_bias__10__fmt;
        CData/*2:0*/ __Vfunc_bias__11__fmt;
        CData/*2:0*/ __Vfunc_bias__12__fmt;
        CData/*2:0*/ __Vfunc_exp_bits__13__fmt;
        // Begin mtask footprint all: 32 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__DCCM__tl_h_o[2];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__DCCM__tl_h_i[2][3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_0__tl_h_o[2];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_0__tl_h_i[2][3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_4__tl_h_o[2];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_4__tl_h_i[2][3];
        // Begin mtask footprint all: 30 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o[11][3];
        // Begin mtask footprint all: 17 30 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o;
        CData/*0:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 17 29 40 
        WData/*87:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[3];
        // Begin mtask footprint all: 40 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i[11];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__XBAR_PERI__tl_h_o[2];
        // Begin mtask footprint all: 28 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o[10][3];
        // Begin mtask footprint all: 17 28 45 
        WData/*87:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[3];
        // Begin mtask footprint all: 17 45 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o;
        CData/*0:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 45 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i[10];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_3__tl_h_i[2][3];
        // Begin mtask footprint all: 26 
        CData/*5:0*/ __Vtableidx2;
        CData/*4:0*/ __Vtableidx6;
        // Begin mtask footprint all: 27 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[2];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[2];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1;
        CData/*1:0*/ __Vfunc_get_opgroup__2__Vfuncout;
        CData/*3:0*/ __Vfunc_get_opgroup__2__op;
        CData/*1:0*/ __Vfunc_get_opgroup__3__Vfuncout;
        CData/*3:0*/ __Vfunc_get_opgroup__3__op;
        CData/*1:0*/ __Vfunc_get_opgroup__4__Vfuncout;
        CData/*3:0*/ __Vfunc_get_opgroup__4__op;
        // Begin mtask footprint all: 24 
        CData/*1:0*/ __Vfunc_get_opgroup__1__Vfuncout;
        CData/*3:0*/ __Vfunc_get_opgroup__1__op;
    };
    struct {
        CData/*5:0*/ __Vtableidx3;
        CData/*7:0*/ __Vtableidx4;
        CData/*5:0*/ __Vtableidx5;
        // Begin mtask footprint all: 25 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1;
        // Begin mtask footprint all: 21 
        QData/*33:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__dap__tdo_oe_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__dap__td_o;
        CData/*4:0*/ __Vtableidx7;
        CData/*4:0*/ __Vtableidx8;
        CData/*1:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr;
        // Begin mtask footprint all: 22 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1;
        // Begin mtask footprint all: 19 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__DEBUG_ROM__tl_h_o[2];
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o;
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o;
        IData/*31:0*/ __Vfunc_fp_width__5__Vfuncout;
        IData/*31:0*/ __Vfunc_fp_width__6__Vfuncout;
        IData/*31:0*/ __Vfunc_fp_width__7__Vfuncout;
        IData/*31:0*/ __Vfunc_fp_width__8__Vfuncout;
        IData/*31:0*/ __Vfunc_fp_width__14__Vfuncout;
        IData/*31:0*/ __Vfunc_fp_width__15__Vfuncout;
        IData/*31:0*/ __Vfunc_fp_width__16__Vfuncout;
        IData/*31:0*/ __Vfunc_fp_width__17__Vfuncout;
        SData/*11:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v0;
        SData/*11:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v1;
        SData/*11:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v2;
        SData/*11:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v3;
        CData/*2:0*/ __Vfunc_fp_width__5__fmt;
        CData/*2:0*/ __Vfunc_fp_width__6__fmt;
        CData/*2:0*/ __Vfunc_fp_width__7__fmt;
        CData/*2:0*/ __Vfunc_fp_width__8__fmt;
        CData/*2:0*/ __Vfunc_fp_width__14__fmt;
        CData/*2:0*/ __Vfunc_fp_width__15__fmt;
        CData/*2:0*/ __Vfunc_fp_width__16__fmt;
        CData/*2:0*/ __Vfunc_fp_width__17__fmt;
        CData/*5:0*/ __Vtableidx1;
        CData/*4:0*/ __Vdlyvlsb__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v0;
        CData/*7:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v0;
        CData/*4:0*/ __Vdlyvlsb__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v1;
        CData/*7:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v1;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v1;
        CData/*4:0*/ __Vdlyvlsb__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v2;
        CData/*7:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v2;
        CData/*4:0*/ __Vdlyvlsb__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v3;
        CData/*7:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v3;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v3;
        // Begin mtask footprint all: 19 34 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT____Vcellinp__dccm__WE;
        // Begin mtask footprint all: 51 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i[3][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[3][3];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o;
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3];
        // Begin mtask footprint all: 12 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o[3];
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT____Vlvbound1;
    };
    struct {
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1;
        CData/*2:0*/ __Vtableidx9;
        CData/*2:0*/ __Vtableidx10;
        CData/*1:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        // Begin mtask footprint all: 12 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fdata_start__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fdata_start__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fdata_stop__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fdata_stop__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fdata_read__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fdata_read__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fdata_rcont__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fdata_rcont__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fdata_nakok__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fdata_nakok__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_fmtrst__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_fmtrst__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_fmtilvl__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_acqrst__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_acqrst__qe;
        // Begin mtask footprint all: 6 12 42 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_enable_stretch_timeout__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_enable_sda_unstable__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_nonempty__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_overflow__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_ovrd_txovrden__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q;
        // Begin mtask footprint all: 6 10 42 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_enable_fmt_watermark__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_enable_acq_overflow__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_enable_ack_stop__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_enable_host_timeout__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_ctrl_enablehost__q;
        // Begin mtask footprint all: 6 11 42 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_enable_fmt_overflow__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_enable_nak__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_enable_scl_interference__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_enable_sda_interference__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_enable_trans_complete__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q;
        // Begin mtask footprint all: 6 13 42 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_ctrl_enabletarget__q;
        // Begin mtask footprint all: 6 13 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q;
        // Begin mtask footprint all: 6 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__qe;
        // Begin mtask footprint all: 6 
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT____Vlvbound1;
        CData/*7:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__read_byte;
        // Begin mtask footprint all: 6 12 
        CData/*5:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*5:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*5:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        // Begin mtask footprint all: 12 19 
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o;
        CData/*1:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        // Begin mtask footprint all: 16 19 
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o;
        // Begin mtask footprint all: 16 
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o;
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT____Vlvbound1;
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o;
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT____Vlvbound1;
        SData/*15:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o;
    };
    struct {
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT____Vlvbound1;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index;
        // Begin mtask footprint all: 11 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[13];
        // Begin mtask footprint all: 18 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound2;
        // Begin mtask footprint all: 10 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_3__tl_h_o[2];
        IData/*16:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding;
        CData/*0:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 10 36 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o;
        WData/*87:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[3];
        // Begin mtask footprint all: 36 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__XBAR_PERI__tl_h_i[2][3];
        // Begin mtask footprint all: 9 
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT____Vlvbound1;
        CData/*5:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*5:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*5:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__under_rst;
        CData/*5:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*5:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*5:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*5:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*7:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__input_byte;
        // Begin mtask footprint all: 3 9 
        IData/*16:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__nco_sum_q;
        CData/*5:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        // Begin mtask footprint all: 9 42 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_state_fmt_watermark__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_state_fmt_overflow__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_state_nak__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_state_scl_interference__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_state_sda_interference__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_state_stretch_timeout__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_state_sda_unstable__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_state_trans_complete__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_nonempty__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_overflow__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_state_acq_overflow__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_state_ack_stop__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT____Vcellout__u_intr_state_host_timeout__q;
        // Begin mtask footprint all: 8 13 34 37 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q;
        // Begin mtask footprint all: 8 13 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q;
        // Begin mtask footprint all: 8 13 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q;
        // Begin mtask footprint all: 8 34 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q;
        // Begin mtask footprint all: 8 9 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q;
        // Begin mtask footprint all: 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1;
        // Begin mtask footprint all: 6 7 
        CData/*5:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        // Begin mtask footprint all: 3 7 
        IData/*31:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_q;
        IData/*31:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_en_q;
        // Begin mtask footprint all: 3 7 39 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_timer_v_lower0__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_timer_v_upper0__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_compare_lower0_0__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_compare_upper0_0__q;
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_cfg0_prescale__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_ctrl__q;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_cfg0_step__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_intr_enable0__q;
        // Begin mtask footprint all: 3 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_compare_lower0_0__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_compare_upper0_0__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_intr_state0__q;
        // Begin mtask footprint all: 39 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT____Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtimecmp[1];
        // Begin mtask footprint all: 5 
        QData/*40:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0;
        CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__60__Vfuncout;
        CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__60__grayval;
        CData/*1:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__60__dec_tmp;
        CData/*1:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__60__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__66__Vfuncout;
        CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__66__grayval;
        CData/*1:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__66__dec_tmp;
        CData/*1:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__66__dec_tmp_sub;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr;
        CData/*1:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0;
        // Begin mtask footprint all: 5 21 
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i;
        // Begin mtask footprint all: 4 5 21 25 45 51 52 
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o;
    };
    // Begin mtask footprint all: 42 
    static CData/*0:0*/ __Vtable12_Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_watermark_d[512];
    // Begin mtask footprint all: 44 
    static CData/*0:0*/ __Vtable11_Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d[512];
    // Begin mtask footprint all: 24 
    static CData/*0:0*/ __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[64];
    static CData/*0:0*/ __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[256];
    static CData/*0:0*/ __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[64];
    // Begin mtask footprint all: 26 
    static CData/*0:0*/ __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[64];
    static CData/*3:0*/ __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[32];
    // Begin mtask footprint all: 19 
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[64];
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[64];
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[64];
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[64];
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[64];
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[64];
    // Begin mtask footprint all: 21 
    static CData/*0:0*/ __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[32];
    static CData/*0:0*/ __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[32];
    static CData/*0:0*/ __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[32];
    static CData/*0:0*/ __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[32];
    static CData/*0:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[32];
    static CData/*0:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[32];
    static CData/*0:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[32];
    static CData/*0:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[32];
    static CData/*0:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[32];
    static CData/*0:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[32];
    static CData/*0:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[32];
    static CData/*3:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[32];
    // Begin mtask footprint all: 12 
    static CData/*1:0*/ __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[8];
    static IData/*31:0*/ __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[8];
    static CData/*1:0*/ __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[8];
    static IData/*31:0*/ __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[8];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAzadi_top_verilator__Syms* __VlSymsp;  // Symbol table
  private:
    VlMTaskVertex __Vm_mt_20;
    VlMTaskVertex __Vm_mt_9;
    VlMTaskVertex __Vm_mt_11;
    VlMTaskVertex __Vm_mt_13;
    VlMTaskVertex __Vm_mt_14;
    VlMTaskVertex __Vm_mt_16;
    VlMTaskVertex __Vm_mt_17;
    VlMTaskVertex __Vm_mt_21;
    VlMTaskVertex __Vm_mt_26;
    VlMTaskVertex __Vm_mt_28;
    VlMTaskVertex __Vm_mt_29;
    VlMTaskVertex __Vm_mt_30;
    VlMTaskVertex __Vm_mt_32;
    VlMTaskVertex __Vm_mt_33;
    VlMTaskVertex __Vm_mt_36;
    VlMTaskVertex __Vm_mt_7;
    VlMTaskVertex __Vm_mt_8;
    VlMTaskVertex __Vm_mt_24;
    VlMTaskVertex __Vm_mt_38;
    VlMTaskVertex __Vm_mt_3;
    VlMTaskVertex __Vm_mt_6;
    VlMTaskVertex __Vm_mt_19;
    VlMTaskVertex __Vm_mt_22;
    VlMTaskVertex __Vm_mt_25;
    VlMTaskVertex __Vm_mt_27;
    VlMTaskVertex __Vm_mt_31;
    VlMTaskVertex __Vm_mt_37;
    VlMTaskVertex __Vm_mt_39;
    VlMTaskVertex __Vm_mt_40;
    VlMTaskVertex __Vm_mt_41;
    VlMTaskVertex __Vm_mt_42;
    VlMTaskVertex __Vm_mt_44;
    VlMTaskVertex __Vm_mt_46;
    VlMTaskVertex __Vm_mt_4;
    VlMTaskVertex __Vm_mt_34;
    VlMTaskVertex __Vm_mt_35;
    VlMTaskVertex __Vm_mt_43;
    VlMTaskVertex __Vm_mt_45;
    VlMTaskVertex __Vm_mt_48;
    VlMTaskVertex __Vm_mt_51;
    VlMTaskVertex __Vm_mt_52;
    VlMTaskVertex __Vm_mt_final;
    VlThreadPool* __Vm_threadPoolp;
    bool __Vm_even_cycle;
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAzadi_top_verilator);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAzadi_top_verilator(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAzadi_top_verilator();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void __Vconfigure(VAzadi_top_verilator__Syms* symsp, bool first);
    void __Vdpiimwrap_Azadi_top_verilator__DOT__u_jtagdpi__DOT__jtagdpi_close_TOP(QData/*63:0*/ ctx);
    void __Vdpiimwrap_Azadi_top_verilator__DOT__u_jtagdpi__DOT__jtagdpi_create_TOP(std::string name, IData/*31:0*/ listen_port, QData/*63:0*/ (&jtagdpi_create__Vfuncrtn));
    void __Vdpiimwrap_Azadi_top_verilator__DOT__u_jtagdpi__DOT__jtagdpi_tick_TOP(QData/*63:0*/ ctx, CData/*0:0*/ (&tck), CData/*0:0*/ (&tms), CData/*0:0*/ (&tdi), CData/*0:0*/ (&trst_n), CData/*0:0*/ (&srst_n), CData/*0:0*/ tdo);
  private:
    static QData _change_request(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAzadi_top_verilator__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__124(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__128(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__131(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__133(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__158(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__166(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__169(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__171(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__214(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__222(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__255(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__256(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__257(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__259(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__260(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__261(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__268(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__276(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__288(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__290(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__310(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__315(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__319(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__323(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__327(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__330(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__332(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__334(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__336(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__337(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__339(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__341(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__343(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__346(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__348(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__350(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__352(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__354(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__356(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__358(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__360(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__362(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__365(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__367(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__369(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__371(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__372(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__373(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__374(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__375(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__376(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__377(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__379(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__382(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__391(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__392(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__394(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__395(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__397(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__398(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__399(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__400(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__65(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__66(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__67(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__69(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__71(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__73(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__95(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__98(VAzadi_top_verilator__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAzadi_top_verilator__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _final_TOP(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__139(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__232(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__240(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__243(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__245(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__247(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__250(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__252(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__254(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__282(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__285(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__287(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__335(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__345(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__351(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__353(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__355(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__357(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__359(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__361(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__363(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__364(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__366(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__368(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__370(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__381(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__100(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__101(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__104(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__105(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__108(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__109(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__111(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__112(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__113(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__116(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__117(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__118(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__119(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__121(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__123(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__125(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__126(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__127(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__130(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__132(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__136(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__137(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__138(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__140(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__141(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__143(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__144(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__145(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__147(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__148(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__149(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__150(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__151(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__152(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__153(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__154(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__157(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__159(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__160(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__161(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__165(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__167(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__168(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__170(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__172(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__173(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__174(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__176(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__178(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__179(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__180(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__181(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__182(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__184(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__186(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__187(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__188(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__189(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__191(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__192(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__193(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__194(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__195(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__196(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__197(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__199(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__200(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__201(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__203(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__206(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__207(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__210(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__211(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__213(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__216(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__218(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__219(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__220(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__223(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__225(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__226(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__227(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__229(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__230(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__231(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__233(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__234(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__237(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__238(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__239(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__241(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__242(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__244(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__246(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__248(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__251(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__253(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__258(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__262(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__264(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__265(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__266(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__267(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__269(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__272(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__273(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__275(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__277(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__279(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__280(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__281(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__284(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__286(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__289(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__292(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__293(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__294(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__295(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__297(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__298(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__300(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__301(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__302(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__303(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__305(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__306(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__307(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__308(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__309(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__311(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__314(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__316(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__317(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__318(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__320(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__324(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__325(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__326(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__329(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__331(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__333(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__338(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__340(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__342(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__344(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__347(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__349(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__378(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__380(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__386(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__387(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__388(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__393(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__396(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__70(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__72(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__76(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__77(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__80(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__81(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__82(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__84(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__85(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__86(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__88(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__90(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__91(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__92(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__94(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__96(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__97(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _settle__TOP__10(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__11(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__12(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__13(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__14(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__15(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__16(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__17(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__18(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__19(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__2(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__20(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__21(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__22(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__23(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__24(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__25(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__26(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__27(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__28(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__29(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__3(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__30(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__31(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__32(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__33(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__34(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__35(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__36(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__37(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__38(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__39(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__4(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__40(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__41(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__42(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__43(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__44(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__45(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__46(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__47(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__48(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__49(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__5(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _settle__TOP__50(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__51(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__52(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__53(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__54(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__55(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__56(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__57(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__58(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__59(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__6(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__60(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__61(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__62(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__63(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__64(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__7(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__8(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__9(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgSub1(void* userp, VerilatedVcd* tracep);
    static void traceChgSub2(void* userp, VerilatedVcd* tracep);
    static void traceChgSub3(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub1(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub2(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub3(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub1(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub2(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub3(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub4(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub5(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void __Vmtask__1(bool even_cycle, void* symtab);
    static void __Vmtask__2(bool even_cycle, void* symtab);
    static void __Vmtask__15(bool even_cycle, void* symtab);
    static void __Vmtask__18(bool even_cycle, void* symtab);
    static void __Vmtask__final(bool even_cycle, void* symtab);
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
