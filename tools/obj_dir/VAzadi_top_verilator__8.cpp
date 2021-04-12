// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAzadi_top_verilator.h for the primary calling header

#include "VAzadi_top_verilator.h"
#include "VAzadi_top_verilator__Syms.h"

#include "verilated_dpi.h"

#ifdef VL_DEBUG
void VAzadi_top_verilator::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock_i & 0xfeU))) {
        Verilated::overWidthError("clock_i");}
    if (VL_UNLIKELY((reset_ni & 0xfeU))) {
        Verilated::overWidthError("reset_ni");}
    if (VL_UNLIKELY((gpio_i & 0xfff00000U))) {
        Verilated::overWidthError("gpio_i");}
    if (VL_UNLIKELY((uart_rx & 0xfeU))) {
        Verilated::overWidthError("uart_rx");}
    if (VL_UNLIKELY((sd_i & 0xfeU))) {
        Verilated::overWidthError("sd_i");}
}
#endif  // VL_DEBUG

void VAzadi_top_verilator::__Vmtask__5(bool even_cycle, void* symtab) {
    VAzadi_top_verilator__Syms* __restrict vlSymsp = (VAzadi_top_verilator__Syms*)symtab;
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(5);
    vlTOPp->_combo__TOP__65(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlTOPp->clock_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock_i)))) {
        vlTOPp->_sequent__TOP__66(vlSymsp);
    }
    vlTOPp->_combo__TOP__67(vlSymsp);
    if (((IData)(vlTOPp->clock_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock_i)))) {
        vlTOPp->_sequent__TOP__68(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__69(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    vlTOPp->_combo__TOP__70(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_4.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(3);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__73(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__75(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__77(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__78(vlSymsp);
        vlTOPp->__Vm_traceActivity[4U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__79(vlSymsp);
        vlTOPp->__Vm_traceActivity[5U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__83(vlSymsp);
        vlTOPp->__Vm_traceActivity[6U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__84(vlSymsp);
        vlTOPp->__Vm_traceActivity[7U] = 1U;
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__87(vlSymsp);
        vlTOPp->__Vm_traceActivity[8U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__88(vlSymsp);
        vlTOPp->__Vm_traceActivity[9U] = 1U;
    }
    vlTOPp->_combo__TOP__91(vlSymsp);
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__92(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__93(vlSymsp);
    }
    vlTOPp->_combo__TOP__94(vlSymsp);
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__96(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xbU] = 1U;
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__97(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_10.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_11.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_16.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_1.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_2.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(12);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__119(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__120(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((IData)(vlTOPp->reset_ni) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset_ni))))) {
        vlTOPp->_sequent__TOP__121(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__122(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__123(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x17U] = 1U;
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__124(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x18U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((IData)(vlTOPp->reset_ni) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset_ni))))) {
        vlTOPp->_sequent__TOP__125(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x19U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__126(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1aU] = 1U;
    }
    vlTOPp->_combo__TOP__127(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x1bU] = 1U;
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__128(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1cU] = 1U;
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__129(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1dU] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((IData)(vlTOPp->reset_ni) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset_ni))))) {
        vlTOPp->_sequent__TOP__130(vlSymsp);
    }
    vlTOPp->_combo__TOP__132(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__133(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1eU] = 1U;
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__134(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((IData)(vlTOPp->reset_ni) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset_ni))))) {
        vlTOPp->_sequent__TOP__135(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x1fU] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__136(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x20U] = 1U;
    }
    vlTOPp->_combo__TOP__137(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__138(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x21U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((IData)(vlTOPp->reset_ni) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset_ni))))) {
        vlTOPp->_sequent__TOP__140(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x22U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__141(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x23U] = 1U;
    }
    vlTOPp->_combo__TOP__142(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__143(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x24U] = 1U;
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__144(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((IData)(vlTOPp->reset_ni) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset_ni))))) {
        vlTOPp->_sequent__TOP__145(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x25U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__146(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x26U] = 1U;
    }
    vlTOPp->_combo__TOP__147(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__148(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x27U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__150(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x28U] = 1U;
    }
    vlTOPp->_combo__TOP__151(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__152(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x29U] = 1U;
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__153(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__154(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2aU] = 1U;
    }
    vlTOPp->_combo__TOP__155(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__156(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2bU] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__158(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2cU] = 1U;
    }
    vlTOPp->_combo__TOP__159(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__22(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__22(vlSymsp);
    }
    vlTOPp->_combo__TOP__160(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_6.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_15.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_23.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(23);
    vlTOPp->_combo__TOP__201(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x41U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_30.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_27.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(27);
    vlTOPp->_combo__TOP__352(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x7eU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_34.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_28.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(28);
    vlTOPp->_combo__TOP__353(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x7fU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_34.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_8.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_26.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(26);
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__212(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x49U] = 1U;
    }
    vlTOPp->_combo__TOP__213(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x4aU] = 1U;
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__214(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x4bU] = 1U;
    }
    vlTOPp->_combo__TOP__215(vlSymsp);
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__216(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x4cU] = 1U;
    }
    vlTOPp->_combo__TOP__217(vlSymsp);
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__218(vlSymsp);
    }
    vlTOPp->_combo__TOP__219(vlSymsp);
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__220(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x4dU] = 1U;
    }
    vlTOPp->_combo__TOP__221(vlSymsp);
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__222(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x4eU] = 1U;
    }
    vlTOPp->_combo__TOP__223(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_37.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_33.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_18.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(18);
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__390(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x95U] = 1U;
    }
    vlTOPp->_combo__TOP__391(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x96U] = 1U;
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__392(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x97U] = 1U;
    }
    vlTOPp->_combo__TOP__393(vlSymsp);
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__394(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x98U] = 1U;
    }
    vlTOPp->_combo__TOP__395(vlSymsp);
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__396(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x99U] = 1U;
    }
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM._combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__159(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_35.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_32.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(32);
    vlTOPp->_combo__TOP__397(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x9bU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_29.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(29);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__160(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x9aU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_9.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(9);
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__306(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x66U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VAzadi_top_verilator::__Vmtask__4(bool even_cycle, void* symtab) {
    VAzadi_top_verilator__Syms* __restrict vlSymsp = (VAzadi_top_verilator__Syms*)symtab;
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vlTOPp->__Vm_mt_4.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(4);
    if (((IData)(vlTOPp->clock_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock_i)))) {
        vlTOPp->_sequent__TOP__98(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__99(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xcU] = 1U;
    }
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__71(vlSymsp);
    vlTOPp->__Vm_traceActivity[0xdU] = 1U;
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__100(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xeU] = 1U;
    }
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__78(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__101(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xfU] = 1U;
    }
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3._combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__153(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_10.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_1.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_2.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_16.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(16);
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__163(vlSymsp);
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__164(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__165(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2dU] = 1U;
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__167(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2eU] = 1U;
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__168(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x2fU] = 1U;
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__169(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__170(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x30U] = 1U;
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__171(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__172(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x31U] = 1U;
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__173(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x32U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__174(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x33U] = 1U;
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__175(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x34U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__176(vlSymsp);
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__177(vlSymsp);
    }
    vlTOPp->_combo__TOP__178(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x35U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_20.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_23.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_13.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(24);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__202(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x42U] = 1U;
    }
    vlTOPp->_combo__TOP__203(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x43U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_27.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_28.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_30.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_21.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(21);
    vlTOPp->_combo__TOP__181(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x38U] = 1U;
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__182(vlSymsp);
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__185(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x39U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__186(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3aU] = 1U;
    }
    vlTOPp->_combo__TOP__189(vlSymsp);
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__190(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3bU] = 1U;
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__191(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__192(vlSymsp);
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__193(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3cU] = 1U;
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__194(vlSymsp);
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__195(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3dU] = 1U;
    }
    vlTOPp->_combo__TOP__196(vlSymsp);
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__197(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3eU] = 1U;
    }
    vlTOPp->_combo__TOP__198(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_25.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_26.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_19.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_17.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(17);
    vlTOPp->_combo__TOP__179(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x36U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_6.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(6);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__275(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__276(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__277(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x5eU] = 1U;
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__278(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__279(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__280(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__281(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x5fU] = 1U;
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__282(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))))) {
        vlTOPp->_sequent__TOP__283(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x60U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
            ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_multiclk__TOP__284(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__285(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x61U] = 1U;
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__286(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))))) {
        vlTOPp->_sequent__TOP__287(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__288(vlSymsp);
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk_2) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk_2)))) {
        vlTOPp->_sequent__TOP__291(vlSymsp);
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__293(vlSymsp);
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk_2) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk_2)))) {
        vlTOPp->_sequent__TOP__294(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__295(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x62U] = 1U;
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__296(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__299(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk_2) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk_2))))) {
        vlTOPp->_multiclk__TOP__300(vlSymsp);
    }
    vlTOPp->_combo__TOP__301(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_9.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_18.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_8.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(8);
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__358(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x85U] = 1U;
    }
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d._combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__123(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x86U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_32.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_34.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(34);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC._combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__158(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x83U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_35.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(35);
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__400(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x9cU] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__401(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x9dU] = 1U;
    }
    vlTOPp->_combo__TOP__403(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x9eU] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_36.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_37.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_40.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_39.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(39);
    vlTOPp->_combo__TOP__357(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x84U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_37.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_40.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_41.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_33.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(33);
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__410(vlSymsp);
    }
    vlTOPp->_combo__TOP__411(vlSymsp);
    vlTOPp->__Vm_traceActivity[0xa5U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_38.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(38);
    vlTOPp->_combo__TOP__407(vlSymsp);
    vlTOPp->__Vm_traceActivity[0xa2U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VAzadi_top_verilator::__Vmtask__11(bool even_cycle, void* symtab) {
    VAzadi_top_verilator__Syms* __restrict vlSymsp = (VAzadi_top_verilator__Syms*)symtab;
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vlTOPp->__Vm_mt_11.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(11);
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__104(vlSymsp);
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__105(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__106(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x11U] = 1U;
    }
    vlTOPp->_combo__TOP__109(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x12U] = 1U;
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__110(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__111(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x13U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__113(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x14U] = 1U;
    }
    vlTOPp->_combo__TOP__114(vlSymsp);
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__115(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__116(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x15U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__118(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x16U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_17.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_21.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_2.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(2);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__252(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__254(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x55U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))))) {
        vlTOPp->_sequent__TOP__255(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__256(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x56U] = 1U;
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__257(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x57U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__258(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x58U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))))) {
        vlTOPp->_sequent__TOP__259(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__260(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x59U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__262(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))))) {
        vlTOPp->_sequent__TOP__263(vlSymsp);
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i)))) {
        vlTOPp->_sequent__TOP__265(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__266(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x5aU] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__267(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x5bU] = 1U;
    }
    if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)))) {
        vlTOPp->_sequent__TOP__269(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x5cU] = 1U;
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i)))) {
        vlTOPp->_sequent__TOP__270(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0._settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__22(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))))) {
        vlTOPp->_sequent__TOP__271(vlSymsp);
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i)))) {
        vlTOPp->_sequent__TOP__273(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x5dU] = 1U;
    }
    if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)))) {
        vlTOPp->_sequent__TOP__274(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_6.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_27.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_28.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_20.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(20);
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__180(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x37U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_22.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_25.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_26.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_13.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(13);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1._sequent__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__157(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x67U] = 1U;
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__309(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x68U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__310(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x69U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__312(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x6aU] = 1U;
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__313(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__314(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x6bU] = 1U;
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__316(vlSymsp);
    }
    vlTOPp->_combo__TOP__317(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x6cU] = 1U;
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__318(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x6dU] = 1U;
    }
    vlTOPp->_combo__TOP__319(vlSymsp);
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__320(vlSymsp);
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__321(vlSymsp);
    }
    vlTOPp->_combo__TOP__322(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_27.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_19.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(19);
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__344(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x78U] = 1U;
    }
    vlTOPp->_combo__TOP__345(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x79U] = 1U;
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__346(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x7aU] = 1U;
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__347(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x7bU] = 1U;
    }
    vlTOPp->_combo__TOP__348(vlSymsp);
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__349(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x7cU] = 1U;
    }
    vlTOPp->_combo__TOP__350(vlSymsp);
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__351(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x7dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_18.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_30.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(30);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__354(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x80U] = 1U;
    }
    vlTOPp->_combo__TOP__355(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x81U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_34.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_15.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_29.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_14.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(14);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__323(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__325(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x6eU] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__326(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x6fU] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__327(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x70U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
            ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_multiclk__TOP__330(vlSymsp);
    }
    vlTOPp->_combo__TOP__331(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x71U] = 1U;
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__332(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x72U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__333(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x73U] = 1U;
    }
    vlTOPp->_combo__TOP__334(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__335(vlSymsp);
    }
    vlTOPp->_combo__TOP__336(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__337(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x74U] = 1U;
    }
    vlTOPp->_combo__TOP__338(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__339(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x75U] = 1U;
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i)))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_multiclk__TOP__340(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x76U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__341(vlSymsp);
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i)))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_multiclk__TOP__342(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x77U] = 1U;
    }
    vlTOPp->_combo__TOP__343(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_15.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_29.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_32.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_35.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_7.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(7);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__302(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x63U] = 1U;
    }
    vlTOPp->_combo__TOP__304(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x64U] = 1U;
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__305(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x65U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_39.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_29.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_32.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_35.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(31);
    vlTOPp->_combo__TOP__356(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x82U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_36.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(36);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__404(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x9fU] = 1U;
    }
    vlTOPp->_combo__TOP__405(vlSymsp);
    vlTOPp->__Vm_traceActivity[0xa0U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_41.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(41);
    vlTOPp->_combo__TOP__409(vlSymsp);
    vlTOPp->__Vm_traceActivity[0xa4U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VAzadi_top_verilator::__Vmtask__1(bool even_cycle, void* symtab) {
    VAzadi_top_verilator__Syms* __restrict vlSymsp = (VAzadi_top_verilator__Syms*)symtab;
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vlTOPp->__Vm_mt_1.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(1);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__224(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__225(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock)) 
         & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) {
        vlTOPp->_sequent__TOP__227(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__228(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x4fU] = 1U;
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__229(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x50U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__230(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x51U] = 1U;
    }
    if (((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock)) 
         & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) {
        vlTOPp->_sequent__TOP__231(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__232(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x52U] = 1U;
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__233(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock)) 
         & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) {
        vlTOPp->_sequent__TOP__235(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) {
        vlTOPp->_multiclk__TOP__236(vlSymsp);
    }
    vlTOPp->_combo__TOP__239(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x53U] = 1U;
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__240(vlSymsp);
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__c) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od__DOT__c)))) {
        vlTOPp->_sequent__TOP__241(vlSymsp);
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__c) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clock_div_od_2__DOT__c)))) {
        vlTOPp->_sequent__TOP__242(vlSymsp);
    }
    vlTOPp->_combo__TOP__243(vlSymsp);
    vlTOPp->_combo__TOP__246(vlSymsp);
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__247(vlSymsp);
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk_2) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk_2)))) {
        vlTOPp->_sequent__TOP__248(vlSymsp);
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk)))) {
        vlTOPp->_sequent__TOP__249(vlSymsp);
    }
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk_2) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__pwm_core__DOT__clk_2)))) {
        vlTOPp->_sequent__TOP__250(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->_sequent__TOP__251(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x54U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_6.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_7.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_14.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_30.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_10.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(10);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)))) {
        vlTOPp->_sequent__TOP__102(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x10U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_6.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_7.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_14.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_28.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_30.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_25.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(25);
    vlTOPp->_combo__TOP__204(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x44U] = 1U;
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_sequent__TOP__205(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x45U] = 1U;
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__206(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x46U] = 1U;
    }
    vlTOPp->_combo__TOP__207(vlSymsp);
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__208(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x47U] = 1U;
    }
    vlTOPp->_combo__TOP__209(vlSymsp);
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__210(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x48U] = 1U;
    }
    vlTOPp->_combo__TOP__211(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_33.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_22.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(22);
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq))) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk))))) {
        vlTOPp->_multiclk__TOP__199(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x3fU] = 1U;
    }
    vlTOPp->_combo__TOP__200(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x40U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_38.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_15.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(15);
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__359(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x87U] = 1U;
    }
    if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)))) {
        vlTOPp->_sequent__TOP__362(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__363(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x88U] = 1U;
    }
    if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)))) {
        vlTOPp->_sequent__TOP__364(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x89U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__366(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x8aU] = 1U;
    }
    if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)))) {
        vlTOPp->_sequent__TOP__367(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n))))) {
        vlTOPp->_sequent__TOP__368(vlSymsp);
    }
    if ((((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i)))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_multiclk__TOP__369(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x8bU] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__370(vlSymsp);
    }
    if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)))) {
        vlTOPp->_sequent__TOP__371(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x8cU] = 1U;
    }
    if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)))) {
        vlTOPp->_sequent__TOP__374(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x8dU] = 1U;
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n))))) {
        vlTOPp->_sequent__TOP__375(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x8eU] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__376(vlSymsp);
    }
    if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)))) {
        vlTOPp->_sequent__TOP__377(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x8fU] = 1U;
    }
    if ((((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i)))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_multiclk__TOP__378(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__379(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x90U] = 1U;
    }
    if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)))) {
        vlTOPp->_sequent__TOP__380(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x91U] = 1U;
    }
    if ((((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i)))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_multiclk__TOP__381(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x92U] = 1U;
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__382(vlSymsp);
    }
    if ((((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i)))) 
          | ((~ (IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni)) 
             & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_multiclk__TOP__383(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__384(vlSymsp);
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
          | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i)))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_multiclk__TOP__385(vlSymsp);
        vlTOPp->__Vm_traceActivity[0x93U] = 1U;
    }
    vlTOPp->_combo__TOP__386(vlSymsp);
    vlTOPp->__Vm_traceActivity[0x94U] = 1U;
    if ((((IData)(vlTOPp->__VinpClk__TOP__Azadi_top_verilator__DOT__clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__clock))) 
         | ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->__Vclklast__TOP__reset_ni)))) {
        vlTOPp->_sequent__TOP__387(vlSymsp);
    }
    vlTOPp->_combo__TOP__388(vlSymsp);
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_41.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_40.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(40);
    vlTOPp->_combo__TOP__408(vlSymsp);
    vlTOPp->__Vm_traceActivity[0xa3U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_37.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(37);
    vlTOPp->_combo__TOP__406(vlSymsp);
    vlTOPp->__Vm_traceActivity[0xa1U] = 1U;
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}
