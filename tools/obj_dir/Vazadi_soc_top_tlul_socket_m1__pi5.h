// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vazadi_soc_top.h for the primary calling header

#ifndef _VAZADI_SOC_TOP_TLUL_SOCKET_M1__PI5_H_
#define _VAZADI_SOC_TOP_TLUL_SOCKET_M1__PI5_H_  // guard

#include "verilated_heavy.h"

//==========

class Vazadi_soc_top__Syms;
class Vazadi_soc_top_VerilatedVcd;
class Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1;


//----------

VL_MODULE(Vazadi_soc_top_tlul_socket_m1__pi5) {
  public:
    // CELLS
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1* __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1* __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    
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
    Vazadi_soc_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vazadi_soc_top_tlul_socket_m1__pi5);  ///< Copying not allowed
  public:
    Vazadi_soc_top_tlul_socket_m1__pi5(const char* name = "TOP");
    ~Vazadi_soc_top_tlul_socket_m1__pi5();
    
    // INTERNAL METHODS
    void __Vconfigure(Vazadi_soc_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_19__40(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_19__1(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_19__16(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_19__24(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_19__32(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_21__2(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_23__3(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_25__4(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_27__5(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_29__6(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_31__7(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_sm1_33__8(Vazadi_soc_top__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
