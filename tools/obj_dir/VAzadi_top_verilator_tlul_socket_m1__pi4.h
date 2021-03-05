// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAzadi_top_verilator.h for the primary calling header

#ifndef _VAZADI_TOP_VERILATOR_TLUL_SOCKET_M1__PI4_H_
#define _VAZADI_TOP_VERILATOR_TLUL_SOCKET_M1__PI4_H_  // guard

#include "verilated_heavy.h"
#include "VAzadi_top_verilator__Dpi.h"

//==========

class VAzadi_top_verilator__Syms;
class VAzadi_top_verilator_VerilatedVcd;
class VAzadi_top_verilator_tlul_fifo_sync__RCz2_RDz2;


//----------

VL_MODULE(VAzadi_top_verilator_tlul_socket_m1__pi4) {
  public:
    // CELLS
    VAzadi_top_verilator_tlul_fifo_sync__RCz2_RDz2* __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    VAzadi_top_verilator_tlul_fifo_sync__RCz2_RDz2* __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_OUTW(tl_d_o,85,0,3);
    VL_IN64(tl_d_i,51,0);
    VL_INW(tl_h_i[2],85,0,3);
    VL_OUT64(tl_h_o[2],51,0);
    
    // LOCAL SIGNALS
    CData/*1:0*/ __PVT__hrequest;
    CData/*1:0*/ __PVT__hgrant;
    CData/*1:0*/ __PVT__hfifo_rspvalid;
    CData/*1:0*/ __PVT__dfifo_rspready;
    CData/*0:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o;
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req;
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask;
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    WData/*85:0*/ __PVT__dreq_fifo_i[3];
    QData/*51:0*/ __PVT__drsp_fifo_o;
    WData/*85:0*/ __PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[3];
    WData/*85:0*/ __PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[3];
    WData/*85:0*/ __PVT__hreq_fifo_o[2][3];
    QData/*51:0*/ __PVT__hrsp_fifo_i[2];
    
    // LOCAL VARIABLES
    WData/*85:0*/ __Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3];
    WData/*85:0*/ __Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2][3];
    
    // INTERNAL VARIABLES
  private:
    VAzadi_top_verilator__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAzadi_top_verilator_tlul_socket_m1__pi4);  ///< Copying not allowed
  public:
    VAzadi_top_verilator_tlul_socket_m1__pi4(const char* name = "TOP");
    ~VAzadi_top_verilator_tlul_socket_m1__pi4();
    
    // INTERNAL METHODS
    void __Vconfigure(VAzadi_top_verilator__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__37(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__18(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__27(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__8(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__9(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__1(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__7(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__2(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__3(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__4(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__5(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__6(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__26(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__28(VAzadi_top_verilator__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
