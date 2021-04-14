// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAzadi_top_verilator.h for the primary calling header

#include "VAzadi_top_verilator.h"
#include "VAzadi_top_verilator__Syms.h"

#include "verilated_dpi.h"

//==========

void VAzadi_top_verilator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAzadi_top_verilator::eval\n"); );
    VAzadi_top_verilator__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/merl/github_repos/azadi/src/azadi_soc/rtl/Azadi_top_verilator.sv", 2, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VAzadi_top_verilator::_eval_initial_loop(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/merl/github_repos/azadi/src/azadi_soc/rtl/Azadi_top_verilator.sv", 2, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAzadi_top_verilator::__Vdpiimwrap_Azadi_top_verilator__DOT__u_jtagdpi__DOT__jtagdpi_create_TOP(std::string name, IData/*31:0*/ listen_port, QData/*63:0*/ (&jtagdpi_create__Vfuncrtn)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::__Vdpiimwrap_Azadi_top_verilator__DOT__u_jtagdpi__DOT__jtagdpi_create_TOP\n"); );
    // Body
    const char* name__Vcvt;
    for (size_t name__Vidx = 0; name__Vidx < 1; ++name__Vidx) name__Vcvt = name.c_str();
    int listen_port__Vcvt;
    for (size_t listen_port__Vidx = 0; listen_port__Vidx < 1; ++listen_port__Vidx) listen_port__Vcvt = listen_port;
    void* jtagdpi_create__Vfuncrtn__Vcvt;
    jtagdpi_create__Vfuncrtn__Vcvt = jtagdpi_create(name__Vcvt, listen_port__Vcvt);
    jtagdpi_create__Vfuncrtn = VL_CVT_VP_Q(jtagdpi_create__Vfuncrtn__Vcvt);
}

VL_INLINE_OPT void VAzadi_top_verilator::__Vdpiimwrap_Azadi_top_verilator__DOT__u_jtagdpi__DOT__jtagdpi_tick_TOP(QData/*63:0*/ ctx, CData/*0:0*/ (&tck), CData/*0:0*/ (&tms), CData/*0:0*/ (&tdi), CData/*0:0*/ (&trst_n), CData/*0:0*/ (&srst_n), CData/*0:0*/ tdo) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::__Vdpiimwrap_Azadi_top_verilator__DOT__u_jtagdpi__DOT__jtagdpi_tick_TOP\n"); );
    // Body
    void* ctx__Vcvt;
    for (size_t ctx__Vidx = 0; ctx__Vidx < 1; ++ctx__Vidx) ctx__Vcvt = VL_CVT_Q_VP(ctx);
    svBit tck__Vcvt;
    svBit tms__Vcvt;
    svBit tdi__Vcvt;
    svBit trst_n__Vcvt;
    svBit srst_n__Vcvt;
    svBit tdo__Vcvt;
    for (size_t tdo__Vidx = 0; tdo__Vidx < 1; ++tdo__Vidx) tdo__Vcvt = tdo;
    jtagdpi_tick(ctx__Vcvt, &tck__Vcvt, &tms__Vcvt, &tdi__Vcvt, &trst_n__Vcvt, &srst_n__Vcvt, tdo__Vcvt);
    tck = (1U & tck__Vcvt);
    tms = (1U & tms__Vcvt);
    tdi = (1U & tdi__Vcvt);
    trst_n = (1U & trst_n__Vcvt);
    srst_n = (1U & srst_n__Vcvt);
}

