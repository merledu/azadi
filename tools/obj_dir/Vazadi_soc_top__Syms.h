// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VAZADI_SOC_TOP__SYMS_H_
#define _VAZADI_SOC_TOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vazadi_soc_top.h"
#include "Vazadi_soc_top_tlul_fifo_async.h"
#include "Vazadi_soc_top_tlul_socket_m1__pi5.h"
#include "Vazadi_soc_top_gpio_reg_pkg.h"
#include "Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1.h"

// SYMS CLASS
class Vazadi_soc_top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vazadi_soc_top*                TOPp;
    Vazadi_soc_top_tlul_fifo_async TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_15;
    Vazadi_soc_top_tlul_fifo_async TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_17;
    Vazadi_soc_top_tlul_fifo_async TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_20;
    Vazadi_soc_top_tlul_fifo_async TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_22;
    Vazadi_soc_top_tlul_fifo_async TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_24;
    Vazadi_soc_top_tlul_fifo_async TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_26;
    Vazadi_soc_top_tlul_fifo_async TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_28;
    Vazadi_soc_top_tlul_fifo_async TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_30;
    Vazadi_soc_top_tlul_fifo_async TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_32;
    Vazadi_soc_top_tlul_fifo_async TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_34;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_18__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_18__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_18__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_18__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_18__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_18__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_18__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_18__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_18__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_35__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_35__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_35__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_35__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_35__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_35__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_35__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_35__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_s1n_35__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_16__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_16__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_16__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_socket_m1__pi5 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_19;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_19__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_19__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_socket_m1__pi5 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_21;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_21__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_21__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_socket_m1__pi5 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_23;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_23__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_23__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_socket_m1__pi5 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_25;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_25__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_25__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_socket_m1__pi5 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_27;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_27__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_27__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_socket_m1__pi5 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_29;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_29__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_29__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_socket_m1__pi5 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_31;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_31__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_31__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_socket_m1__pi5 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_33;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_33__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_33__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d;
    Vazadi_soc_top_gpio_reg_pkg    TOP__gpio_reg_pkg;
    
    // CREATORS
    Vazadi_soc_top__Syms(Vazadi_soc_top* topp, const char* namep);
    ~Vazadi_soc_top__Syms();
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
