// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAzadi_top_verilator.h for the primary calling header

#ifndef _VAZADI_TOP_VERILATOR_TLUL_SOCKET_M1__PI7_H_
#define _VAZADI_TOP_VERILATOR_TLUL_SOCKET_M1__PI7_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"
#include "VAzadi_top_verilator__Dpi.h"

//==========

class VAzadi_top_verilator__Syms;
class VAzadi_top_verilator_VerilatedFst;
class VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15;


//----------

VL_MODULE(VAzadi_top_verilator_tlul_socket_m1__pi7) {
  public:
    // CELLS
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    VAzadi_top_verilator_tlul_fifo_sync__RCz15_RDz15* __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    
    // PORTS
    // Begin mtask footprint all: 
    VL_IN64(tl_d_i,51,0);
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    // Begin mtask footprint all: 8 23 28 29 45 
    VL_OUT64(tl_h_o[2],51,0);
    // Begin mtask footprint all: 23 28 29 30 33 47 50 
    VL_INW(tl_h_i[2],85,0,3);
    // Begin mtask footprint all: 5 7 8 13 14 24 28 29 30 31 33 34 47 55 
    VL_OUTW(tl_d_o,85,0,3);
    
    // LOCAL SIGNALS
    // Begin mtask footprint all: 14 23 24 28 29 33 
    CData/*0:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o;
    // Begin mtask footprint all: 8 14 23 28 29 30 33 47 54 
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
    // Begin mtask footprint all: 23 28 29 30 33 47 54 
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req;
    // Begin mtask footprint all: 23 28 29 30 33 47 50 
    WData/*85:0*/ __PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[3];
    WData/*85:0*/ __PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[3];
    // Begin mtask footprint all: 23 24 28 29 30 31 33 47 50 55 
    WData/*85:0*/ __PVT__hreq_fifo_o[2][3];
    // Begin mtask footprint all: 24 28 29 30 31 33 47 55 
    WData/*85:0*/ __PVT__dreq_fifo_i[3];
    CData/*1:0*/ __PVT__dfifo_rspready;
    // Begin mtask footprint all: 8 14 23 24 28 29 30 31 33 45 47 55 
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    // Begin mtask footprint all: 4 5 7 8 14 23 24 28 29 30 31 45 47 55 
    QData/*51:0*/ __PVT__drsp_fifo_o;
    // Begin mtask footprint all: 4 5 7 8 14 23 24 28 29 30 31 33 47 54 55 
    CData/*1:0*/ __PVT__hrequest;
    // Begin mtask footprint all: 4 5 7 8 14 23 24 28 29 30 33 47 54 
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask;
    // Begin mtask footprint all: 4 5 7 8 14 23 28 29 30 33 
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
    // Begin mtask footprint all: 5 7 8 14 23 28 29 45 
    CData/*1:0*/ __PVT__hfifo_rspvalid;
    // Begin mtask footprint all: 8 23 28 29 45 
    QData/*51:0*/ __PVT__hrsp_fifo_i[2];
    CData/*1:0*/ __PVT__hgrant;
    
    // LOCAL VARIABLES
    // Begin mtask footprint all: 24 28 29 30 31 33 47 55 
    WData/*85:0*/ __Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2][3];
    WData/*85:0*/ __Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3];
    
    // INTERNAL VARIABLES
  private:
    VAzadi_top_verilator__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAzadi_top_verilator_tlul_socket_m1__pi7);  ///< Copying not allowed
  public:
    VAzadi_top_verilator_tlul_socket_m1__pi7(const char* name = "TOP");
    ~VAzadi_top_verilator_tlul_socket_m1__pi7();
    
    // INTERNAL METHODS
    void __Vconfigure(VAzadi_top_verilator__Syms* symsp, bool first);
    void _combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__162(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__157(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__163(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__161(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__150(VAzadi_top_verilator__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__159(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__107(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__110(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__120(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__124(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__20(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__22(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__26(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__33(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__46(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__49(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__56(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__63(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__70(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__77(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__84(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__94(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__97(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__145(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__147(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__21(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__23(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__14(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__13(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__2(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__40(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__43(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__6(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__3(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__10(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__5(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__4(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__130(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__55(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
