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
class VAzadi_top_verilator_VerilatedFst;
class VAzadi_top_verilator_gpio_reg_pkg;
class VAzadi_top_verilator_rv_plic_reg_pkg;
class VAzadi_top_verilator_uart_reg_pkg;
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
    // Begin mtask footprint all: 1 2 3 4 5 6 7 8 9 10 13 15 19 20 29 
    VL_IN8(clock_i,0,0);
    // Begin mtask footprint all: 1 7 8 15 20 
    VL_IN8(reset_ni,0,0);
    // Begin mtask footprint all: 7 
    VL_IN8(sd_i,0,0);
    // Begin mtask footprint all: 
    VL_OUT8(ss_o,7,0);
    // Begin mtask footprint all: 35 
    VL_OUT8(uart_tx,0,0);
    // Begin mtask footprint all: 2 3 4 35 
    VL_IN(gpio_i,19,0);
    // Begin mtask footprint all: 2 35 
    VL_IN8(uart_rx,0,0);
    // Begin mtask footprint all: 2 
    VL_OUT(gpio_o,19,0);
    VL_OUT8(pwm_o,0,0);
    VL_OUT8(pwm_o_2,0,0);
    // Begin mtask footprint all: 2 7 
    VL_OUT8(sd_o,0,0);
    // Begin mtask footprint all: 2 5 7 
    VL_OUT8(sclk_o,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 4 25 28 29 30 31 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i[10][3];
        // Begin mtask footprint all: 4 24 28 29 30 31 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i[11][3];
        // Begin mtask footprint all: 4 31 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        // Begin mtask footprint all: 4 31 33 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_re;
        // Begin mtask footprint all: 4 11 31 33 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__wr_err;
        // Begin mtask footprint all: 4 11 20 31 33 
        QData/*37:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit;
        // Begin mtask footprint all: 10 20 32 33 34 
        WData/*171:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[6];
        // Begin mtask footprint all: 32 33 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_11[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i;
        // Begin mtask footprint all: 8 32 33 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o[11];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o[10];
        // Begin mtask footprint all: 24 32 33 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[3];
        // Begin mtask footprint all: 24 33 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i[12];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__hold_all_requests;
        // Begin mtask footprint all: 1 24 33 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__dev_select_outstanding;
        // Begin mtask footprint all: 1 24 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o[12][3];
        IData/*16:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_opcode;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_source;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_size;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 1 23 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[3];
        IData/*16:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding;
        // Begin mtask footprint all: 1 23 32 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[3];
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__dev_select_outstanding;
        // Begin mtask footprint all: 1 23 25 32 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o[11][3];
        // Begin mtask footprint all: 23 32 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__hold_all_requests;
        // Begin mtask footprint all: 1 23 36 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk2__DOT__source_q;
        // Begin mtask footprint all: 1 36 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk2__DOT__source_d;
        // Begin mtask footprint all: 1 32 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_rsp;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_rsp;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_opcode;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_source;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_size;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 32 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8[2][3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i[11];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbaddress_sba_csrs;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__le;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__hfifo_reqready;
        // Begin mtask footprint all: 11 
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__step[1];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__mtime_d[1];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__mtime[1];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__mtimecmp[1][1];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__mtimecmp_update[1][1];
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev__DOT__minus_one_0__DOT__G_5;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__minus_one_0__DOT__G_1;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__minus_one_0__DOT__G_2;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__minus_one_0__DOT__G_3;
    };
    struct {
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__minus_one_0__DOT__G_4;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__minus_one_0__DOT__G_5;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev_2__DOT__minus_one_0__DOT__G_3;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev_2__DOT__minus_one_0__DOT__G_4;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev_2__DOT__minus_one_0__DOT__G_5;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__minus_one_0__DOT__G_1;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__minus_one_0__DOT__G_2;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__minus_one_0__DOT__G_3;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__minus_one_0__DOT__G_4;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__minus_one_0__DOT__G_5;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__tick;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__gen_harts__BRA__0__KET____DOT__u_intr_hw__DOT__new_event;
        // Begin mtask footprint all: 31 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10[2][3];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 9 
        WData/*991:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[31];
        // Begin mtask footprint all: 9 36 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        IData/*30:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec;
        // Begin mtask footprint all: 9 23 
        WData/*1023:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[32];
        // Begin mtask footprint all: 9 19 23 
        WData/*1023:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[32];
        // Begin mtask footprint all: 19 23 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_rdata_b;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc;
        // Begin mtask footprint all: 14 19 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1;
        // Begin mtask footprint all: 7 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__iccm_cntrl_data;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev__DOT__ct;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__ct_1;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev_2__DOT__ct;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__ct_1;
        SData/*13:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q;
        SData/*13:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_d;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__uart_rx_i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__eclk_2;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__oclk_2;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__eclk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__oclk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev__DOT__clk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__a;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__b;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__go;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__clk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev_2__DOT__clk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__a;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__b;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__go;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__clk;
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
    };
    struct {
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data_R;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__c;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__c;
        // Begin mtask footprint all: 7 32 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__set;
        // Begin mtask footprint all: 15 32 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbaddress_write_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbdata_read_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbdata_write_valid;
        // Begin mtask footprint all: 1 15 32 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q;
        // Begin mtask footprint all: 1 15 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d;
        WData/*255:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[8];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_d;
        // Begin mtask footprint all: 1 13 15 20 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q;
        // Begin mtask footprint all: 13 20 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__threshold[1];
        // Begin mtask footprint all: 5 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[13];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_gpio;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rdata;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_uart0_tx_watermark;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_uart0_rx_watermark;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_uart0_tx_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_uart0_rx_overflow;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_uart0_rx_frame_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_uart0_rx_break_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_uart0_rx_timeout;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_uart0_rx_parity_err;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rspop;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        // Begin mtask footprint all: 5 32 
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_vector;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__src_q;
        // Begin mtask footprint all: 5 33 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[14];
        // Begin mtask footprint all: 5 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_d;
        // Begin mtask footprint all: 5 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_q;
        // Begin mtask footprint all: 7 38 39 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__dev_select_outstanding;
        // Begin mtask footprint all: 38 39 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i[3][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[3];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__instr_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__stall;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_all;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__hold_all_requests;
        // Begin mtask footprint all: 3 38 39 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o[4][3];
        // Begin mtask footprint all: 3 38 
        IData/*16:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding;
        // Begin mtask footprint all: 3 20 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__claim_id[1];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q;
    };
    struct {
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
        // Begin mtask footprint all: 2 20 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wdata_int;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_we;
        // Begin mtask footprint all: 2 
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__extDC_2;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev__DOT__minus_one_0__DOT__G_1;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev__DOT__minus_one_0__DOT__G_2;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev__DOT__minus_one_0__DOT__G_3;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev_2__DOT__minus_one_0__DOT__G_1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_ctrl__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_cfg0_prescale__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_cfg0_step__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_timer_v_lower0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_timer_v_upper0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_intr_enable0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_state__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_enable__DOT__qe;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q;
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
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio1__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio3__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio5__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio6__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio8__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio10__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio26__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_16__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_19__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_enable_rx_parity_err__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_nf__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_nco__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ovrd_txval__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__qe;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__sync_rx__DOT__intq;
        // Begin mtask footprint all: 2 35 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__q;
        SData/*10:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_q;
        SData/*10:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_d;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_depth;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_prev_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_prev_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d;
        // Begin mtask footprint all: 35 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__intr_hw__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__spi_tx_sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_parity_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event;
        // Begin mtask footprint all: 4 20 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__reg_rdata_next;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next;
        // Begin mtask footprint all: 4 11 20 28 
        SData/*8:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__addr_hit;
        // Begin mtask footprint all: 4 11 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__tl_reg_d2h;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__wr_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        // Begin mtask footprint all: 4 10 11 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we;
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
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio18_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio19_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio20_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio21_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__msip0_we;
        // Begin mtask footprint all: 10 11 19 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio22_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio23_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio24_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio25_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we;
        // Begin mtask footprint all: 2 11 19 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio1_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio2_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio3_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio4_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio5_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio6_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio8_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio9_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio10_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio11_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio13_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio26_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio29_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio30_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio31_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we;
        // Begin mtask footprint all: 2 11 
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev__DOT__minus_one_0__DOT__G_4;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev_2__DOT__minus_one_0__DOT__G_2;
        // Begin mtask footprint all: 2 10 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we;
        // Begin mtask footprint all: 10 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe;
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
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio21__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio25__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe;
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
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_enable_rx_watermark__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_enable_tx_empty__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_enable_rx_overflow__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_enable_rx_frame_err__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_enable_rx_timeout__DOT__qe;
        // Begin mtask footprint all: 3 4 11 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we;
        // Begin mtask footprint all: 3 11 
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__prescaler[1];
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__gen_harts__BRA__0__KET____DOT__u_core__DOT__tick_count;
        // Begin mtask footprint all: 3 11 13 
        WData/*154:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__reg2hw[5];
        // Begin mtask footprint all: 3 11 19 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio12_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio27_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio28_we;
        // Begin mtask footprint all: 3 7 20 
        WData/*69:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[3];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q;
        // Begin mtask footprint all: 7 20 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__claim;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__complete;
        // Begin mtask footprint all: 6 20 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_if;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_id;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d;
        // Begin mtask footprint all: 2 4 11 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio14_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio15_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio17_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we;
        // Begin mtask footprint all: 4 6 11 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio16_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we;
        // Begin mtask footprint all: 6 11 
        WData/*67:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__hw2reg[3];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__compare_lower0_0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__compare_upper0_0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__intr_state0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_intr_state0__DOT__wr_data;
        // Begin mtask footprint all: 2 6 11 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__ctrl_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__cfg0_prescale_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__cfg0_step_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__timer_v_lower0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__timer_v_upper0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__intr_enable0_we;
        // Begin mtask footprint all: 2 6 
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_val_q;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        WData/*255:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[8];
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        WData/*255:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[8];
        // Begin mtask footprint all: 2 6 35 
        IData/*16:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__nco_sum_q;
        SData/*10:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_out_q;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 2 6 7 35 
        WData/*64:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[3];
        // Begin mtask footprint all: 2 5 7 35 
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__period_2;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__DC_2;
        // Begin mtask footprint all: 5 7 35 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__tl_reg_d2h;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__write;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__re;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
    };
    struct {
        // Begin mtask footprint all: 4 5 7 35 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[13][3];
        // Begin mtask footprint all: 5 7 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rdata;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__ia;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_spi;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__error;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__reqsz;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__error;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__reqsz;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rspop;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__error;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__error;
        // Begin mtask footprint all: 2 5 7 
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__divider;
        SData/*13:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__pos_edge;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__neg_edge;
        // Begin mtask footprint all: 2 5 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_en_q;
        // Begin mtask footprint all: 2 5 35 
        WData/*245:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[8];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_state_we;
        // Begin mtask footprint all: 5 35 
        WData/*458:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[15];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__rdata;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_state__DOT__wr_data;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rd_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        // Begin mtask footprint all: 5 6 35 
        WData/*124:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[4];
        // Begin mtask footprint all: 6 10 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_watermark_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_watermark_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_empty_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_overflow_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_frame_err_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_break_err_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_timeout_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_parity_err_we;
        // Begin mtask footprint all: 6 35 
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_d;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q;
        SData/*10:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_tx_watermark__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_fifo_rxrst;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_fifo_txrst;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_in;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_break_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__break_st_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        // Begin mtask footprint all: 2 7 35 
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__period;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__DC;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__ctrl;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__ctrl_2;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_enable_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rxblvl_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nco_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wdata_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxrst_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txrst_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txilvl_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txval_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_val_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_en_we;
        // Begin mtask footprint all: 7 35 
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit;
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rd_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err;
        // Begin mtask footprint all: 7 10 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_watermark_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_watermark_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_empty_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_overflow_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_frame_err_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_break_err_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_timeout_we;
        // Begin mtask footprint all: 2 7 11 35 
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__divisor;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__divisor_2;
        // Begin mtask footprint all: 2 7 11 
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev__DOT__divisor;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__divisor;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev_2__DOT__divisor;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__divisor;
        // Begin mtask footprint all: 2 7 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__rdata;
        WData/*127:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[4];
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__ct;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__extDC;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__ct_2;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__ct_0;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__ct_0;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__pts;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__rst_ct;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__pts_2;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__rst_ct_2;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ss;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt_zero;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__rx_bit_pos;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk_2;
    };
    struct {
        // Begin mtask footprint all: 2 8 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem[4096];
        // Begin mtask footprint all: 2 8 20 
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__addr_i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__req_i;
        // Begin mtask footprint all: 8 20 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__we_i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__tlul_error;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 8 20 40 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask;
        // Begin mtask footprint all: 8 40 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_q;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o;
        IData/*29:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__req_i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__error_internal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrequest;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__tlul_error;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 8 
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[4];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i[3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__iccm__DOT__iccm__DOT__mem[4096];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rom_rdata;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux;
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage;
        WData/*131:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[5];
        WData/*65:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3];
        QData/*63:0*/ Azadi_top_verilator__DOT__u_jtagdpi__DOT__ctx;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped2;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat3;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword;
    };
    struct {
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rdata_o;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rdata_tlword;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1;
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage;
        IData/*25:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*0:0*/ Azadi_top_verilator__DOT__cio_jtag_tck;
        CData/*0:0*/ Azadi_top_verilator__DOT__cio_jtag_tdi;
        CData/*0:0*/ Azadi_top_verilator__DOT__cio_jtag_tms;
        CData/*0:0*/ Azadi_top_verilator__DOT__cio_jtag_trst_n;
        CData/*0:0*/ Azadi_top_verilator__DOT__cio_jtag_srst_n;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__instr_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__rvalid;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__fwd_rom_q;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hgrant;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hgrant;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hfifo_rspvalid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
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
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty;
        // Begin mtask footprint all: 8 35 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q;
        // Begin mtask footprint all: 8 39 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_i[4];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrequest;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
        // Begin mtask footprint all: 1 8 15 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q;
        // Begin mtask footprint all: 1 8 15 40 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q;
        WData/*255:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[8];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q;
        // Begin mtask footprint all: 1 15 40 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q;
        // Begin mtask footprint all: 15 40 
        WData/*511:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[16];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__clear_resumeack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resume;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__go;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command;
        // Begin mtask footprint all: 8 15 32 40 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty;
        // Begin mtask footprint all: 8 15 40 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmdbusy;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q;
        // Begin mtask footprint all: 8 13 15 40 
        IData/*19:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel;
        // Begin mtask footprint all: 8 15 
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__resp_queue_data;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum0;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum1;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum2;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum3;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__jtag_rsp;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_wptr__DOT__intq;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk;
        // Begin mtask footprint all: 15 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[4];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dmi_rsp;
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_d;
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__data_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__data_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__testmode_i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sberror_valid;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sberror;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__autoexecdata_idx;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req_valid;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__state_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__state_q;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__address_d;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__address_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_dmi_busy;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_d;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d;
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
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_sync;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_rptr__DOT__intq;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n;
        // Begin mtask footprint all: 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[2];
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[2];
    };
    struct {
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2];
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[2];
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_58;
        QData/*58:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_59;
        QData/*59:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_60;
        QData/*61:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_20;
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q3;
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fou_iteration_cell_div_a_D;
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fou_iteration_cell_div_b_D;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c0_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__gpio_intr;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_vec_class_result;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_slice_result;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_slice_result;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__iccm__DOT__wdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_we;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operation;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_a_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_c_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__target_aux_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_carry_DO;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sel_b_for_fou_S;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__target_aux_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__scanmode_i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__scanmode_i;
        // Begin mtask footprint all: 37 
        WData/*113:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4];
        WData/*272:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9];
        QData/*50:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_sticky_bits;
        WData/*272:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__data_wb;
        WData/*76:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_shifted[3];
        IData/*24:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_mantissa;
        IData/*30:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs;
        IData/*30:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs;
    };
    struct {
        WData/*159:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[5];
        WData/*127:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[4];
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__normalized_exponent;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status;
        // Begin mtask footprint all: 6 37 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_en;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_d;
        // Begin mtask footprint all: 6 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_intr_state0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe;
        // Begin mtask footprint all: 6 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_d;
        // Begin mtask footprint all: 39 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o[3][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p;
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_valid;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__hfifo_reqready;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dfifo_rspready;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req;
        // Begin mtask footprint all: 34 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ie[1];
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
    };
    struct {
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
        // Begin mtask footprint all: 13 34 
        WData/*188:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6];
        // Begin mtask footprint all: 7 13 34 
        QData/*62:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree;
        // Begin mtask footprint all: 7 34 
        WData/*377:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[12];
        // Begin mtask footprint all: 3 7 34 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ip;
        // Begin mtask footprint all: 3 7 
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q;
        // Begin mtask footprint all: 3 7 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_rising_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_falling_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__ctrl_en_input_filter_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txen_we;
        // Begin mtask footprint all: 3 7 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__accept_t_req;
        // Begin mtask footprint all: 3 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__accept_t_rsp;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_req_pending;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 3 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__irq_id_o[1];
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__cc_id[1];
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_opcode;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_source;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_size;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q;
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
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_30__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_2__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_18__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_tx__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ctrl_rx__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_ovrd_txen__DOT__qe;
        // Begin mtask footprint all: 3 4 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__q;
        // Begin mtask footprint all: 3 4 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_tx_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rx_we;
    };
    struct {
        // Begin mtask footprint all: 4 35 
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
        // Begin mtask footprint all: 2 4 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_parity_err_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nf_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_slpbk_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_llpbk_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_parity_en_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_parity_odd_we;
        // Begin mtask footprint all: 2 4 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d;
        // Begin mtask footprint all: 4 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__error;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        // Begin mtask footprint all: 4 32 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_rsp;
        // Begin mtask footprint all: 4 30 
        IData/*16:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding;
        // Begin mtask footprint all: 4 30 33 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding;
        // Begin mtask footprint all: 30 33 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__hold_all_requests;
    };
    struct {
        // Begin mtask footprint all: 30 32 33 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o[3];
        // Begin mtask footprint all: 1 30 33 35 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o[14][3];
        // Begin mtask footprint all: 1 33 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_req_pending;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 1 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_opcode;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_source;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_size;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe;
        // Begin mtask footprint all: 1 40 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d;
        // Begin mtask footprint all: 40 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits;
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__unnamedblk1__DOT__i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror_valid;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__data_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__going;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__exception;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_aligned;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 30 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11[2][3];
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__dev_sel_s1n_14;
        // Begin mtask footprint all: 30 38 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_4[2][3];
        // Begin mtask footprint all: 33 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err;
        // Begin mtask footprint all: 14 33 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec;
        // Begin mtask footprint all: 14 17 33 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec;
        // Begin mtask footprint all: 14 17 33 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing;
        // Begin mtask footprint all: 17 33 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access;
        // Begin mtask footprint all: 17 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_wb;
        // Begin mtask footprint all: 12 17 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_in_ready;
        // Begin mtask footprint all: 12 17 36 37 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int;
        // Begin mtask footprint all: 12 17 25 29 36 37 38 39 
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_addr;
        // Begin mtask footprint all: 6 12 17 20 29 36 37 39 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        // Begin mtask footprint all: 6 20 29 36 37 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_cause;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__debug_csr_save;
        // Begin mtask footprint all: 6 20 29 36 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_restore_mret_id;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_restore_dret_id;
        // Begin mtask footprint all: 6 12 20 36 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
        // Begin mtask footprint all: 6 12 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d;
        // Begin mtask footprint all: 6 13 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ctrl_busy;
        // Begin mtask footprint all: 6 17 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
        // Begin mtask footprint all: 6 17 29 39 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
        // Begin mtask footprint all: 17 27 29 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        // Begin mtask footprint all: 17 29 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid;
        // Begin mtask footprint all: 17 21 29 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        // Begin mtask footprint all: 17 29 37 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        // Begin mtask footprint all: 29 37 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int;
        // Begin mtask footprint all: 6 29 37 
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_csr__DOT__rdata_q;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_csr__DOT__rdata_q;
        // Begin mtask footprint all: 6 29 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[32];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
        // Begin mtask footprint all: 6 36 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__debug_cause;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en;
    };
    struct {
        // Begin mtask footprint all: 36 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_rdata_ext;
        // Begin mtask footprint all: 25 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__fp_rf_wdata_wb_q;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_c_id;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_tag_q;
        // Begin mtask footprint all: 25 36 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q;
        // Begin mtask footprint all: 25 36 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_misaligned_access;
        // Begin mtask footprint all: 36 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_wen;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux_we;
        // Begin mtask footprint all: 38 40 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o[3][3];
        // Begin mtask footprint all: 38 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[3];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set_spec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_we_lsu;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_op_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_req_done;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_spec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_mem;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_branch;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_jump;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_id;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multicycle_done;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_alu;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__csr_pipe_flush;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wreq;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_ready;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_busy;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_busy;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_1;
        // Begin mtask footprint all: 23 
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_3;
        // Begin mtask footprint all: 23 24 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[3];
        // Begin mtask footprint all: 24 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_2;
        // Begin mtask footprint all: 22 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes;
        QData/*52:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes;
        QData/*52:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp;
        WData/*317:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[10];
        WData/*317:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[10];
        // Begin mtask footprint all: 17 22 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D;
        QData/*52:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_D;
        QData/*52:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_D;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_a_D;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_prenorm_zero_S;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_prenorm_zero_S;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_prenorm_Inf_NaN_S;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_prenorm_Inf_NaN_S;
        WData/*383:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[12];
        WData/*383:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[12];
        // Begin mtask footprint all: 17 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we;
    };
    struct {
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__out_ready_fpu2c;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_instr_ret_wb;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_jump;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_branch;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_tbranch;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_load;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_store;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_in_ready;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_in_ready;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_ready;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_in_ready;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_in_ready;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_ready;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_in_ready;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        // Begin mtask footprint all: 17 33 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill;
        // Begin mtask footprint all: 28 33 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7[2];
        // Begin mtask footprint all: 28 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2[2][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5[2][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6[2][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7[2][3];
        // Begin mtask footprint all: 28 38 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1[3][3];
        // Begin mtask footprint all: 28 39 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3[3][3];
        // Begin mtask footprint all: 21 
        WData/*194:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_outputs[7];
        WData/*272:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_vec_class_result;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_result;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__result_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__value;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__value;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__class_mask_d;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__input_boxed;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__input_boxed;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_1op;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_2op;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_sign;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__any_operand_nan;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__signalling_nan;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__operands_equal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__sign_injections__DOT__sign_a;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__sign_injections__DOT__sign_b;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_normal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_inf;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_nan;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_zero;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_normal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_inf;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_nan;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_zero;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal;
        // Begin mtask footprint all: 21 37 
        WData/*151:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_outputs[5];
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_ext;
        // Begin mtask footprint all: 21 38 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        // Begin mtask footprint all: 21 29 38 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        // Begin mtask footprint all: 12 21 29 38 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q;
        // Begin mtask footprint all: 12 21 29 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_valid;
        // Begin mtask footprint all: 12 29 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[2];
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_dly_SB;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Final_state_S;
        // Begin mtask footprint all: 12 
        QData/*53:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB;
        QData/*53:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm;
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3;
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_3;
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__First_iteration_cell_div_a_D;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_up_cast;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_down_cast;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_up_cast;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_down_cast;
        // Begin mtask footprint all: 12 25 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err_plus2;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio;
        // Begin mtask footprint all: 12 25 39 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_mux_id;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q;
        // Begin mtask footprint all: 12 25 38 39 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q;
        // Begin mtask footprint all: 25 38 39 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_q;
        // Begin mtask footprint all: 25 39 
        WData/*95:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[3];
        WData/*95:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[3];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry;
    };
    struct {
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__entry_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we;
        // Begin mtask footprint all: 12 25 29 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q;
        // Begin mtask footprint all: 6 12 25 29 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en;
        // Begin mtask footprint all: 25 29 
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DN;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d;
        // Begin mtask footprint all: 25 29 37 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_csr__DOT__rdata_q;
        // Begin mtask footprint all: 25 37 
        WData/*194:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_outputs[7];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_en;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_en;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q;
        // Begin mtask footprint all: 14 25 37 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_id;
        // Begin mtask footprint all: 14 25 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op;
        // Begin mtask footprint all: 14 25 39 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal;
        // Begin mtask footprint all: 14 39 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_we_ex;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update;
        // Begin mtask footprint all: 14 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[2];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[2];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__icache_inval;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__data_req_out;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_swap_oprnds_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__use_rs3_q;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu;
        // Begin mtask footprint all: 14 33 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec;
        // Begin mtask footprint all: 14 37 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel;
        // Begin mtask footprint all: 14 29 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec;
        // Begin mtask footprint all: 14 20 29 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q;
        // Begin mtask footprint all: 14 29 36 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q;
        // Begin mtask footprint all: 13 29 36 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q;
        // Begin mtask footprint all: 13 29 
        IData/*17:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip;
        // Begin mtask footprint all: 13 19 29 38 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_busy;
        // Begin mtask footprint all: 13 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__fp_rf_we_wb_q;
        // Begin mtask footprint all: 13 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_busy_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fetch_enable_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__intr_out;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q;
        // Begin mtask footprint all: 13 39 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn;
        // Begin mtask footprint all: 13 40 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__resumereq;
        // Begin mtask footprint all: 13 25 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__fp_rf_waddr_wb_q;
        // Begin mtask footprint all: 13 25 29 
        IData/*17:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q;
        // Begin mtask footprint all: 13 15 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart;
    };
    struct {
        // Begin mtask footprint all: 13 17 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q;
        // Begin mtask footprint all: 13 17 33 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q;
        // Begin mtask footprint all: 17 33 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_resp_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set;
        // Begin mtask footprint all: 12 17 33 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_load_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_store_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_ld_hz;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_branch;
        // Begin mtask footprint all: 12 17 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready;
        // Begin mtask footprint all: 12 17 
        QData/*52:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DN;
        QData/*52:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP;
        QData/*52:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DN;
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DN;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_SB;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S;
        // Begin mtask footprint all: 12 17 18 
        QData/*52:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP;
        // Begin mtask footprint all: 12 17 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec;
        // Begin mtask footprint all: 17 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready;
        // Begin mtask footprint all: 17 37 38 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready;
        // Begin mtask footprint all: 37 38 
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held;
        // Begin mtask footprint all: 21 37 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        // Begin mtask footprint all: 21 29 37 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        // Begin mtask footprint all: 21 29 37 
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        // Begin mtask footprint all: 19 21 29 37 
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        // Begin mtask footprint all: 19 21 29 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid;
        // Begin mtask footprint all: 19 29 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid;
        // Begin mtask footprint all: 16 19 29 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid;
        // Begin mtask footprint all: 17 19 29 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__in_valid_c2fpu;
        // Begin mtask footprint all: 17 19 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid;
        // Begin mtask footprint all: 19 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fpu_op_a;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fpu_op_b;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__b;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_swap_oprnds;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__busy;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d;
        // Begin mtask footprint all: 19 27 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data;
        // Begin mtask footprint all: 19 27 29 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid;
        // Begin mtask footprint all: 19 21 27 
        WData/*95:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operands[3];
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__is_boxed;
        // Begin mtask footprint all: 14 19 21 27 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod;
        // Begin mtask footprint all: 14 17 19 21 26 27 29 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator;
        // Begin mtask footprint all: 12 13 17 19 29 33 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q;
        // Begin mtask footprint all: 12 17 29 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id;
        // Begin mtask footprint all: 12 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q;
        // Begin mtask footprint all: 12 13 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q;
        // Begin mtask footprint all: 12 33 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set;
    };
    struct {
        // Begin mtask footprint all: 6 12 33 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn;
        // Begin mtask footprint all: 6 12 25 33 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
        // Begin mtask footprint all: 6 12 25 29 33 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug;
        // Begin mtask footprint all: 6 12 17 25 29 33 38 39 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
        // Begin mtask footprint all: 6 12 20 25 29 33 36 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
        // Begin mtask footprint all: 6 12 29 33 36 38 39 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
        // Begin mtask footprint all: 6 12 29 33 38 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match;
        // Begin mtask footprint all: 6 13 29 33 38 39 40 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq;
        // Begin mtask footprint all: 29 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn;
        // Begin mtask footprint all: 29 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__valid_id_fpu;
        // Begin mtask footprint all: 17 29 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid;
        // Begin mtask footprint all: 12 17 29 
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP;
        // Begin mtask footprint all: 12 29 36 
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q;
        // Begin mtask footprint all: 6 12 29 36 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q;
        // Begin mtask footprint all: 12 29 36 38 
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
        // Begin mtask footprint all: 12 25 29 36 38 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q;
        // Begin mtask footprint all: 25 29 38 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_op;
        // Begin mtask footprint all: 16 25 29 38 
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q;
        // Begin mtask footprint all: 16 25 29 
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP;
        // Begin mtask footprint all: 12 16 25 29 37 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q;
        // Begin mtask footprint all: 12 16 29 37 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q;
        // Begin mtask footprint all: 12 16 29 
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S;
        // Begin mtask footprint all: 12 16 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[4];
        QData/*56:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D;
        // Begin mtask footprint all: 12 16 38 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_valid;
        // Begin mtask footprint all: 12 16 37 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        // Begin mtask footprint all: 12 16 37 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__adjusted_result;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q;
        // Begin mtask footprint all: 12 14 16 37 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex;
        // Begin mtask footprint all: 12 37 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_en;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        // Begin mtask footprint all: 12 27 
        SData/*8:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__src_bias;
        // Begin mtask footprint all: 12 36 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we;
        // Begin mtask footprint all: 12 38 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__stored_addr_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_req_int;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_done;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__hold_result;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_d;
        // Begin mtask footprint all: 12 13 14 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn;
        // Begin mtask footprint all: 13 14 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id;
        // Begin mtask footprint all: 14 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q;
        // Begin mtask footprint all: 14 36 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err[2];
        // Begin mtask footprint all: 14 17 36 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req;
        // Begin mtask footprint all: 13 14 17 33 36 38 39 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
        // Begin mtask footprint all: 13 14 17 33 38 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec;
        // Begin mtask footprint all: 12 14 17 33 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q;
        // Begin mtask footprint all: 12 33 36 38 39 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q;
        // Begin mtask footprint all: 12 33 36 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q;
        // Begin mtask footprint all: 33 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wb_exception;
        // Begin mtask footprint all: 33 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_p;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_us_d2h;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__hfifo_reqready;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__hfifo_reqready;
        // Begin mtask footprint all: 20 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__complete_id[1];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_qs;
        // Begin mtask footprint all: 20 25 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_mtval;
        IData/*17:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_d;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause;
        // Begin mtask footprint all: 14 20 23 25 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_id;
        // Begin mtask footprint all: 14 23 25 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q;
        // Begin mtask footprint all: 13 14 23 25 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type;
        // Begin mtask footprint all: 13 14 25 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle;
        // Begin mtask footprint all: 13 14 17 25 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done;
        // Begin mtask footprint all: 13 14 19 23 25 38 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id;
        // Begin mtask footprint all: 13 14 17 23 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we;
        // Begin mtask footprint all: 13 14 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_c_insn_id;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm;
        // Begin mtask footprint all: 13 14 36 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q;
        // Begin mtask footprint all: 14 36 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d;
        // Begin mtask footprint all: 14 23 36 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q;
        // Begin mtask footprint all: 14 23 
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a;
    };
    struct {
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_raddr_a;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_write_wb;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate;
        // Begin mtask footprint all: 12 14 23 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match;
        // Begin mtask footprint all: 12 14 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__mult_sel_ex;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b;
        // Begin mtask footprint all: 12 14 27 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt;
        // Begin mtask footprint all: 12 14 20 39 
        IData/*30:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q;
        // Begin mtask footprint all: 12 39 
        IData/*30:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_mtvec_init;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_en;
        // Begin mtask footprint all: 12 20 
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DN;
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP;
        QData/*56:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DN;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_d;
        // Begin mtask footprint all: 12 20 29 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S;
        // Begin mtask footprint all: 20 29 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_wb;
        // Begin mtask footprint all: 29 33 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9[2];
        // Begin mtask footprint all: 29 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[16];
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[16];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[32];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[4];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9[2][3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy;
        IData/*20:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__State_ctl_S;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Start_dly_S;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy;
        IData/*20:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy;
        IData/*20:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        // Begin mtask footprint all: 19 26 
        WData/*95:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed;
        // Begin mtask footprint all: 19 26 37 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction;
        // Begin mtask footprint all: 19 26 29 37 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid;
        // Begin mtask footprint all: 26 37 
        WData/*194:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_outputs[7];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits;
        WData/*75:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[3];
    };
    struct {
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status;
        WData/*383:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[12];
        // Begin mtask footprint all: 26 
        QData/*50:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_c;
        WData/*75:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[3];
        WData/*76:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_inf;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_nan;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tentative_sign;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_normal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_inf;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_zero;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_normal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_inf;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_zero;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_boxed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_normal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_inf;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_signalling;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_quiet;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_zero;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_subnormal;
        WData/*305:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_lut[10];
        // Begin mtask footprint all: 17 19 22 
        WData/*127:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[4];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D;
        SData/*10:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D;
        SData/*10:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D;
        // Begin mtask footprint all: 12 17 19 22 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt;
        // Begin mtask footprint all: 12 17 19 25 27 29 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt;
        // Begin mtask footprint all: 12 18 
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[4];
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt0;
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_0;
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt1;
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_1;
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt2;
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_2;
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB;
        // Begin mtask footprint all: 12 18 20 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[4];
        QData/*56:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP;
    };
    struct {
        // Begin mtask footprint all: 12 16 18 20 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S;
        // Begin mtask footprint all: 18 20 
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[4];
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S;
        // Begin mtask footprint all: 18 20 37 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[4];
        // Begin mtask footprint all: 18 37 
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[4];
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[4];
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[4];
        // Begin mtask footprint all: 18 
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[4];
        QData/*34:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_11;
        QData/*37:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_12;
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_13;
        QData/*43:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_14;
        QData/*46:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_15;
        QData/*49:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_16;
        QData/*52:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_17;
        QData/*55:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_18;
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q0;
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q1;
        QData/*57:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q2;
        IData/*16:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_5;
        IData/*19:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_6;
        IData/*22:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_7;
        IData/*25:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_8;
        IData/*28:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_9;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_10;
        SData/*10:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_3;
        SData/*13:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_4;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_0;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_1;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_2;
        // Begin mtask footprint all: 16 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[2];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[2];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[4];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[4];
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext;
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d;
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_result;
        QData/*52:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_res_norm_D;
        QData/*56:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_forround_D;
        QData/*52:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upper_D;
        QData/*53:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_before_format_ctl_D;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b;
        SData/*10:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_res_norm_D;
        SData/*10:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_before_format_ctl_D;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut;
    };
    struct {
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
        IData/*20:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Sign_res_D;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_OF_S;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_lower_D;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_sticky_bit_D;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_rounded_S;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
        // Begin mtask footprint all: 16 23 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd;
        // Begin mtask footprint all: 16 37 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__DOT__Cin_D;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__DOT__Cin_D;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__DOT__Cin_D;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        // Begin mtask footprint all: 12 16 18 29 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S;
        // Begin mtask footprint all: 12 18 29 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S;
        // Begin mtask footprint all: 14 19 23 29 37 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__is_fp_instr;
        // Begin mtask footprint all: 14 19 23 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2;
        // Begin mtask footprint all: 14 16 19 23 39 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q;
        // Begin mtask footprint all: 14 16 23 29 37 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel;
        // Begin mtask footprint all: 14 16 25 29 39 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator;
        // Begin mtask footprint all: 16 25 29 39 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q;
        // Begin mtask footprint all: 16 23 25 29 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a;
    };
    struct {
        // Begin mtask footprint all: 16 23 25 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b;
        // Begin mtask footprint all: 14 16 23 25 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext;
        // Begin mtask footprint all: 14 16 25 
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode;
        // Begin mtask footprint all: 14 16 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d;
        // Begin mtask footprint all: 14 17 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_d;
        // Begin mtask footprint all: 14 17 25 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q;
        // Begin mtask footprint all: 17 25 
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DN;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__op_starting;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SN;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SN;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SN;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SN;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SN;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SN;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SN;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DN;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DN;
        // Begin mtask footprint all: 17 25 29 
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP;
        // Begin mtask footprint all: 17 21 25 27 37 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew;
        // Begin mtask footprint all: 27 37 
        WData/*272:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9];
        // Begin mtask footprint all: 27 
        WData/*194:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_outputs[7];
        WData/*159:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[5];
        WData/*127:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[4];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result;
        WData/*95:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant;
        WData/*159:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_mantissa[5];
        WData/*127:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val[4];
        WData/*64:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[3];
        WData/*64:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs;
        WData/*159:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_pre_round_abs[5];
        WData/*127:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[4];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res;
        WData/*159:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[5];
        WData/*159:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[5];
        WData/*127:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[4];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results__BRA__0__KET____DOT__active_format__DOT__special_results__DOT__special_res;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results_int__BRA__2__KET____DOT__active_format__DOT__special_results__DOT__special_res;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__value;
        QData/*44:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent;
        QData/*44:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_shift_compensation;
        SData/*8:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp;
        SData/*8:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp;
        SData/*8:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__input_boxed;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_1op;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_2op;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_sign;
        QData/*39:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_sign;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__uf_before_round;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__extension_bit;
        WData/*159:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_lut[5];
        WData/*159:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[5];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_normal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_inf;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_nan;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_zero;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal;
        // Begin mtask footprint all: 12 13 14 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec;
        // Begin mtask footprint all: 12 13 14 33 38 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q;
        // Begin mtask footprint all: 12 13 33 36 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q;
        // Begin mtask footprint all: 12 13 33 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err;
        // Begin mtask footprint all: 12 33 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__outstanding_load_wb;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run;
        // Begin mtask footprint all: 12 16 25 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S;
        // Begin mtask footprint all: 16 25 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_is_fp8_q;
        // Begin mtask footprint all: 16 17 25 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SP;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP;
        // Begin mtask footprint all: 16 25 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
        // Begin mtask footprint all: 25 38 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_dyn_mod;
        // Begin mtask footprint all: 14 25 38 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_access;
        // Begin mtask footprint all: 6 12 13 14 25 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk;
        // Begin mtask footprint all: 6 12 13 25 39 
        IData/*17:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs;
        // Begin mtask footprint all: 12 13 14 25 39 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d;
        // Begin mtask footprint all: 1 2 3 4 5 6 7 8 9 10 12 13 14 19 20 25 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 14 16 23 25 37 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[2];
        // Begin mtask footprint all: 14 16 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[2];
        // Begin mtask footprint all: 14 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[2];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[2];
        QData/*33:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0;
        QData/*33:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2;
        CData/*5:0*/ __Vtableidx2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v1;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v3;
        // Begin mtask footprint all: 7 
        SData/*15:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev__DOT__ct;
        SData/*15:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_ev_2__DOT__ct;
        SData/*15:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__ct_1;
        SData/*15:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__ct_1;
        SData/*15:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count;
        CData/*1:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index;
        // Begin mtask footprint all: 7 38 39 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[3];
        // Begin mtask footprint all: 38 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o[3][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i[3][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__DEBUG_ROM__tl_h_i[2][3];
        CData/*6:0*/ __Vtableidx7;
        // Begin mtask footprint all: 5 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[13];
        // Begin mtask footprint all: 5 35 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q;
        // Begin mtask footprint all: 5 7 
        IData/*31:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__ia;
        // Begin mtask footprint all: 5 7 35 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q;
        // Begin mtask footprint all: 7 35 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT____Vcellinp__shift__latch;
        // Begin mtask footprint all: 2 7 35 
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_wdata__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q;
        // Begin mtask footprint all: 2 7 
        WData/*127:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__data[4];
        SData/*15:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__ct;
        SData/*15:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__ct_2;
        SData/*15:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__ct_0;
        SData/*15:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__ct_0;
        SData/*13:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl;
        SData/*15:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt;
        CData/*7:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt;
        CData/*0:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip;
        // Begin mtask footprint all: 2 
        SData/*11:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v0;
        SData/*11:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v1;
    };
    struct {
        SData/*11:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v2;
        SData/*11:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v3;
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
        // Begin mtask footprint all: 2 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_wdata__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__qe;
        // Begin mtask footprint all: 2 4 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q;
        // Begin mtask footprint all: 4 10 20 33 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q;
        // Begin mtask footprint all: 4 10 20 
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
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q;
    };
    struct {
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
        // Begin mtask footprint all: 10 20 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q;
        // Begin mtask footprint all: 10 19 20 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q;
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
        // Begin mtask footprint all: 10 19 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q;
        // Begin mtask footprint all: 19 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT____Vlvbound1;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound1;
        CData/*1:0*/ __Vfunc_get_opgroup__1__Vfuncout;
        CData/*3:0*/ __Vfunc_get_opgroup__1__op;
    };
    struct {
        CData/*1:0*/ __Vfunc_get_opgroup__3__Vfuncout;
        CData/*3:0*/ __Vfunc_get_opgroup__3__op;
        CData/*1:0*/ __Vfunc_get_opgroup__4__Vfuncout;
        CData/*3:0*/ __Vfunc_get_opgroup__4__op;
        // Begin mtask footprint all: 4 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_3__tl_h_o[2];
        IData/*16:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding;
        // Begin mtask footprint all: 4 30 33 
        WData/*87:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[3];
        // Begin mtask footprint all: 30 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__XBAR_PERI__tl_h_i[2][3];
        // Begin mtask footprint all: 3 
        CData/*0:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 3 39 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o;
        // Begin mtask footprint all: 39 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i[3][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[3][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3];
        // Begin mtask footprint all: 2 5 
        IData/*31:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_q;
        IData/*31:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_en_q;
        // Begin mtask footprint all: 2 6 
        IData/*16:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__nco_sum_q;
        CData/*5:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        // Begin mtask footprint all: 1 
        IData/*16:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding;
        IData/*16:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding;
        CData/*0:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 1 20 
        IData/*31:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q;
        // Begin mtask footprint all: 1 24 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o;
        CData/*0:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 1 24 33 
        WData/*87:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[3];
        // Begin mtask footprint all: 1 33 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o;
        // Begin mtask footprint all: 1 32 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o;
        CData/*0:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 1 23 32 
        WData/*87:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[3];
        // Begin mtask footprint all: 23 
        CData/*4:0*/ __Vtableidx6;
        // Begin mtask footprint all: 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[2];
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[2];
        CData/*0:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[4];
        QData/*57:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[4];
        CData/*0:0*/ __Vm_traceActivity[164];
        WData/*113:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4];
        WData/*272:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9];
        QData/*63:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes;
        WData/*272:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9];
        QData/*63:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes;
        QData/*63:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes;
        QData/*57:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt0;
        QData/*57:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt1;
        QData/*57:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt2;
        WData/*272:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9];
        WData/*272:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9];
        QData/*62:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree;
        IData/*17:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q;
        IData/*31:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes;
        IData/*31:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q;
        SData/*15:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__DC_2;
        CData/*0:0*/ __VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq;
        CData/*0:0*/ __VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq;
        CData/*0:0*/ __Vclklast__TOP__clock_i;
        CData/*0:0*/ __Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk;
        CData/*0:0*/ __Vclklast__TOP__reset_ni;
        CData/*0:0*/ __Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__c;
        CData/*0:0*/ __Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__c;
        CData/*0:0*/ __Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk;
        CData/*0:0*/ __Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk_2;
        CData/*0:0*/ __Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
        CData/*0:0*/ __Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n;
    };
    struct {
        CData/*0:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req;
        CData/*5:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
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
        CData/*4:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status;
        WData/*383:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[12];
        CData/*4:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_valid;
        IData/*20:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*6:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*6:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*7:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*7:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        IData/*23:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        WData/*383:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[12];
        WData/*383:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[12];
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
        CData/*4:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status;
        WData/*159:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[5];
        CData/*0:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
        CData/*2:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*2:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*0:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq;
        WData/*377:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[12];
        WData/*188:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6];
        CData/*1:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*1:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*1:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__dfifo_rspready;
        // Begin mtask footprint all: 37 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o;
        // Begin mtask footprint all: 40 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[3][3];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o;
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3];
        // Begin mtask footprint all: 34 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[32];
        // Begin mtask footprint all: 36 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1;
        // Begin mtask footprint all: 32 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i[10];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_3__tl_h_i[2][3];
        // Begin mtask footprint all: 33 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i[11];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__PLIC__tl_h_o[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__XBAR_PERI__tl_h_o[2];
        // Begin mtask footprint all: 29 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_4__tl_h_o[2];
    };
    struct {
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_4__tl_h_i[2][3];
        CData/*1:0*/ __Vfunc_get_opgroup__2__Vfuncout;
        CData/*3:0*/ __Vfunc_get_opgroup__2__op;
        CData/*7:0*/ __Vtableidx8;
        CData/*1:0*/ __Vtableidx9;
        // Begin mtask footprint all: 31 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__PLIC__tl_h_i[2][3];
        // Begin mtask footprint all: 27 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vlvbound3;
        IData/*31:0*/ __Vfunc_bias__14__Vfuncout;
        IData/*31:0*/ __Vfunc_man_bits__15__Vfuncout;
        IData/*31:0*/ __Vfunc_int_width__16__Vfuncout;
        IData/*31:0*/ __Vfunc_exp_bits__17__Vfuncout;
        IData/*31:0*/ __Vfunc_exp_bits__18__Vfuncout;
        IData/*31:0*/ __Vfunc_man_bits__19__Vfuncout;
        IData/*31:0*/ __Vfunc_man_bits__20__Vfuncout;
        IData/*31:0*/ __Vfunc_man_bits__21__Vfuncout;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound4;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vlvbound1;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vlvbound2;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o;
        CData/*2:0*/ __Vfunc_bias__14__fmt;
        CData/*2:0*/ __Vfunc_man_bits__15__fmt;
        CData/*1:0*/ __Vfunc_int_width__16__ifmt;
        CData/*2:0*/ __Vfunc_exp_bits__17__fmt;
        CData/*2:0*/ __Vfunc_exp_bits__18__fmt;
        CData/*2:0*/ __Vfunc_man_bits__19__fmt;
        CData/*2:0*/ __Vfunc_man_bits__20__fmt;
        CData/*2:0*/ __Vfunc_man_bits__21__fmt;
        // Begin mtask footprint all: 28 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__DCCM__tl_h_o[2];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__DCCM__tl_h_i[2][3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_0__tl_h_o[2];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_0__tl_h_i[2][3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_1__tl_h_o[2];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_1__tl_h_i[2][3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_2__tl_h_o[2];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_2__tl_h_i[2][3];
        // Begin mtask footprint all: 25 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o[10][3];
        CData/*5:0*/ __Vtableidx3;
        CData/*7:0*/ __Vtableidx4;
        CData/*5:0*/ __Vtableidx5;
        // Begin mtask footprint all: 26 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__status_o;
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT____Vlvbound1;
        // Begin mtask footprint all: 22 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1;
        // Begin mtask footprint all: 24 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o[11][3];
        // Begin mtask footprint all: 17 
        CData/*1:0*/ __Vfunc_get_opgroup__0__Vfuncout;
        CData/*3:0*/ __Vfunc_get_opgroup__0__op;
        // Begin mtask footprint all: 21 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound2;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT____Vlvbound3;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vlvbound1;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vlvbound2;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__status_o;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o;
        // Begin mtask footprint all: 13 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound2;
        // Begin mtask footprint all: 15 
        QData/*33:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0;
        IData/*31:0*/ __Vfunc_load__38__Vfuncout;
        IData/*31:0*/ __Vfunc_float_load__41__Vfuncout;
        IData/*31:0*/ __Vfunc_load__42__Vfuncout;
        IData/*31:0*/ __Vfunc_load__44__Vfuncout;
        IData/*31:0*/ __Vfunc_csrw__45__Vfuncout;
        IData/*31:0*/ __Vfunc_store__51__Vfuncout;
        IData/*31:0*/ __Vfunc_float_store__53__Vfuncout;
    };
    struct {
        IData/*31:0*/ __Vfunc_store__54__Vfuncout;
        IData/*31:0*/ __Vfunc_csrr__56__Vfuncout;
        IData/*31:0*/ __Vfunc_store__57__Vfuncout;
        SData/*11:0*/ __Vfunc_csrw__45__csr;
        SData/*11:0*/ __Vfunc_csrr__56__csr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__dap__tdo_oe_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__dap__td_o;
        CData/*2:0*/ __Vfunc_load__38__size;
        CData/*2:0*/ __Vfunc_float_load__41__size;
        CData/*4:0*/ __Vfunc_float_load__41__dest;
        CData/*2:0*/ __Vfunc_load__42__size;
        CData/*4:0*/ __Vfunc_load__42__dest;
        CData/*2:0*/ __Vfunc_load__44__size;
        CData/*2:0*/ __Vfunc_store__51__size;
        CData/*2:0*/ __Vfunc_float_store__53__size;
        CData/*4:0*/ __Vfunc_float_store__53__src;
        CData/*2:0*/ __Vfunc_store__54__size;
        CData/*4:0*/ __Vfunc_store__54__src;
        CData/*2:0*/ __Vfunc_store__57__size;
        CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__70__Vfuncout;
        CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__70__grayval;
        CData/*1:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__70__dec_tmp;
        CData/*1:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__70__dec_tmp_sub;
        CData/*4:0*/ __Vtableidx10;
        CData/*4:0*/ __Vtableidx11;
        CData/*1:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr;
        // Begin mtask footprint all: 12 
        IData/*31:0*/ __Vfunc_fp_width__5__Vfuncout;
        IData/*31:0*/ __Vfunc_fp_width__6__Vfuncout;
        IData/*31:0*/ __Vfunc_fp_width__7__Vfuncout;
        IData/*31:0*/ __Vfunc_fp_width__8__Vfuncout;
        IData/*31:0*/ __Vfunc_fp_width__9__Vfuncout;
        IData/*31:0*/ __Vfunc_fp_width__10__Vfuncout;
        IData/*31:0*/ __Vfunc_fp_width__11__Vfuncout;
        IData/*31:0*/ __Vfunc_fp_width__12__Vfuncout;
        IData/*31:0*/ __Vfunc_bias__13__Vfuncout;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO;
        CData/*2:0*/ __Vfunc_fp_width__5__fmt;
        CData/*2:0*/ __Vfunc_fp_width__6__fmt;
        CData/*2:0*/ __Vfunc_fp_width__7__fmt;
        CData/*2:0*/ __Vfunc_fp_width__8__fmt;
        CData/*2:0*/ __Vfunc_fp_width__9__fmt;
        CData/*2:0*/ __Vfunc_fp_width__10__fmt;
        CData/*2:0*/ __Vfunc_fp_width__11__fmt;
        CData/*2:0*/ __Vfunc_fp_width__12__fmt;
        CData/*2:0*/ __Vfunc_bias__13__fmt;
        CData/*5:0*/ __Vtableidx1;
        CData/*0:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready;
        // Begin mtask footprint all: 12 16 37 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT____Vcellout__i_divsqrt_lei__Fflags_SO;
        // Begin mtask footprint all: 16 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[2];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[2];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1;
    };
    struct {
        // Begin mtask footprint all: 11 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT____Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtimecmp[1];
        // Begin mtask footprint all: 6 11 20 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_timer_v_lower0__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_timer_v_upper0__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_compare_lower0_0__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_compare_upper0_0__q;
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_cfg0_prescale__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_ctrl__q;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_cfg0_step__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_intr_enable0__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_intr_state0__q;
        // Begin mtask footprint all: 6 11 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_compare_lower0_0__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_compare_upper0_0__qe;
        // Begin mtask footprint all: 6 
        CData/*5:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*5:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*5:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        // Begin mtask footprint all: 6 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q;
        // Begin mtask footprint all: 35 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[13][3];
        SData/*8:0*/ __Vtableidx14;
        // Begin mtask footprint all: 8 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__DEBUG_ROM__tl_h_o[2];
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o;
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o;
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT____Vlvbound1;
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o;
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT____Vlvbound1;
        QData/*40:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0;
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o;
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o;
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT____Vlvbound1;
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o;
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT____Vlvbound1;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1;
        CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__64__Vfuncout;
        CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__64__grayval;
        CData/*1:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__64__dec_tmp;
        CData/*1:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__64__dec_tmp_sub;
        CData/*2:0*/ __Vtableidx12;
        CData/*2:0*/ __Vtableidx13;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr;
        CData/*1:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        // Begin mtask footprint all: 8 15 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i;
    };
    struct {
        // Begin mtask footprint all: 8 15 32 40 
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o;
    };
    // Begin mtask footprint all: 35 
    static CData/*0:0*/ __Vtable14_Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d[512];
    // Begin mtask footprint all: 38 
    static CData/*0:0*/ __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready[128];
    static CData/*0:0*/ __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid[128];
    static CData/*0:0*/ __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__hold_result[128];
    static CData/*0:0*/ __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held[128];
    static CData/*0:0*/ __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_busy[128];
    static CData/*1:0*/ __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_d[128];
    // Begin mtask footprint all: 25 
    static CData/*0:0*/ __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[64];
    static CData/*0:0*/ __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[256];
    static CData/*0:0*/ __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[64];
    // Begin mtask footprint all: 29 
    static CData/*5:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__State_ctl_S[256];
    static IData/*31:0*/ __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE[4];
    static IData/*31:0*/ __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS[4];
    // Begin mtask footprint all: 15 
    static CData/*0:0*/ __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[32];
    static CData/*0:0*/ __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[32];
    static CData/*0:0*/ __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[32];
    static CData/*0:0*/ __Vtable10_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[32];
    static CData/*0:0*/ __Vtable11_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[32];
    static CData/*0:0*/ __Vtable11_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[32];
    static CData/*0:0*/ __Vtable11_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[32];
    static CData/*0:0*/ __Vtable11_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[32];
    static CData/*0:0*/ __Vtable11_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[32];
    static CData/*0:0*/ __Vtable11_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[32];
    static CData/*0:0*/ __Vtable11_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[32];
    static CData/*3:0*/ __Vtable11_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[32];
    // Begin mtask footprint all: 23 
    static CData/*3:0*/ __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[32];
    // Begin mtask footprint all: 12 
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[64];
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[64];
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[64];
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[64];
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[64];
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[64];
    // Begin mtask footprint all: 14 
    static CData/*0:0*/ __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[64];
    // Begin mtask footprint all: 8 
    static CData/*1:0*/ __Vtable12_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[8];
    static IData/*31:0*/ __Vtable12_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[8];
    static CData/*1:0*/ __Vtable13_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[8];
    static IData/*31:0*/ __Vtable13_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[8];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAzadi_top_verilator__Syms* __VlSymsp;  // Symbol table
  private:
    VlMTaskVertex __Vm_mt_14;
    VlMTaskVertex __Vm_mt_4;
    VlMTaskVertex __Vm_mt_7;
    VlMTaskVertex __Vm_mt_9;
    VlMTaskVertex __Vm_mt_15;
    VlMTaskVertex __Vm_mt_18;
    VlMTaskVertex __Vm_mt_23;
    VlMTaskVertex __Vm_mt_25;
    VlMTaskVertex __Vm_mt_30;
    VlMTaskVertex __Vm_mt_5;
    VlMTaskVertex __Vm_mt_6;
    VlMTaskVertex __Vm_mt_19;
    VlMTaskVertex __Vm_mt_26;
    VlMTaskVertex __Vm_mt_28;
    VlMTaskVertex __Vm_mt_29;
    VlMTaskVertex __Vm_mt_31;
    VlMTaskVertex __Vm_mt_2;
    VlMTaskVertex __Vm_mt_3;
    VlMTaskVertex __Vm_mt_10;
    VlMTaskVertex __Vm_mt_11;
    VlMTaskVertex __Vm_mt_16;
    VlMTaskVertex __Vm_mt_21;
    VlMTaskVertex __Vm_mt_27;
    VlMTaskVertex __Vm_mt_33;
    VlMTaskVertex __Vm_mt_35;
    VlMTaskVertex __Vm_mt_38;
    VlMTaskVertex __Vm_mt_17;
    VlMTaskVertex __Vm_mt_20;
    VlMTaskVertex __Vm_mt_32;
    VlMTaskVertex __Vm_mt_36;
    VlMTaskVertex __Vm_mt_37;
    VlMTaskVertex __Vm_mt_39;
    VlMTaskVertex __Vm_mt_40;
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
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    
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
    static void _combo__TOP__129(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__134(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__140(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__143(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__157(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__163(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__169(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__174(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__178(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__182(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__186(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__189(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__191(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__194(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__197(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__204(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__209(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__244(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__246(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__249(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__251(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__263(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__266(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__267(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__291(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__293(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__302(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__304(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__306(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__308(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__309(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__314(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__316(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__318(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__320(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__322(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__323(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__330(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__354(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__356(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__360(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__361(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__363(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__365(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__367(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__380(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__383(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__385(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__387(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__389(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__391(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__393(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__395(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__396(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__399(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__401(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__407(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__409(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__411(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__412(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__413(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__65(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__67(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__69(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__85(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__88(VAzadi_top_verilator__Syms* __restrict vlSymsp);
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
    static void _multiclk__TOP__126(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__193(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__227(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__236(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__239(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__241(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__243(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__248(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__262(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__265(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__276(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__300(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__301(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__303(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__305(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__307(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__313(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__315(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__317(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__319(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__321(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__334(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__352(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__353(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__369(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__371(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__373(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__375(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__377(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__379(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__381(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__382(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__384(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__386(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__388(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__390(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__392(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__394(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__102(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__103(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__104(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__105(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__106(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__107(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__108(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__109(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__110(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__111(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__112(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__113(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__114(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__115(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__116(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__117(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__118(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__119(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__120(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__122(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__123(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__124(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__125(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__130(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__132(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__133(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__136(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__137(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__141(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__142(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__145(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__146(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__147(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__148(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__149(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__150(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__151(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__153(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__154(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__155(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__156(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__158(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__160(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__162(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__164(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__165(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__166(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__167(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__168(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__170(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__171(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__173(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__175(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__176(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__177(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__179(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__180(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__183(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__184(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__185(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__187(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__188(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__190(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__192(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__195(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__196(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__199(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__200(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__201(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__203(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__205(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__206(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__208(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__210(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__211(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__213(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__214(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__215(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__216(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__217(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__218(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__220(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__221(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__222(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__224(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__225(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__226(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__228(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__229(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__232(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__233(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__234(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__235(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__237(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__238(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__240(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__242(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__245(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__250(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__254(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__255(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__258(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__259(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__261(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__264(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__268(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__271(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__272(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__273(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__277(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__279(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__280(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__281(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__282(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__283(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__285(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__286(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__287(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__289(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__290(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__292(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__294(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__297(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__298(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__299(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__312(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__325(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__326(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__327(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__328(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__329(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__331(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__332(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__333(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__335(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__336(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__337(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__338(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__341(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__344(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__345(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__347(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__348(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__349(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__355(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__357(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__358(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__359(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__362(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__364(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__366(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__368(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__370(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__372(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__374(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__376(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__378(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__398(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__404(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__405(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__408(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__410(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__68(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__72(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__73(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__76(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__77(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__78(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__80(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__81(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__82(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__84(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__86(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__87(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__90(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__91(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__92(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__93(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__95(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__96(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__97(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__98(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__99(VAzadi_top_verilator__Syms* __restrict vlSymsp);
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
    static void _settle__TOP__5(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
    static void traceChgSub0(void* userp, VerilatedFst* tracep);
    static void traceChgSub1(void* userp, VerilatedFst* tracep);
    static void traceChgSub2(void* userp, VerilatedFst* tracep);
    static void traceChgSub3(void* userp, VerilatedFst* tracep);
    static void traceChgTop0(void* userp, VerilatedFst* tracep);
    static void traceCleanup(void* userp, VerilatedFst* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceFullSub1(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceFullSub2(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceFullSub3(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitSub1(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitSub2(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitSub3(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitSub4(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitSub5(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedFst* tracep) VL_ATTR_COLD;
    static void __Vmtask__13(bool even_cycle, void* symtab);
    static void __Vmtask__14(bool even_cycle, void* symtab);
    static void __Vmtask__4(bool even_cycle, void* symtab);
    static void __Vmtask__9(bool even_cycle, void* symtab);
    static void __Vmtask__final(bool even_cycle, void* symtab);
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