VL_INLINE_OPT void VAzadi_top_verilator::__Vdpiimwrap_Azadi_top_verilator__DOT__u_jtagdpi__DOT__jtagdpi_close_TOP(QData/*63:0*/ ctx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::__Vdpiimwrap_Azadi_top_verilator__DOT__u_jtagdpi__DOT__jtagdpi_close_TOP\n"); );
    // Body
    void* ctx__Vcvt;
    for (size_t ctx__Vidx = 0; ctx__Vidx < 1; ++ctx__Vidx) ctx__Vcvt = VL_CVT_Q_VP(ctx);
    jtagdpi_close(ctx__Vcvt);
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__65(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__65\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel 
        = ((0xffc00U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                        << 4U)) | (0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 0x10U)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__66(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__66\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__counter 
        = vlTOPp->Azadi_top_verilator__DOT__counter;
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__67(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__67\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart 
        = (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__resumereq = 0U;
    if ((1U > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound1 
            = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                     >> 0x1fU));
        if (VL_LIKELY((0U >= (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq 
                = (((~ ((IData)(1U) << (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq)) 
                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound1) 
                      << (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart)));
        }
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound2 
            = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                     >> 0x1eU));
        if (VL_LIKELY((0U >= (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__resumereq 
                = (((~ ((IData)(1U) << (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__resumereq)) 
                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound2) 
                      << (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart)));
        }
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__68(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__68\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__counter 
        = (0xfffffffU & ((IData)(1U) + vlTOPp->Azadi_top_verilator__DOT__counter));
    if ((0x176fU <= vlTOPp->Azadi_top_verilator__DOT__counter)) {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__counter = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__clock = (0xbb8U 
                                               > vlTOPp->Azadi_top_verilator__DOT__counter);
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__69(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__69\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fetch_enable_q 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_busy_q 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ctrl_busy) 
                | ((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                   | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req))) 
               | (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
              | (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_busy))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__intr_out 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__reg2hw[0U] 
               >> 2U) & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__reg2hw[0U] 
                         >> 3U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (((7U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
               > vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__threshold
               [0U]) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__intr_out) 
            << 0x10U) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q) 
                         << 0xfU));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__70(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__70\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs 
        = (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q);
    if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__clock)))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
               & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                   | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq)) 
                  | (0U != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)));
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__clock));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__73(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__73\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__75(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__75\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__77(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__77\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt 
            = (0xffffU & ((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip)) 
                                 | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt_zero)))
                           ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__divider)
                           : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt) 
                              - (IData)(1U))));
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt 
            = (0xffU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__tip)
                         ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__pos_edge)
                             ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt) 
                                - (IData)(1U)) : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt))
                         : ((0U != (0x7fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl)))
                             ? (0x7fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__ctrl))
                             : 0x80U)));
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__clgen__DOT__cnt = 0xffffU;
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__spi_host__DOT__shift__DOT__cnt = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
             & (((1U == (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                               >> 0xbU))) & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))) 
                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__reqid 
                = (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [5U][2U] >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__reqid = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__reqsz 
                = (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                         [5U][2U] >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__reqsz = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__error 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__err_internal;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__error = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__error 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__err_internal;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__error = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rspop 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rspop = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rdata 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)
                    ? 0xffffffffU : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rdata = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__reqid 
                = (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [0U][2U] >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__reqid = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__reqsz 
                = (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                         [0U][2U] >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__reqsz = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((2U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[1U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[1U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((4U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[2U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[2U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((8U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[3U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[3U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x10U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[4U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[4U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x20U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[5U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[5U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x40U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[6U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[6U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x80U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[7U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[7U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x100U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[8U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[8U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x200U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[9U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[9U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x400U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xaU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xaU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x800U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xbU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xbU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x1000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xcU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xcU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x2000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xdU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xdU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x4000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xeU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xeU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x8000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xfU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xfU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x10000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x10U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x10U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x20000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x11U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x11U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x40000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x12U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x12U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x80000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x13U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x13U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x100000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x14U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x14U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x15U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x15U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x400000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x16U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x16U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x800000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x17U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x17U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x1000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x18U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x18U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x2000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x19U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x19U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x4000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1aU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1aU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x8000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1bU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1bU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x10000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1cU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1cU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x20000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1dU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1dU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x40000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1eU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1eU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrequest)) 
             & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__drsp_fifo_o))) {
            vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrequest)) 
                 & (~ (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__drsp_fifo_o)))) {
                vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__78(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__78\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__req_i) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm__DOT__iccm__DOT__mem
            [((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U])
               ? (0xfffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                             << 0x19U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                          >> 7U))) : 0U)];
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__instr_valid 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__req_i));
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1 
            = ((((4U != (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                               >> 0x12U))) ? 0U : 1U) 
                << 0xbU) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__tlul_error) 
                             << 0xaU) | (0x3ffU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                   >> 5U))));
        if ((0x19U >= (0x1fU & ((IData)(0xdU) * (1U 
                                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ ((IData)(0x1fffU) << (0x1fU 
                                             & ((IData)(0xdU) 
                                                * (1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                    & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage) 
                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1) 
                      << (0x1fU & ((IData)(0xdU) * 
                                   (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk2__DOT__source_q 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk2__DOT__source_d));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__79(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__79\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q 
        = ((IData)(vlTOPp->reset_ni) ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_d)
            : 0U);
    if (vlTOPp->reset_ni) {
        if ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_d;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[0U];
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[1U];
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[2U];
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[3U];
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[4U];
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[5U];
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[6U];
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[7U];
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_d;
        } else {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0x7fffffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U] = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U] = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U] = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U] = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U] = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U] = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U] = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U] = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q = 0ULL;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q = 0U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q = 0ULL;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q = 0ULL;
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xbfffffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xdfffffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xefffffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xf7ffffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xfbffffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xfc00ffffU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xffff003fU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xffffffcfU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xfffffff7U & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xfffffffbU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (0xfffffffdU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q);
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = ((0xfffffffeU & vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q) 
                   | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d));
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q = 0ULL;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q = 0ULL;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q = 0ULL;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__83(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__83\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[3U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[4U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[5U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[6U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[7U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[8U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xaU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[9U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xbU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xaU];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xcU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xbU];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xdU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xcU];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xeU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xdU];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xfU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xeU];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x10U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xfU];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x11U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x10U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x12U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x11U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x13U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x12U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x14U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x13U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x15U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x14U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x16U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x15U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x17U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x16U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x18U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x17U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x19U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x18U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1aU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x19U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1bU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1aU];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1cU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1bU];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1dU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1cU];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1eU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1dU];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1fU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1eU];
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__84(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__84\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx 
        = (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q));
    if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q)))) {
                if ((1U & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                              >> 0x13U)))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be 
                        = ((0x40000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q)
                            ? 0xfU : ((0x20000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q)
                                       ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be) 
                                          | ((IData)(3U) 
                                             << (2U 
                                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx))))
                                       : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be) 
                                          | ((IData)(1U) 
                                             << (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx)))));
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we = 0U;
    if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we = 1U;
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req = 0U;
    if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req = 1U;
            }
        } else {
            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req = 1U;
            }
        }
    }
    if (((3U < (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q)))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[0U] 
        = (IData)((1ULL | (((QData)((IData)(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we)
                                              ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be)
                                              : 0xfU))) 
                            << 0x21U) | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q)) 
                                         << 1U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[1U] 
        = ((0xffffff80U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q 
                                    >> 2U)) << 7U)) 
           | (IData)(((1ULL | (((QData)((IData)(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we)
                                                  ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be)
                                                  : 0xfU))) 
                                << 0x21U) | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q)) 
                                             << 1U))) 
                      >> 0x20U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
        = ((0xffffffe0U & (0x4000U | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req) 
                                       << 0x15U) | 
                                      (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we)
                                         ? ((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be))
                                             ? 0U : 1U)
                                         : 4U) << 0x12U)))) 
           | (0x1fU & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q 
                                >> 2U)) >> 0x19U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
        = ((0x1fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U] 
        = ((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[0U]));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__87(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__87\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_id;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_id;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_c_insn_id 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__fp_rf_we_wb_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)
                ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                    ? 1U : 0U) : 2U);
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q 
            = (1U & (((((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                        & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                       & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                      & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id))) 
                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err))));
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__fp_rf_waddr_wb_q 
            = (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                        >> 7U));
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q 
            = (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                        >> 7U));
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__88(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__88\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q 
                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                 >> 1U)));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q 
                = (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                           >> 1U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)
            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)
            : 0U);
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_d));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__91(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__91\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__data_req_out = 0U;
    if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__data_req_out = 1U;
        } else {
            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__data_req_out = 1U;
            } else {
                if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__data_req_out = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__92(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__92\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_id 
            = (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
               << 1U);
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id 
            = (3U != (3U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata));
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__93(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__93\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req = 0U;
    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req 
                = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                         | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q)));
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__94(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__94\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_req 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__data_req_out) 
           & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err
              [1U]));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__96(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__96\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x26U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x7fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__mult_sel_ex = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 1U;
    if ((0x40U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x20U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x4000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 4U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                } else {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                } else {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                }
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0x4000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                                        = ((0x2000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                            ? ((0x1000U 
                                                & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                ? 0x16U
                                                : 0x14U)
                                            : ((0x1000U 
                                                & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                ? 0x15U
                                                : 0x13U));
                                } else {
                                    if ((1U & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xdU)))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                                            = ((0x1000U 
                                                & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                ? 0x18U
                                                : 0x17U);
                                    }
                                }
                                if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                                } else {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 2U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0x80000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((0x40000000U 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x15U)))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 0xcU;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            }
                                                            if (
                                                                (0x100000U 
                                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod = 1U;
                                                            }
                                                        } else {
                                                            if (
                                                                ((0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                      >> 0x14U))) 
                                                                 | (0U 
                                                                    != 
                                                                    (7U 
                                                                     & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                        >> 0xcU))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 0U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (1U 
                                                                 == 
                                                                 ((0xf8U 
                                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                      >> 0x11U)) 
                                                                  | (7U 
                                                                     & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                        >> 0xcU))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 9U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            }
                                                        } else {
                                                            if (
                                                                (0U 
                                                                 == 
                                                                 ((0xf8U 
                                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                      >> 0x11U)) 
                                                                  | (7U 
                                                                     & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                        >> 0xcU))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 2U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            } else {
                                                                if (
                                                                    (1U 
                                                                     == 
                                                                     ((0xf8U 
                                                                       & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                          >> 0x11U)) 
                                                                      | (7U 
                                                                         & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                            >> 0xcU))))) {
                                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 9U;
                                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                 >> 0x19U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xfU 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                                >> 0x15U))))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 0xcU;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            }
                                                            if (
                                                                (0x100000U 
                                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x15U)))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 0xbU;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            }
                                                            if (
                                                                (0x100000U 
                                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod = 1U;
                                                            }
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xfU 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                                >> 0x15U))))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 0xcU;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            }
                                                            if (
                                                                (0x100000U 
                                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x20000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x1cU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (1U 
                                                                 & ((~ 
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                      >> 0xeU)) 
                                                                    | (3U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                           >> 0xcU)))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 8U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            }
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & ((~ 
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                      >> 0xeU)) 
                                                                    | (3U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                           >> 0xcU)))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 8U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x40000000U 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x1dU)))) {
                                            if ((0x10000000U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x14U)))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 5U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            }
                                                        } else {
                                                            if (
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x14U)))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 5U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x14U)))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 0xaU;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            }
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & ((0U 
                                                                     != 
                                                                     (0xfU 
                                                                      & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                         >> 0x15U))) 
                                                                    | (~ 
                                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                        >> 0x14U))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 0xaU;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x20000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x1cU)))) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (0U 
                                                                 != 
                                                                 (3U 
                                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0xdU)))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 7U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            }
                                                        } else {
                                                            if (
                                                                (0U 
                                                                 != 
                                                                 (3U 
                                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0xdU)))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 7U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (1U 
                                                                 & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0xeU) 
                                                                    | (3U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                           >> 0xcU)))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 6U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            }
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0xeU) 
                                                                    | (3U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                           >> 0xcU)))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 6U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 4U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                        } else {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 4U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 3U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                        } else {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 3U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 2U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod = 1U;
                                                        } else {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 2U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod = 1U;
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1aU)))) {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 2U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                        } else {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 2U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((1U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x19U)))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 1U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod = 1U;
                                } else {
                                    if ((0U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x19U)))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 1U;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod = 1U;
                                    }
                                }
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((1U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x19U)))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 1U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                } else {
                                    if ((0U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x19U)))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 1U;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((1U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x19U)))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod = 1U;
                                } else {
                                    if ((0U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x19U)))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 0U;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod = 1U;
                                    }
                                }
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((1U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x19U)))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod = 0U;
                                } else {
                                    if ((0U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x19U)))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_operator = 0U;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_alu_op_b_mux_sel_o = 0U;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_alu_op_mod = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                                if ((1U & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x1aU)))) {
                                    if ((1U & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x1fU)))) {
                                        if ((0x40000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 1U;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex = 1U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex = 1U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__mult_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__mult_sel_ex = 1U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__mult_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__mult_sel_ex = 1U;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                                                                    = 
                                                                    ((0x4000U 
                                                                      & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                                      ? 
                                                                     ((0x2000U 
                                                                       & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                                        ? 4U
                                                                        : 3U)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                                        ? 9U
                                                                        : 2U))
                                                                      : 
                                                                     ((0x2000U 
                                                                       & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                                        ? 0x26U
                                                                        : 0x25U)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                                        ? 0xaU
                                                                        : 0U)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                if ((3U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    if ((2U == (7U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    }
                                }
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                if ((1U & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0xeU)))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                if ((0x4000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((0x2000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                                            = ((0x1000U 
                                                & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                ? 4U
                                                : 3U);
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x1bU)))) {
                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 9U;
                                            } else {
                                                if (
                                                    (8U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 2U;
                                        }
                                    }
                                } else {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                                        = ((0x2000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                            ? ((0x1000U 
                                                & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                ? 0x26U
                                                : 0x25U)
                                            : ((0x1000U 
                                                & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                ? 0xaU
                                                : 0U));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((3U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                } else {
                                    if ((2U == (7U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    }
                                }
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__97(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__97\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm 
        = ((5U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                         >> 0xcU))) | (6U == (7U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0xcU))));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__98(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__98\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__counter = vlTOPp->__Vdly__Azadi_top_verilator__DOT__counter;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__99(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__99\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending;
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_req) {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_rsp)))) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding 
                    = (0x1ffffU & ((IData)(1U) + vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding));
            }
        } else {
            if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_rsp) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding 
                    = (0x1ffffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding 
                                   - (IData)(1U)));
            }
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                    [0xdU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_source 
                = (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0xdU][2U] >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_source = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                    [0xdU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_opcode 
                = (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [0xdU][2U] >> 0x12U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_opcode = 4U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                    [0xdU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_size 
                = (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                         [0xdU][2U] >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_size = 0U;
    }
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_req_pending) 
               | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending)) 
              & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                 [0xdU][0U])));
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rspop 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rspop = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rdata 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__err_internal)
                    ? 0xffffffffU : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__rdata);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rdata = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__error 
                = (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re) 
                      | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                     & (~ (IData)((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))))) 
                    | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)) 
                   | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__error = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__error 
                = (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                      | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
                     & (~ (IData)((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))))) 
                    | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                   | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__error = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__outstanding = 1U;
        } else {
            if ((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar 
                                >> 0x33U)) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                       [5U][0U]))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__outstanding = 0U;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__outstanding = 1U;
        } else {
            if ((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar 
                                >> 0x33U)) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                       [2U][0U]))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__outstanding = 0U;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 1U;
        } else {
            if ((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                >> 0x33U)) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                       [6U][0U]))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 1U;
        } else {
            if ((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__tl_reg_d2h 
                                >> 0x33U)) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                       [0U][0U]))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_req) {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_rsp)))) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding 
                    = (0x1ffffU & ((IData)(1U) + vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding));
            }
        } else {
            if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_rsp) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding 
                    = (0x1ffffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding 
                                   - (IData)(1U)));
            }
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_req) {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_rsp)))) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding 
                    = (0x1ffffU & ((IData)(1U) + vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding));
            }
        } else {
            if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_rsp) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding 
                    = (0x1ffffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding 
                                   - (IData)(1U)));
            }
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                    [0xaU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_source 
                = (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [0xaU][2U] >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_source = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                    [0xaU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_opcode 
                = (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [0xaU][2U] >> 0x12U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_opcode = 4U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                    [0xaU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_size 
                = (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                         [0xaU][2U] >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_size = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                    [0xbU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_source 
                = (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [0xbU][2U] >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_source = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                    [0xbU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_opcode 
                = (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [0xbU][2U] >> 0x12U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_opcode = 4U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                    [0xbU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_size 
                = (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                         [0xbU][2U] >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_size = 0U;
    }
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending) 
               | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending)) 
              & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                 [0xaU][0U])));
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending) 
               | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending)) 
              & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                 [0xbU][0U])));
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_req) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__dev_select_outstanding 
                = (0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__dev_select_outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_req) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__dev_select_outstanding 
                = (0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__dev_select_outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((2U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[1U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[1U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((4U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[2U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[2U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((8U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[3U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[3U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x10U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[4U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[4U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x20U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x40U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x80U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[7U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[7U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x100U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[8U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[8U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x200U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[9U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[9U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x400U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0xaU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0xaU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x800U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0xbU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0xbU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x1000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0xcU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0xcU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x2000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0xdU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0xdU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x4000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0xeU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0xeU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x8000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0xfU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0xfU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x10000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x10U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x10U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x20000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x11U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x11U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x40000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x12U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x12U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x80000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x13U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x13U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x100000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x14U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x14U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x15U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x15U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x400000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x16U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x16U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x800000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x17U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x17U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x1000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x18U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x18U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x2000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x19U] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x19U] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x4000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x1aU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x1aU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x8000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x1bU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x1bU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x10000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x1cU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x1cU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x20000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x1dU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x1dU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x40000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x1eU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x1eU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((0x80000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec)) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x1fU] 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[5U] = 0x41a00000U;
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[6U] = 0x41200000U;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[0x1fU] = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrequest)) 
             & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o))) {
            vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrequest)) 
                 & (~ (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o)))) {
                vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__100(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__100\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__101(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__101\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                    [0xdU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_req_pending = 1U;
        } else {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_req_pending = 0U;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_req_pending = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                    [0xaU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending = 1U;
        } else {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending = 0U;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                    [0xbU][2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending = 1U;
        } else {
            if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending = 0U;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__102(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__102\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1bU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 1U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 2U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 3U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 4U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 6U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 7U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 8U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 9U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0xaU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0xbU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0xcU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0xeU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0xfU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x10U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x11U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x12U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x13U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x14U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x15U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x16U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x17U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x18U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x19U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1aU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1bU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1cU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1dU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1eU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x1fU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we) 
                   & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U]);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 1U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 2U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 3U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 4U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 6U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 7U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 9U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0xaU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0xbU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0xcU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0xeU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0xfU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 0x10U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we)
                    ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__msip0_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__msip0_we) 
                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                      >> 1U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio11_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio11_we)
                    ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio15_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio15_we)
                    ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio17_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio17_we)
                    ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio18_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio18_we)
                    ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio19_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio19_we)
                    ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio20_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio20_we)
                    ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio21_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio21_we)
                    ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio22_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio22_we)
                    ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio23_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio23_we)
                    ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio24_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio24_we)
                    ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio25_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio25_we)
                    ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio26_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio26_we)
                    ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio27_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio27_we)
                    ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio28_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio28_we)
                    ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio31_we) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio31_we)
                    ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                              << 0x1fU) | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                           >> 1U)))
                    : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid 
                = (0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                            >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz 
                = (3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                         >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)
                    ? 0xffffffffU : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error 
                = (((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                      | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                     & (~ (IData)((0U != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) 
                    | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__wr_err)) 
                   | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 1U;
        } else {
            if ((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                >> 0x33U)) & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U]))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rspop 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rspop = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rdata 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__err_internal)
                    ? 0xffffffffU : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__rdata);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rdata = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__reqid 
                = (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [2U][2U] >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__reqid = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__reqsz 
                = (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                         [2U][2U] >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__reqsz = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqid 
                = (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                            [6U][2U] >> 5U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqid = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqsz 
                = (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                         [6U][2U] >> 0xdU));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqsz = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rspop 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rspop = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rdata 
                = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)
                    ? 0xffffffffU : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rdata = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrequest)) 
             & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o))) {
            vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrequest)) 
                 & (~ (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o)))) {
                vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
        = (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
            << 0x33U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop)) 
                          << 0x30U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz)) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar 
        = (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__outstanding)) 
            << 0x33U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rspop)) 
                          << 0x30U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__reqsz)) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__reqid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__rdata)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__error) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_pwm__DOT__u_reg_if__DOT__outstanding)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar 
        = (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__outstanding)) 
            << 0x33U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rspop)) 
                          << 0x30U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__reqsz)) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__reqid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__rdata)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__error) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_spi_host__DOT__u_reg_if__DOT__outstanding)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
        = (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
            << 0x33U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rspop)) 
                          << 0x30U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqsz)) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__tl_reg_d2h 
        = (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
            << 0x33U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rspop)) 
                          << 0x30U) | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__reqsz)) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__reqid)) 
                                         << 0x23U) 
                                        | (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))))))))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h)))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                             >> 0x33U))))) 
              << 0x33U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xff803ffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_source) 
                               << 1U))) << 0x22U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xf07ffffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_size)) 
              << 0x2bU));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
        = ((0x8ffffffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((4U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_opcode))
                                ? 1U : 0U))) << 0x30U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__tl_reg_d2h;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[5U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[6U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h;
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hfifo_rspvalid 
        = ((2U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hfifo_rspvalid)) 
           | (1U & ((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                             >> 0x33U)) & (~ (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                      >> 0x23U))))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hfifo_rspvalid 
        = ((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hfifo_rspvalid)) 
           | (2U & (((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                              >> 0x33U)) & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                    >> 0x23U))) 
                    << 1U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
        = ((0x7ffffffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o) 
           | ((QData)((IData)(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_req_pending) 
                               | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending)))) 
              << 0x33U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[3U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [3U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[4U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [4U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[5U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [5U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[6U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [6U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[7U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [7U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[8U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [8U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[9U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [9U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[0xaU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [0xaU];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[0xbU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [0xbU];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[0xcU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
        [0xcU];
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [0U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [1U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [2U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [2U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [2U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [2U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [2U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [3U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [3U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [3U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [3U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [3U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [4U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [4U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [4U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [4U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [4U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [5U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [5U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [5U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [5U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [5U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [6U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [6U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [6U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [6U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [6U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [7U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [7U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [7U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [7U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [7U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [8U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [8U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [8U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [8U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [8U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [9U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [9U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [9U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [9U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [9U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [0xaU])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [0xaU] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [0xaU] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0xaU] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [0xaU] 
                                             >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [0xbU])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [0xbU] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [0xbU] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0xbU] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [0xbU] 
                                             >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                           [0xcU])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                           [0xcU] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                          [0xcU] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0xcU] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [0xcU] 
                                             >> 0x33U))))) 
              << 0x33U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[3U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[4U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[5U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[6U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[7U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[8U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[9U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[0xaU] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[0xbU] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[0xcU] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__104(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__104\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__105(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__105\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
            & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_d;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err_plus2 
            = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                     & ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                         ? (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                             >> 1U) & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                         : (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err) 
                             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                            & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))));
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__106(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__106\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid) 
              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready)));
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DN;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S 
            = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid) 
                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready)) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DN;
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP = 0ULL;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP = 0ULL;
    }
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready 
        = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)) 
                 | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                     ? (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_SB))
                     : (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Final_state_S) 
                         | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)) 
                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready)))));
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_en) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_d;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DN;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DN;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S 
            = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Final_state_S) 
                | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id))
                ? 0U : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S)
                         ? (0x3fU & ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S)))
                         : 0U));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DN;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SN) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SN) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SN) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SN) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SN) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SN) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DN) 
               & 1U);
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP = 0ULL;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)
                ? 0U : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S 
            = (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)) 
                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid) 
                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready)) 
                   | ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_done)) 
                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S)))) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S 
            = (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)) 
                & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid) 
                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready)) 
                   | ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_done)) 
                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S)))) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DN;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S 
            = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt)
                : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_q 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set_d) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d) 
               & 1U);
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP = 0ULL;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = 0x10U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq)
            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d)
            : 3U);
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = 0x40000003U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q 
                = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q 
                = (1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
             & (0x7a0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_addr)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q 
                = ((2U > vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                    ? (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                    : 1U);
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_load_err) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_store_err) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d) 
               & 1U);
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q 
            = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d) 
               & 1U);
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                = (0xffffffU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                        >> 0xaU)));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__109(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__109\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_1 
            = (0x3ffffffffffffffULL & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                        ? (QData)((IData)(
                                                          (0x1fffU 
                                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt1)))))
                                        : (QData)((IData)(
                                                          (0xffffU 
                                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt1)))))));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_2 
            = (0x3ffffffffffffffULL & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                        ? (QData)((IData)(
                                                          (0x1fffU 
                                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt2)))))
                                        : (QData)((IData)(
                                                          (0xffffU 
                                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt2)))))));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_0 
            = (0x3ffffffffffffffULL & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                        ? (QData)((IData)(
                                                          (0x1fffU 
                                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt0)))))
                                        : (QData)((IData)(
                                                          (0xffffU 
                                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt0)))))));
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_1 
            = (0x3ffffffffffffffULL & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                        ? (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt1)
                                        : (QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt1)))))));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_2 
            = (0x3ffffffffffffffULL & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                        ? (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt2)
                                        : (QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt2)))))));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_0 
            = (0x3ffffffffffffffULL & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                        ? (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt0)
                                        : (QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt0)))))));
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__110(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__110\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__111(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__111\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_3 
        = (0x3ffffffffffffffULL & ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                    ? ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                        ? (QData)((IData)(
                                                          (0x1fffU 
                                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3)))))
                                        : (QData)((IData)(
                                                          (0xffffU 
                                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3))))))
                                    : ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                        ? (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3)
                                        : (QData)((IData)(
                                                          (0x1fffffffU 
                                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__First_iteration_cell_div_a_D 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
            ? (((QData)((IData)((0x1ffU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                   >> 0x2dU))))) 
                << 0x31U) | (((QData)((IData)((1U & 
                                               ((3U 
                                                 == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                 ? 
                                                (3U 
                                                 == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                 : (IData)(
                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                            >> 0x2cU)))))) 
                              << 0x30U) | (((QData)((IData)(
                                                            (3U 
                                                             & (IData)(
                                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                                        >> 0x2aU))))) 
                                            << 0x2eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((2U 
                                                                    == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    ? 
                                                                   (2U 
                                                                    == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    : (IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                                               >> 0x29U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                                              >> 0x1dU))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((0U 
                                                                          == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                          ? 
                                                                         (0U 
                                                                          == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                          : (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP 
                                                                                >> 0x1cU)))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((0xfffffff0U 
                                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP) 
                                                                           << 4U)) 
                                                                       | ((1U 
                                                                           == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                          << 3U))))))))))
            : (((QData)((IData)((0x1ffU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                   >> 0x30U))))) 
                << 0x31U) | (((QData)((IData)((1U & 
                                               ((3U 
                                                 == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                 ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)
                                                 : (IData)(
                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                            >> 0x2fU)))))) 
                              << 0x30U) | (((QData)((IData)(
                                                            (3U 
                                                             & (IData)(
                                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                                        >> 0x2dU))))) 
                                            << 0x2eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((2U 
                                                                    == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)
                                                                    : (IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                                               >> 0x2cU)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                                              >> 0x20U))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((0U 
                                                                          == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)
                                                                          : (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                                                >> 0x1fU)))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((0xfffffff0U 
                                                                        & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP 
                                                                                >> 3U)) 
                                                                           << 4U)) 
                                                                       | (((1U 
                                                                            == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)) 
                                                                          << 3U)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
        = (0x3fffffffffffffULL & ((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                   ? ((QData)((IData)(
                                                      (0x1ffffffU 
                                                       & (~ (IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                                                     >> 0x1dU)))))) 
                                      << 0x1dU) : (
                                                   (1U 
                                                    == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                    ? 
                                                   (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xfffU 
                                                                      & (~ (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                                                                >> 0x2aU)))))) 
                                                     << 0x2aU)
                                                     : 
                                                    ((QData)((IData)(
                                                                     (0x1ffU 
                                                                      & (~ (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                                                                >> 0x2dU)))))) 
                                                     << 0x2dU)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
        = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP))
            ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP
            : (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP 
               << 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0xfU) : ((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                    >> 0xcU))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q 
        = ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q)) 
           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q 
        = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
              << 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run = 0U;
    if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__113(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__113\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[0U] 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S)
            ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                ? 0ULL : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP)
            : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__First_iteration_cell_div_a_D);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB 
        = (((QData)((IData)((0x1ffU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                               >> 0x2dU))))) 
            << 0x31U) | (((QData)((IData)((1U & ((3U 
                                                  == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                  ? 
                                                 (3U 
                                                  == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                  : (IData)(
                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                                             >> 0x2cU)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (3U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                                                    >> 0x2aU))))) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((2U 
                                                              == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                              ? 
                                                             (2U 
                                                              == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                              : (IData)(
                                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                                                         >> 0x29U)))))) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            (0xfffU 
                                                             & (IData)(
                                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                                                        >> 0x1dU))))) 
                                            << 0x21U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((0U 
                                                                    == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    ? 
                                                                   (0U 
                                                                    == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    : (IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB 
                                                                               >> 0x1cU)))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0xfffffff0U 
                                                                  & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB) 
                                                                     << 4U)) 
                                                                 | ((1U 
                                                                     == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                    << 3U))))))))));
    if ((0x20U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
            = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                             >> 0x34U)));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
            = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                             >> 0x32U)));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
            = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                             >> 0x30U)));
    } else {
        if ((0x10U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
            if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                    = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                     >> 0x34U)));
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                    = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                     >> 0x32U)));
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                    = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                     >> 0x30U)));
            } else {
                if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                        = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                         >> 0x34U)));
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                        = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                         >> 0x32U)));
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                        = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                         >> 0x30U)));
                } else {
                    if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x34U)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x32U)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x30U)));
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        }
                    }
                }
            }
        } else {
            if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                    if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        }
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] = 0U;
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 4U)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 2U)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm));
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                    if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0xaU)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 8U)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 6U)));
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x10U)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0xeU)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0xcU)));
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x16U)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x14U)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x12U)));
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x1cU)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x1aU)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x18U)));
                        }
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x22U)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x20U)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x1eU)));
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x28U)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x26U)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x24U)));
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S))) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x2eU)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x2cU)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x2aU)));
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x34U)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x32U)));
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2U] 
                                = (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm 
                                                 >> 0x30U)));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__114(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__114\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq 
        = (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
            & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q))) 
           & ((0U != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs) 
              & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                 >> 5U)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__115(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__115\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set) 
         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_in_ready) 
            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw)))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__116(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__116\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO 
        = ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (1U & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                    [0U])));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO 
        = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (2U & ((~ ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                         [0U] >> 1U) ^ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                        [0U])) << 1U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO 
        = ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (1U & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                    [1U])));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO 
        = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (2U & ((~ ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                         [1U] >> 1U) ^ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                        [1U])) << 1U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO 
        = ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (1U & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                    [2U])));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO 
        = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO)) 
           | (2U & ((~ ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                         [2U] >> 1U) ^ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                        [2U])) << 1U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_branch 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err) 
           & (6U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__118(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__118\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match 
        = ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
              & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                  << 1U) == vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                 [0U])));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match 
        = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match)) 
           | (0xfffffffeU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
                             & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                  << 1U) == vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                 [1U]) << 1U))));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__119(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__119\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__120(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__120\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0 = 0U;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__121(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__121\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main;
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__122(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__122\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__123(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__123\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe = 0U;
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrequest)) 
             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (6U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrequest)) 
                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrequest)) 
             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (6U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrequest)) 
                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          ? (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
             & (((1U == (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                               >> 0xbU))) & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))) 
                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          ? (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          ? (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrequest)) 
             & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o))) {
            vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrequest)) 
                 & (~ (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o)))) {
                vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrequest)) 
             & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o))) {
            vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrequest)) 
                 & (~ (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o)))) {
                vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__124(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__124\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr) {
        vlTOPp->__Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dmi_rsp;
        vlTOPp->__Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0 
            = (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr));
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d;
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__req_i) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rdata_o 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem
            [vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__addr_i];
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
            = ((((4U != (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                               >> 0x12U))) ? 0U : 1U) 
                << 0xbU) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__error_internal) 
                             << 0xaU) | (0x3ffU & (
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                   >> 5U))));
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage 
            = ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword)) 
               << 1U);
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q 
            = (0x1fU & (IData)(((QData)((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                 << 2U))) 
                                >> 3U)));
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rvalid_o 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__we_i)) 
              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__req_i)));
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
            = (0x1eU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U]);
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT____Vlvbound1 
            = ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
               << 1U);
        if ((0x83U >= (0xffU & ((IData)(0x21U) * (3U 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            VL_ASSIGNSEL_WIIQ(33,(0xffU & ((IData)(0x21U) 
                                           * (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))), vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage, vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT____Vlvbound1);
        }
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT____Vlvbound1 
            = ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword)) 
               << 1U);
        if ((0x41U >= (0x7fU & ((IData)(0x21U) * (1U 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            VL_ASSIGNSEL_WIIQ(33,(0x7fU & ((IData)(0x21U) 
                                           * (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))), vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage, vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT____Vlvbound1);
        }
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT____Vlvbound1 
            = ((((4U != (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                               >> 0x12U))) ? 0U : 1U) 
                << 0xbU) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                             << 0xaU) | (0x3ffU & (
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 5U))));
        if ((0x33U >= (0x3fU & ((IData)(0xdU) * (3U 
                                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ (0x1fffULL << (0x3fU & ((IData)(0xdU) 
                                               * (3U 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                    & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage) 
                   | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT____Vlvbound1)) 
                      << (0x3fU & ((IData)(0xdU) * 
                                   (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
        }
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT____Vlvbound1 
            = (0x1eU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U]);
        if ((0x13U >= (0x1fU & ((IData)(5U) * (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ ((IData)(0x1fU) << (0x1fU & 
                                           ((IData)(5U) 
                                            * (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                    & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT____Vlvbound1) 
                      << (0x1fU & ((IData)(5U) * (3U 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
        }
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1 
            = (0x1eU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U]);
        if ((9U >= (0xfU & ((IData)(5U) * (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                = (((~ ((IData)(0x1fU) << (0xfU & ((IData)(5U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage)) 
                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1) 
                      << (0xfU & ((IData)(5U) * (1U 
                                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
        }
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__125(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__125\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_q 
        = ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_d));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_q 
        = ((~ (IData)(vlTOPp->reset_ni)) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_d));
    if (vlTOPp->reset_ni) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q0 = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q1 = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q2 = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q3 = 0U;
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))) {
            if ((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q0 
                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte;
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count = 1U;
            } else {
                if ((1U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q1 
                        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte;
                    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count = 2U;
                } else {
                    if ((2U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count))) {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q2 
                            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte;
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count = 3U;
                    } else {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q3 
                            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte;
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count = 0U;
                    }
                }
            }
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_d;
        }
        if ((2U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q 
                = (0x3fffU & ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_d)));
        }
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__126(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__126\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset_ni) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr) {
            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr 
                = (7U & ((3U == (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr)))
                          ? (4U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr) 
                                       >> 2U)) << 2U))
                          : ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr))));
        }
    } else {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q 
        = ((IData)(vlTOPp->reset_ni) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__fwd_rom_q 
        = ((IData)(vlTOPp->reset_ni) & (0x800U <= (0xffcU 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                      << 2U))));
    if (vlTOPp->reset_ni) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_q 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__rvalid 
            = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req) 
                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we))) 
               & 1U);
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_q = 0ULL;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__rvalid = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          ? ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          : (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 1U)) << 1U))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
             & (((1U == (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                               >> 0xbU))) & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))) 
                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          : (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          ? ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          : (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 1U)) << 1U))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          ? ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))
                          : (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                       >> 1U)) << 1U))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          : (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
    if (vlTOPp->reset_ni) {
        if (((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = (3U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          ? ((IData)(1U) + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                          : (2U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                       >> 1U)) << 1U))));
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__127(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__127\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((6U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                 | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req) 
                    >> 1U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((5U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                  >> 1U) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req) 
                            >> 2U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((6U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                 | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req) 
                    >> 1U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((5U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                  >> 1U) | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req) 
                            >> 2U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1) 
              << 2U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((2U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (2U & (((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)))));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__128(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__128\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__129(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__129\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[vlTOPp->__Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0] 
            = vlTOPp->__Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__130(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__130\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count;
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__132(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__132\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (6U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (6U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__133(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__133\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (4U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (4U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (4U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__134(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__134\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*1215:0*/ __Vtemp1086[38];
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rom_rdata = 0ULL;
    if ((0x13U > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q))) {
        __Vtemp1086[0U] = 0xc0006fU;
        __Vtemp1086[1U] = 0x7c0006fU;
        __Vtemp1086[2U] = 0x4c0006fU;
        __Vtemp1086[3U] = 0xff0000fU;
        __Vtemp1086[4U] = 0x7b241073U;
        __Vtemp1086[5U] = 0x7b351073U;
        __Vtemp1086[6U] = 0x517U;
        __Vtemp1086[7U] = 0xc55513U;
        __Vtemp1086[8U] = 0xc51513U;
        __Vtemp1086[9U] = 0xf1402473U;
        __Vtemp1086[0xaU] = 0x10852023U;
        __Vtemp1086[0xbU] = 0xa40433U;
        __Vtemp1086[0xcU] = 0x40044403U;
        __Vtemp1086[0xdU] = 0x147413U;
        __Vtemp1086[0xeU] = 0x2041c63U;
        __Vtemp1086[0xfU] = 0xf1402473U;
        __Vtemp1086[0x10U] = 0xa40433U;
        __Vtemp1086[0x11U] = 0x40044403U;
        __Vtemp1086[0x12U] = 0x247413U;
        __Vtemp1086[0x13U] = 0xfa041ce3U;
        __Vtemp1086[0x14U] = 0xfd5ff06fU;
        __Vtemp1086[0x15U] = 0x517U;
        __Vtemp1086[0x16U] = 0xc55513U;
        __Vtemp1086[0x17U] = 0xc51513U;
        __Vtemp1086[0x18U] = 0x10052623U;
        __Vtemp1086[0x19U] = 0x7b302573U;
        __Vtemp1086[0x1aU] = 0x7b202473U;
        __Vtemp1086[0x1bU] = 0x100073U;
        __Vtemp1086[0x1cU] = 0x10052223U;
        __Vtemp1086[0x1dU] = 0x7b302573U;
        __Vtemp1086[0x1eU] = 0x7b202473U;
        __Vtemp1086[0x1fU] = 0xa85ff06fU;
        __Vtemp1086[0x20U] = 0xf1402473U;
        __Vtemp1086[0x21U] = 0x10852423U;
        __Vtemp1086[0x22U] = 0x7b302573U;
        __Vtemp1086[0x23U] = 0x7b202473U;
        __Vtemp1086[0x24U] = 0x7b200073U;
        __Vtemp1086[0x25U] = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rom_rdata 
            = ((0x4bfU >= (0x7ffU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                     << 6U))) ? (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                       << 6U)))
                                                   ? 0ULL
                                                   : 
                                                  ((QData)((IData)(
                                                                   __Vtemp1086[
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (0x3eU 
                                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                                        << 1U)))])) 
                                                   << 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                        << 6U))))) 
                                                 | (((QData)((IData)(
                                                                     __Vtemp1086[
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0x3eU 
                                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                                          << 1U)))])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                           << 6U)))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                           << 6U))))) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp1086[
                                                                       (0x3eU 
                                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                                           << 1U))])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                           << 6U)))))
                : 0ULL);
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__135(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__135\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_d 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_cntrl_data 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q0) 
            << 0x18U) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q1) 
                          << 0x10U) | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q2) 
                                        << 8U) | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q3))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs 
        = ((IData)(vlTOPp->reset_ni) ? 0U : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_ns));
    if (vlTOPp->reset_ni) {
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV = 0U;
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count = 0U;
        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index = 0U;
    } else {
        if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main))) {
            if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main))) {
                vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 0U;
            } else {
                if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main))) {
                    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 0U;
                } else {
                    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 0U;
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV = 0U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main))) {
                if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main))) {
                    if ((0x56U > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count))) {
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count)));
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 3U;
                    } else {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV = 1U;
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count = 0U;
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 4U;
                    }
                } else {
                    if ((0x56U > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count))) {
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count)));
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 2U;
                    } else {
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count = 0U;
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte 
                            = (((~ ((IData)(1U) << (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index))) 
                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte)) 
                               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data) 
                                  << (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index)));
                        if ((7U > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index))) {
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index)));
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 2U;
                        } else {
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index = 0U;
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 3U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main))) {
                    if ((0x2bU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count))) {
                        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data) {
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 0U;
                        } else {
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count = 0U;
                            vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 2U;
                        }
                    } else {
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count)));
                        vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main = 1U;
                    }
                } else {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV = 0U;
                    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count = 0U;
                    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index = 0U;
                    vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main 
                        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data)
                            ? 0U : 1U);
                }
            }
        }
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__136(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__136\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__fwd_rom_q)
            ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rom_rdata
            : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_q);
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__137(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__137\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx12 = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o 
        = vlTOPp->__Vtable12_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o
        [vlTOPp->__Vtableidx12];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i 
        = vlTOPp->__Vtable12_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i
        [vlTOPp->__Vtableidx12];
    vlTOPp->__Vtableidx13 = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o 
        = vlTOPp->__Vtable13_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o
        [vlTOPp->__Vtableidx13];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i 
        = vlTOPp->__Vtable13_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i
        [vlTOPp->__Vtableidx13];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hgrant 
        = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o))
            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    }
    if ((2U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__138(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__138\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                        * (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fffU & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                           >> (0x3fU 
                                               & ((IData)(0xdU) 
                                                  * 
                                                  (3U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                     : 0U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x19U >= (0x1fU & ((IData)(0xdU) 
                                        * (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                   >> (0x1fU & ((IData)(0xdU) 
                                                * (1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                     : 0U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rvalid_o) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((0x13U >= (0x1fU & ((IData)(5U) 
                                        * (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                 >> (0x1fU & ((IData)(5U) 
                                              * (3U 
                                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                     : 0U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__instr_valid) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : ((9U >= (0xfU & ((IData)(5U) * (1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                     ? (0x1fU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                 >> (0xfU & ((IData)(5U) 
                                             * (1U 
                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                     : 0U));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__140(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__140\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main 
        = vlTOPp->__Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__141(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__141\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : (0x1fffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__rvalid) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
            ? 0U : (0x1fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__142(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__142\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                        >> 0x25U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hgrant))))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x3fU 
                                                               & (IData)(
                                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                          >> 0x25U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hgrant) 
                                                                            >> 1U))))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i[2U] 
        = (((QData)((IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hfifo_rspvalid) 
                                   >> 2U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x3fU 
                                                               & (IData)(
                                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                          >> 0x25U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hgrant) 
                                                                            >> 2U))))))))))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                           [2U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                           [2U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                          [2U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                   [2U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                             [2U] >> 0x33U))))) 
              << 0x33U));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__143(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__143\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask 
        = ((0xffffff00U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask) 
           | (0xffU & (- (IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                        >> 1U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(8U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 2U))))) 
              << (0x1fU & ((IData)(8U) + (0x20U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                   << 5U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x10U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 3U))))) 
              << (0x1fU & ((IData)(0x10U) + (0x20U 
                                             & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                << 5U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x18U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 4U))))) 
              << (0x1fU & ((IData)(0x18U) + (0x20U 
                                             & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                << 5U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask 
        = ((0xffffff00U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask) 
           | (0xffU & (- (IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                        >> 1U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(8U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 2U))))) 
              << (0x1fU & ((IData)(8U) + (0x20U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                   << 5U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x10U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 3U))))) 
              << (0x1fU & ((IData)(0x10U) + (0x20U 
                                             & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                << 5U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x18U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 4U))))) 
              << (0x1fU & ((IData)(0x18U) + (0x20U 
                                             & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                << 5U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__144(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__144\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data_R;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__145(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__145\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_d 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_q;
    if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))) {
            if ((0xfffU == vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_cntrl_data)) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_d = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_d = 0U;
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_d 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_q;
    if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs)))) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_d = 0U;
        }
    } else {
        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))) {
            if ((((3U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count)) 
                  & (0xfU != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q2))) 
                 & (0xffU != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte)))) {
                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_d = 1U;
            }
        } else {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_d = 0U;
        }
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_ns 
        = ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))
            ? ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))
                ? ((0xfffU == vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_cntrl_data)
                    ? 3U : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV)
                             ? 1U : 3U)) : 3U) : ((1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs))
                                                   ? 
                                                  ((((3U 
                                                      == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count)) 
                                                     & (0xfU 
                                                        != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q2))) 
                                                    & (0xffU 
                                                       != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte)))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV)
                                                    ? 1U
                                                    : 0U)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__146(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__146\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask 
        = ((0xffffff00U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask) 
           | (0xffU & (- (IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                        >> 1U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(8U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 2U))))) 
              << (0x1fU & ((IData)(8U) + (0x20U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                   << 5U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x10U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 3U))))) 
              << (0x1fU & ((IData)(0x10U) + (0x20U 
                                             & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                << 5U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask 
        = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x18U) 
                                            + (0x20U 
                                               & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                  << 5U)))))) 
            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask) 
           | ((0xffU & (- (IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                         >> 4U))))) 
              << (0x1fU & ((IData)(0x18U) + (0x20U 
                                             & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                << 5U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__147(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__147\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword 
        = (((IData)(vlTOPp->reset_ni) ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data
             : 0U) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask);
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__148(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__148\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_valid 
        = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                     >> 0xaU) | ((1U != (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))) 
                                 | (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid 
        = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                     >> 0xaU) | ((1U != (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))) 
                                 | (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rdata_tlword 
        = (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rdata_o 
           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask);
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__150(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__150\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid 
        = (1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                     >> 0xaU) | ((1U != (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))) 
                                 | (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q)
             ? (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux 
                        >> 0x20U)) : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux)) 
           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask);
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__151(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__151\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o[0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o[1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o[2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0x1ffffffffULL & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid))
                                         ? ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword)) 
                                            << 1U) : 
                                        ((0x41U >= 
                                          (0x7fU & 
                                           ((IData)(0x21U) 
                                            * (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (3U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (1U 
                                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (3U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (1U 
                                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   (3U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (1U 
                                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                          : 0ULL))));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__152(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__152\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0x1ffffffffULL & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))
                                         ? ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                            << 1U) : 
                                        ((0x83U >= 
                                          (0xffU & 
                                           ((IData)(0x21U) 
                                            * (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (7U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (7U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   (7U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                          : 0ULL))));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__153(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__153\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data_R 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__uart_rx_i;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__154(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__154\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))
                       ? ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword)) 
                          << 1U) : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__155(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__155\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
        [2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
        = (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid)) 
            << 0x33U) | (((QData)((IData)((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid) 
                                            & (1U != 
                                               (3U 
                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xbU))))
                                            ? 0U : 1U))) 
                          << 0x30U) | (((QData)((IData)(
                                                        ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid)
                                                          ? 
                                                         (3U 
                                                          & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                             >> 8U))
                                                          : 0U))) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(
                                                         ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid)
                                                           ? 
                                                          (0xffU 
                                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))
                                                           : 0U))) 
                                         << 0x23U) 
                                        | (((QData)((IData)(
                                                            ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid) 
                                                               & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))) 
                                                              & (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                     >> 0xbU))))
                                                              ? (IData)(
                                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                                         >> 1U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid) 
                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                                   & ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                           >> 0xbU)))
                                                                       ? 
                                                                      ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                                       | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                          >> 0xaU))
                                                                       : 
                                                                      ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                       >> 0xaU)))) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)) 
                                                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full))))))))))));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__156(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__156\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
        = (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_valid)) 
            << 0x33U) | (((QData)((IData)((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_valid) 
                                            & (1U != 
                                               (3U 
                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xbU))))
                                            ? 0U : 1U))) 
                          << 0x30U) | (((QData)((IData)(
                                                        ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_valid)
                                                          ? 
                                                         (3U 
                                                          & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                             >> 8U))
                                                          : 0U))) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(
                                                         ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_valid)
                                                           ? 
                                                          (0xffU 
                                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o))
                                                           : 0U))) 
                                         << 0x23U) 
                                        | (((QData)((IData)(
                                                            ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_valid) 
                                                               & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))) 
                                                              & (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                     >> 0xbU))))
                                                              ? (IData)(
                                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                                         >> 1U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_valid) 
                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                                   & ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                           >> 0xbU)))
                                                                       ? 
                                                                      ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                                       | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                          >> 0xaU))
                                                                       : 
                                                                      ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                       >> 0xaU)))) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)) 
                                                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full))))))))))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar)))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                             >> 0x33U))))) 
              << 0x33U));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__158(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__158\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
        = (((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid)) 
            << 0x33U) | (((QData)((IData)((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid) 
                                            & (1U != 
                                               (3U 
                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xbU))))
                                            ? 0U : 1U))) 
                          << 0x30U) | (((QData)((IData)(
                                                        ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid)
                                                          ? 
                                                         (3U 
                                                          & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                             >> 8U))
                                                          : 0U))) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(
                                                         ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid)
                                                           ? 
                                                          (0xffU 
                                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o))
                                                           : 0U))) 
                                         << 0x23U) 
                                        | (((QData)((IData)(
                                                            ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid) 
                                                               & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty))) 
                                                              & (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                     >> 0xbU))))
                                                              ? (IData)(
                                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                                         >> 1U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid) 
                                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                                   & ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                           >> 0xbU)))
                                                                       ? 
                                                                      ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                                       | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                          >> 0xaU))
                                                                       : 
                                                                      ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                                       >> 0xaU)))) 
                                                               << 1U) 
                                                              | (1U 
                                                                 & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)) 
                                                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full))))))))))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom)))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                             >> 0x33U))))) 
              << 0x33U));
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__159(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__159\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
        [2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
        = ((0xffffffffffffeULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
        = ((0x8000000000001ULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
        = ((0x7ffffffffffffULL & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                             >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hgrant 
        = ((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o))
            ? (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
}

VL_INLINE_OPT void VAzadi_top_verilator::_combo__TOP__160(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_combo__TOP__160\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid 
        = ((6U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid)) 
           | ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                       >> 0x33U)) & (0U == (3U & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                          >> 0x23U))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid 
        = ((5U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid)) 
           | (((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                        >> 0x33U)) & (1U == (3U & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                           >> 0x23U))))) 
              << 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid 
        = ((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid)) 
           | (((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                        >> 0x33U)) & (2U == (3U & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                           >> 0x23U))))) 
              << 2U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hgrant 
        = ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o))
            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
            : 0U);
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x7fU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                        >> 0x24U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hgrant))))))))))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                          >> 0x24U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hgrant) 
                                                                            >> 1U))))))))))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i[0U] 
        = (((QData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid)))) 
            << 0x33U) | (((QData)((IData)((7U & (IData)(
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                         >> 0x30U))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                    >> 0x2dU))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            (0x3fU 
                                                             & (IData)(
                                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                        >> 0x25U))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                           >> 0x22U))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                   >> 2U))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hgrant))))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i[1U] 
        = (((QData)((IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid) 
                                   >> 1U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x3fU 
                                                               & (IData)(
                                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                          >> 0x25U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hgrant) 
                                                                            >> 1U))))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i[2U] 
        = (((QData)((IData)((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid) 
                                   >> 2U)))) << 0x33U) 
           | (((QData)((IData)((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                              >> 0x30U))))) 
               << 0x30U) | (((QData)((IData)((7U & (IData)(
                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                            >> 0x2dU))))) 
                             << 0x2dU) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              (0x3fU 
                                                               & (IData)(
                                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                          >> 0x25U))))) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                     >> 2U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hgrant) 
                                                                            >> 2U))))))))))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                           [0U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                           [1U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                           [2U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                           [2U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                          [2U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                                   [2U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                             [2U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o[0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o;
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o[1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o[0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o[1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o[2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
        [2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__DEBUG_ROM__tl_h_o[0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__DEBUG_ROM__tl_h_o[1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o[0xaU] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
        [2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__DEBUG_ROM__tl_h_o
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__DEBUG_ROM__tl_h_o
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i[2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
        [2U];
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                           [0U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                           [1U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
        = ((0xffffffffffffeULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o) 
           | (IData)((IData)((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                           [2U])))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
        = ((0x8000000000001ULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                    [2U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                           [2U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                          [2U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                   [2U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
        = ((0x7ffffffffffffULL & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                             [2U] >> 0x33U))))) 
              << 0x33U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_i[0U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_i[1U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_i[2U] 
        = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__163(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__163\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0U;
    vlTOPp->__Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 0U;
    vlTOPp->__Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0U;
    vlTOPp->__Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 0U;
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__164(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__164\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q 
            = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw) 
                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing)) 
               & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id)));
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__165(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__165\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d;
        }
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = 0U;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) 
           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_d));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__use_rs3_q = 0U;
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_we_ex))) {
            vlTOPp->__Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i
                [0U];
            vlTOPp->__Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 1U;
        }
    } else {
        vlTOPp->__Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 1U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_we_ex))) {
            vlTOPp->__Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2 
                = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i
                [1U];
            vlTOPp->__Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 1U;
        }
    } else {
        vlTOPp->__Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 1U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__167(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__167\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U] 
            = vlTOPp->__Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    }
    if (vlTOPp->__Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v1) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0U] = 0ULL;
    }
    if (vlTOPp->__Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
            = vlTOPp->__Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    }
    if (vlTOPp->__Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v3) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1U] = 0ULL;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we 
        = ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q) 
              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux_we 
        = ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux_we)) 
           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__fp_rf_we_wb_q) 
              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_write_wb 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
           & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q) 
              | (0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_raddr_a 
        = (0x1fU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__use_rs3_q) 
                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle)))
                     ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                        >> 0x1bU) : (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                     >> 0xfU)));
}

