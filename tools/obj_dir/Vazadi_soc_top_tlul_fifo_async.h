// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vazadi_soc_top.h for the primary calling header

#ifndef _VAZADI_SOC_TOP_TLUL_FIFO_ASYNC_H_
#define _VAZADI_SOC_TOP_TLUL_FIFO_ASYNC_H_  // guard

#include "verilated_heavy.h"

//==========

class Vazadi_soc_top__Syms;
class Vazadi_soc_top_VerilatedVcd;


//----------

VL_MODULE(Vazadi_soc_top_tlul_fifo_async) {
  public:
    
    // PORTS
    VL_IN8(clk_h_i,0,0);
    VL_IN8(rst_h_ni,0,0);
    VL_IN8(clk_d_i,0,0);
    VL_IN8(rst_d_ni,0,0);
    VL_INW(tl_h_i,85,0,3);
    VL_OUT64(tl_h_o,51,0);
    VL_OUTW(tl_d_o,85,0,3);
    VL_IN64(tl_d_i,51,0);
    
    // LOCAL SIGNALS
    CData/*2:0*/ __PVT__reqfifo__DOT__fifo_wptr;
    CData/*2:0*/ __PVT__reqfifo__DOT__fifo_rptr;
    CData/*2:0*/ __PVT__reqfifo__DOT__fifo_wptr_sync_combi;
    CData/*2:0*/ __PVT__reqfifo__DOT__fifo_rptr_sync;
    CData/*2:0*/ __PVT__reqfifo__DOT__fifo_wptr_gray_sync;
    CData/*2:0*/ __PVT__reqfifo__DOT__fifo_rptr_gray_sync;
    CData/*2:0*/ __PVT__reqfifo__DOT__fifo_wptr_gray;
    CData/*2:0*/ __PVT__reqfifo__DOT__fifo_rptr_gray;
    CData/*0:0*/ __PVT__reqfifo__DOT__fifo_incr_wptr;
    CData/*0:0*/ __PVT__reqfifo__DOT__fifo_incr_rptr;
    CData/*0:0*/ __PVT__reqfifo__DOT__empty;
    CData/*0:0*/ __PVT__reqfifo__DOT__full_wclk;
    CData/*2:0*/ __PVT__reqfifo__DOT__sync_wptr__DOT__intq;
    CData/*2:0*/ __PVT__reqfifo__DOT__sync_rptr__DOT__intq;
    CData/*2:0*/ __PVT__rspfifo__DOT__fifo_wptr;
    CData/*2:0*/ __PVT__rspfifo__DOT__fifo_rptr;
    CData/*2:0*/ __PVT__rspfifo__DOT__fifo_wptr_sync_combi;
    CData/*2:0*/ __PVT__rspfifo__DOT__fifo_rptr_sync;
    CData/*2:0*/ __PVT__rspfifo__DOT__fifo_wptr_gray_sync;
    CData/*2:0*/ __PVT__rspfifo__DOT__fifo_rptr_gray_sync;
    CData/*2:0*/ __PVT__rspfifo__DOT__fifo_wptr_gray;
    CData/*2:0*/ __PVT__rspfifo__DOT__fifo_rptr_gray;
    CData/*0:0*/ __PVT__rspfifo__DOT__fifo_incr_wptr;
    CData/*0:0*/ __PVT__rspfifo__DOT__fifo_incr_rptr;
    CData/*0:0*/ __PVT__rspfifo__DOT__empty;
    CData/*0:0*/ __PVT__rspfifo__DOT__full_wclk;
    CData/*2:0*/ __PVT__rspfifo__DOT__sync_wptr__DOT__intq;
    CData/*2:0*/ __PVT__rspfifo__DOT__sync_rptr__DOT__intq;
    WData/*83:0*/ __PVT__reqfifo__DOT__storage[3][3];
    QData/*49:0*/ __PVT__rspfifo__DOT__storage[3];
    
    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__2__Vfuncout;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__2__grayval;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__2__dec_tmp;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__2__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__8__Vfuncout;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__8__grayval;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__8__dec_tmp;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__8__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__14__Vfuncout;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__14__grayval;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__14__dec_tmp;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__14__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__20__Vfuncout;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__20__grayval;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__20__dec_tmp;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__20__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__26__Vfuncout;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__26__grayval;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__26__dec_tmp;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__26__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__32__Vfuncout;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__32__grayval;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__32__dec_tmp;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__32__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__38__Vfuncout;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__38__grayval;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__38__dec_tmp;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__38__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__44__Vfuncout;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__44__grayval;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__44__dec_tmp;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__44__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__50__Vfuncout;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__50__grayval;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__50__dec_tmp;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__50__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__56__Vfuncout;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__56__grayval;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__56__dec_tmp;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__56__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__62__Vfuncout;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__62__grayval;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__62__dec_tmp;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__62__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__68__Vfuncout;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__68__grayval;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__68__dec_tmp;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__68__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__74__Vfuncout;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__74__grayval;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__74__dec_tmp;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__74__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__80__Vfuncout;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__80__grayval;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__80__dec_tmp;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__80__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__86__Vfuncout;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__86__grayval;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__86__dec_tmp;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__86__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__92__Vfuncout;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__92__grayval;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__92__dec_tmp;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__92__dec_tmp_sub;
    };
    struct {
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__98__Vfuncout;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__98__grayval;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__98__dec_tmp;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__98__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__104__Vfuncout;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__104__grayval;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__104__dec_tmp;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__104__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__110__Vfuncout;
        CData/*2:0*/ __Vfunc_reqfifo__DOT__gray2dec__110__grayval;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__110__dec_tmp;
        CData/*1:0*/ __Vfunc_reqfifo__DOT__gray2dec__110__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__116__Vfuncout;
        CData/*2:0*/ __Vfunc_rspfifo__DOT__gray2dec__116__grayval;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__116__dec_tmp;
        CData/*1:0*/ __Vfunc_rspfifo__DOT__gray2dec__116__dec_tmp_sub;
        CData/*2:0*/ __Vdly__reqfifo__DOT__fifo_wptr;
        CData/*2:0*/ __Vdly__rspfifo__DOT__fifo_rptr;
        CData/*2:0*/ __Vdly__reqfifo__DOT__fifo_rptr;
        CData/*2:0*/ __Vdly__rspfifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdlyvdim0__reqfifo__DOT__storage__v0;
        CData/*0:0*/ __Vdlyvset__reqfifo__DOT__storage__v0;
        CData/*1:0*/ __Vdlyvdim0__rspfifo__DOT__storage__v0;
        CData/*0:0*/ __Vdlyvset__rspfifo__DOT__storage__v0;
        WData/*83:0*/ reqfifo__DOT____Vlvbound1[3];
        WData/*83:0*/ __Vdlyvval__reqfifo__DOT__storage__v0[3];
        QData/*49:0*/ rspfifo__DOT____Vlvbound1;
        QData/*49:0*/ __Vdlyvval__rspfifo__DOT__storage__v0;
    };
    
    // INTERNAL VARIABLES
  private:
    Vazadi_soc_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vazadi_soc_top_tlul_fifo_async);  ///< Copying not allowed
  public:
    Vazadi_soc_top_tlul_fifo_async(const char* name = "TOP");
    ~Vazadi_soc_top_tlul_fifo_async();
    
    // INTERNAL METHODS
    void __Vconfigure(Vazadi_soc_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _multiclk__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_15__47(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _multiclk__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_15__62(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_15__23(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_15__25(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_15__33(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_15__44(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_15__49(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_15__58(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_17__36(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_17__46(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_17__60(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_20__27(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_20__37(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_20__51(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_22__28(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_22__38(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_22__52(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_24__29(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_24__39(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_24__53(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_26__30(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_26__40(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_26__54(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_28__31(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_28__41(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_28__55(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_30__32(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_30__42(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_30__56(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_32__35(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_32__43(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_32__57(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_34__24(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_34__26(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_34__34(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_34__45(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_34__50(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_34__59(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_15__1(Vazadi_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_15__13(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_17__10(Vazadi_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_17__12(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_17__21(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_20__14(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_20__3(Vazadi_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_22__15(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_22__4(Vazadi_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_24__16(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_24__5(Vazadi_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_26__17(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_26__6(Vazadi_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_28__18(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_28__7(Vazadi_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_30__19(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_30__8(Vazadi_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_32__11(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_32__20(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_32__9(Vazadi_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_34__2(Vazadi_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__azadi_soc_top__DOT__main_swith__DOT__u_asf_34__22(Vazadi_soc_top__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
