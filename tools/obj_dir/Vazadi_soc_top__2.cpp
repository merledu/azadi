// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vazadi_soc_top.h for the primary calling header

#include "Vazadi_soc_top.h"
#include "Vazadi_soc_top__Syms.h"

void Vazadi_soc_top::_eval(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vazadi_soc_top::_eval\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM._sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__37(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL._sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__37(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0._sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__37(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1._sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__37(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2._sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__37(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3._sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__37(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4._sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__37(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC._sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__37(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI._sequent__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__37(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__14(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__15(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__16(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__17(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__18(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__19(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__20(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__21(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__22(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__1(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__2(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__3(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__4(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__5(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__6(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__7(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__8(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__9(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__10(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__11(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__12(vlSymsp);
        vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__13(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    vlTOPp->_combo__TOP__13(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    if ((((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->__Vm_traceActivity[4U] = 1U;
        vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__8(vlSymsp);
    }
    if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__15(vlSymsp);
        vlTOPp->__Vm_traceActivity[5U] = 1U;
    }
    if ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->__Vm_traceActivity[6U] = 1U;
    }
    if (((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk)) 
         & (IData)(vlTOPp->__Vclklast__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) {
        vlTOPp->_sequent__TOP__17(vlSymsp);
    }
    vlTOPp->_combo__TOP__18(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__23(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__24(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__25(vlSymsp);
    vlTOPp->_combo__TOP__19(vlSymsp);
    if (((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
          | ((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_multiclk__TOP__20(vlSymsp);
        vlTOPp->__Vm_traceActivity[7U] = 1U;
    }
    if ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__21(vlSymsp);
        vlTOPp->__Vm_traceActivity[8U] = 1U;
    }
    if (((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk))) 
          | ((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_multiclk__TOP__22(vlSymsp);
        vlTOPp->__Vm_traceActivity[9U] = 1U;
    }
    vlTOPp->_combo__TOP__23(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__26(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__27(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__28(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__29(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__30(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__31(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__32(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__33(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__34(vlSymsp);
    vlTOPp->_combo__TOP__24(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__9(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__9(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__9(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__9(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__9(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__9(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__9(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__9(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__9(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__35(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__36(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__37(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__38(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__39(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__40(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__41(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__42(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__43(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__44(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__45(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__46(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__47(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__48(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__49(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__50(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__51(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__52(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__18(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__18(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__18(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__18(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__18(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__18(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__18(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__18(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__26(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__53(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__54(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__55(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__56(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__57(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__58(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__59(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__60(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__61(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__62(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__63(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__64(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__65(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__66(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__67(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__68(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__27(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__69(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__70(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__71(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__72(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__73(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__74(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__75(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__76(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__77(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d__78(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d__79(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d__80(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d__81(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__28(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__27(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__27(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__27(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__27(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__27(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__27(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__27(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__82(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__83(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__27(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__84(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__85(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__86(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__87(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__88(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__89(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__90(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__91(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__92(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__93(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__94(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__95(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d__96(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d__97(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__98(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__99(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__100(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__101(vlSymsp);
    vlTOPp->_combo__TOP__28(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__102(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d__103(vlSymsp);
    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d._settle__TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d__104(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__reset_ni = vlTOPp->reset_ni;
    vlTOPp->__Vclklast__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk;
}

VL_INLINE_OPT QData Vazadi_soc_top::_change_request(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vazadi_soc_top::_change_request\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vazadi_soc_top::_change_request_1(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vazadi_soc_top::_change_request_1\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req ^ vlTOPp->__Vchglast__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req)
         | (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all ^ vlTOPp->__Vchglast__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)
         | (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dfifo_rspready ^ vlTOPp->__Vchglast__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__dfifo_rspready));
    VL_DEBUG_IF( if(__req && ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req ^ vlTOPp->__Vchglast__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req))) VL_DBG_MSGF("        CHANGE: /home/waleed/azadi/src/brq_core/rtl/brq_idu.sv:265: azadi_soc_top.u_top.u_core.id_stage_i.lsu_req\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all ^ vlTOPp->__Vchglast__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all))) VL_DBG_MSGF("        CHANGE: /home/waleed/azadi/src/brq_core/rtl/brq_pmp.sv:35: azadi_soc_top.u_top.u_core.g_pmp.pmp_i.region_match_all\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dfifo_rspready ^ vlTOPp->__Vchglast__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__dfifo_rspready))) VL_DBG_MSGF("        CHANGE: /home/waleed/azadi/src/TileLink/rtl/tlul_socket_m1.sv:195: dfifo_rspready\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req;
    vlTOPp->__Vchglast__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all;
    vlTOPp->__Vchglast__TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__dfifo_rspready 
        = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dfifo_rspready;
    return __req;
}

#ifdef VL_DEBUG
void Vazadi_soc_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vazadi_soc_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset_ni & 0xfeU))) {
        Verilated::overWidthError("reset_ni");}
    if (VL_UNLIKELY((gpio_i & 0xfff00000U))) {
        Verilated::overWidthError("gpio_i");}
}
#endif  // VL_DEBUG