VL_INLINE_OPT void VAzadi_top_verilator::_multiclk__TOP__168(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_multiclk__TOP__168\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
        (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                  >> 0x14U))];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_rdata_b 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[
        (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                  >> 0x14U))];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc 
        = (((0U == (0x1fU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_raddr_a) 
                             << 5U))) ? 0U : (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                              ((IData)(1U) 
                                               + (0x1fU 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_raddr_a)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_raddr_a) 
                                                      << 5U))))) 
           | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
              (0x1fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_raddr_a))] 
              >> (0x1fU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_raddr_a) 
                           << 5U))));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__169(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__169\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
            == (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                         >> 0x14U))) & (0U != (0x1fU 
                                               & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x14U))));
}

VL_INLINE_OPT void VAzadi_top_verilator::_sequent__TOP__170(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAzadi_top_verilator::_sequent__TOP__170\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex
        [1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel 
        = ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__mult_sel_ex) 
           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex));
    vlTOPp->__Vtableidx2 = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = vlTOPp->__Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate
        [vlTOPp->__Vtableidx2];
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
    } else {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
            == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_raddr_a)) 
           & (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_raddr_a)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__icache_inval = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_access = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_a_o = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_c_o = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__is_fp_instr = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2 = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x7fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id);
    if ((0x40U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                if ((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == (0xfffU 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x14U)))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                                    } else {
                                        if ((1U == 
                                             (0xfffU 
                                              & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn = 1U;
                                        } else {
                                            if ((0x302U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))) {
                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                                            } else {
                                                if (
                                                    (0x7b2U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))) {
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec = 1U;
                                                } else {
                                                    if (
                                                        (0x105U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                                                    } else {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if (((0U != (0x1fU 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0xfU))) 
                                         | (0U != (0x1fU 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 7U))))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    }
                                } else {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_access = 1U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel = 1U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                    if ((1U & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xeU)))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = 1U;
                                    }
                                    if ((1U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                                        } else {
                                            if ((3U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0xcU)))) {
                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                                            } else {
                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        }
                                    }
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                                }
                            } else {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                                if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                                } else {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                }
                            } else {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                                if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                                } else {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                }
                                if ((0U != (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                }
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = 1U;
                            } else {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                    = (1U & ((~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0xeU)) 
                                             & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0xdU)));
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b = 1U;
                            } else {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_a_o = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 0U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__is_fp_instr = 1U;
                                if ((0x80000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((0x40000000U 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    } else {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                                                            if (
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x15U)))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 1U;
                                                            }
                                                        } else {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                                                            if (
                                                                ((0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                      >> 0x14U))) 
                                                                 | (0U 
                                                                    != 
                                                                    (7U 
                                                                     & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                        >> 0xcU))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    } else {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                            if (
                                                                (1U 
                                                                 == 
                                                                 ((0xf8U 
                                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                      >> 0x11U)) 
                                                                  | (7U 
                                                                     & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                        >> 0xcU))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 1U;
                                                            } else {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                            }
                                                        } else {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                                            if (
                                                                ((0U 
                                                                  == 
                                                                  ((0xf8U 
                                                                    & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                       >> 0x11U)) 
                                                                   | (7U 
                                                                      & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                         >> 0xcU)))) 
                                                                 | (1U 
                                                                    == 
                                                                    ((0xf8U 
                                                                      & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                         >> 0x11U)) 
                                                                     | (7U 
                                                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                           >> 0xcU)))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 0U;
                                                            } else {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    } else {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                        } else {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xfU 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                                >> 0x15U))))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    } else {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                            if (
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x15U)))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 1U;
                                                            }
                                                        } else {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xfU 
                                                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                                >> 0x15U))))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x20000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    } else {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2 = 1U;
                                                            if (
                                                                (1U 
                                                                 & ((~ 
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                      >> 0xeU)) 
                                                                    | (3U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                           >> 0xcU)))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o = 1U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 1U;
                                                            }
                                                        } else {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2 = 1U;
                                                            if (
                                                                (1U 
                                                                 & ((~ 
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                      >> 0xeU)) 
                                                                    | (3U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                           >> 0xcU)))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o = 1U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                        }
                                    }
                                } else {
                                    if ((0x40000000U 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    } else {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                                                            if (
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x14U)))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 1U;
                                                            }
                                                        } else {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                                                            if (
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x14U)))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 0U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                }
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    } else {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                                                            if (
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x14U)))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 1U;
                                                            }
                                                        } else {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                                                            if (
                                                                (1U 
                                                                 & ((0U 
                                                                     != 
                                                                     (0xfU 
                                                                      & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                         >> 0x15U))) 
                                                                    | (~ 
                                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                        >> 0x14U))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x20000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                            } else {
                                                if (
                                                    (0x8000000U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    } else {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2 = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                                                            if (
                                                                (0U 
                                                                 != 
                                                                 (3U 
                                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0xdU)))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o = 1U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 1U;
                                                            }
                                                        } else {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2 = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                                                            if (
                                                                (0U 
                                                                 != 
                                                                 (3U 
                                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0xdU)))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o = 1U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 0U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (0x4000000U 
                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    } else {
                                                        if (
                                                            (0x2000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2 = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                                                            if (
                                                                (1U 
                                                                 & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0xeU) 
                                                                    | (3U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                           >> 0xcU)))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o = 1U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 1U;
                                                            }
                                                        } else {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2 = 1U;
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                                                            if (
                                                                (1U 
                                                                 & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0xeU) 
                                                                    | (3U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                           >> 0xcU)))))) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o = 1U;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm;
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x10000000U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x4000000U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                } else {
                                                    if (
                                                        (0x2000000U 
                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2 = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 1U;
                                                    } else {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2 = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 0U;
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x4000000U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                } else {
                                                    if (
                                                        (0x2000000U 
                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2 = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_swap_oprnds_o = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 1U;
                                                    } else {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2 = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_swap_oprnds_o = 1U;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm;
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_a_o = 1U;
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o = 1U;
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_c_o = 1U;
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 1U;
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 0U;
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__is_fp_instr = 1U;
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs1 = 1U;
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2 = 1U;
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_swap_oprnds_o = 0U;
                        if ((1U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x19U)))) {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 1U;
                        } else {
                            if ((0U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                    = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 0U;
                            } else {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        }
                    } else {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            } else {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                if ((5U == ((4U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x18U)) 
                                            | (3U & 
                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0xcU))))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                } else {
                                    if ((0x80000000U 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                = (1U 
                                                   & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                       >> 0x1dU) 
                                                      | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                          >> 0x1cU) 
                                                         | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                             >> 0x1bU) 
                                                            | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                >> 0x1aU) 
                                                               | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                   >> 0x19U) 
                                                                  | ((0x4000U 
                                                                      & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                                      ? 
                                                                     ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                       >> 0xdU) 
                                                                      | (~ 
                                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                          >> 0xcU)))
                                                                      : 
                                                                     ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                       >> 0xdU) 
                                                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                         >> 0xcU)))))))));
                                        } else {
                                            if ((0x20000000U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_a_o = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2 = 1U;
                                if ((3U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 1U;
                                } else {
                                    if ((2U == (7U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 0U;
                                    } else {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we = 1U;
                                if ((0x4000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                }
                                if ((0U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                                } else {
                                    if ((1U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                        } else {
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            } else {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                if ((0x4000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((0x2000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((0x4000000U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                            } else {
                                                if (
                                                    (0x80000000U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                } else {
                                                    if (
                                                        (0x40000000U 
                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                            = 
                                                            (1U 
                                                             & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                 >> 0x1dU) 
                                                                | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                    >> 0x1cU) 
                                                                   | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                       >> 0x1bU) 
                                                                      | (0U 
                                                                         != 
                                                                         (3U 
                                                                          & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                             >> 0x19U)))))));
                                                    } else {
                                                        if (
                                                            (0x20000000U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                            if (
                                                                (0x10000000U 
                                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                            } else {
                                                                if (
                                                                    (0x8000000U 
                                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (7U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                             >> 0x14U)))) {
                                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                                    }
                                                                } else {
                                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                                }
                                                            }
                                                        } else {
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                                = 
                                                                (1U 
                                                                 & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x1cU) 
                                                                    | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                        >> 0x1bU) 
                                                                       | (0U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                              >> 0x19U))))));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                        }
                                    }
                                } else {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                        = (1U & ((~ 
                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xdU)) 
                                                 & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0xcU) 
                                                    & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                        >> 0x1fU) 
                                                       | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                           >> 0x1eU) 
                                                          | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                              >> 0x1dU) 
                                                             | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                 >> 0x1cU) 
                                                                | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                    >> 0x1bU) 
                                                                   | (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                          >> 0x19U)))))))))));
                                }
                            } else {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                if ((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                        if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__icache_inval = 1U;
                                        }
                                    } else {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_a_o = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rd = 1U;
                                if ((3U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 1U;
                                } else {
                                    if ((2U == (7U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm;
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_src_fmt = 0U;
                                    } else {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext 
                                    = (1U & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0xeU)));
                                if ((0U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                                } else {
                                    if ((1U == (3U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                            if ((0x4000U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)) {
                                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                            }
                                        } else {
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_c_insn_id) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_access = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_a_o = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_b_o = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_rf_ren_c_o = 0U;
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_wen_id = 0U;
    }
}
