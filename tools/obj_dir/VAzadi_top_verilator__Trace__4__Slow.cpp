// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAzadi_top_verilator__Syms.h"


void VAzadi_top_verilator::traceFullSub3(void* userp, VerilatedVcd* tracep) {
    VAzadi_top_verilator__Syms* __restrict vlSymsp = static_cast<VAzadi_top_verilator__Syms*>(userp);
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp4735[3];
    WData/*95:0*/ __Vtemp4739[3];
    WData/*95:0*/ __Vtemp4743[3];
    WData/*95:0*/ __Vtemp4758[3];
    WData/*95:0*/ __Vtemp4774[3];
    WData/*95:0*/ __Vtemp4790[3];
    WData/*95:0*/ __Vtemp4795[3];
    WData/*95:0*/ __Vtemp4857[3];
    WData/*95:0*/ __Vtemp4861[3];
    WData/*95:0*/ __Vtemp4865[3];
    WData/*95:0*/ __Vtemp4929[3];
    WData/*95:0*/ __Vtemp4933[3];
    WData/*95:0*/ __Vtemp4937[3];
    WData/*95:0*/ __Vtemp4941[3];
    WData/*95:0*/ __Vtemp5005[3];
    WData/*95:0*/ __Vtemp5009[3];
    WData/*95:0*/ __Vtemp5013[3];
    WData/*95:0*/ __Vtemp5017[3];
    // Body
    {
        tracep->fullCData(oldp+11206,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d),5);
        tracep->fullBit(oldp+11207,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_break_err));
        tracep->fullBit(oldp+11208,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout));
        tracep->fullBit(oldp+11209,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_parity_err));
        tracep->fullBit(oldp+11210,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_d));
        tracep->fullBit(oldp+11211,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d));
        tracep->fullBit(oldp+11212,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+11213,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+11214,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+11215,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+11216,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+11217,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+11218,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event));
        tracep->fullBit(oldp+11219,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event) 
                                           | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                              >> 0x1cU)))));
        tracep->fullBit(oldp+11220,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event));
        tracep->fullBit(oldp+11221,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+11222,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+11223,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event));
        tracep->fullBit(oldp+11224,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event) 
                                           | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                              >> 0x1bU)))));
        tracep->fullBit(oldp+11225,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event));
        tracep->fullBit(oldp+11226,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+11227,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+11228,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event));
        tracep->fullBit(oldp+11229,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event) 
                                           | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                              >> 0x1aU)))));
        tracep->fullBit(oldp+11230,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event));
        tracep->fullBit(oldp+11231,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+11232,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+11233,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event));
        tracep->fullBit(oldp+11234,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event) 
                                           | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                              >> 0x19U)))));
        tracep->fullBit(oldp+11235,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event));
        tracep->fullBit(oldp+11236,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+11237,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+11238,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event));
        tracep->fullBit(oldp+11239,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event) 
                                           | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                              >> 0x18U)))));
        tracep->fullBit(oldp+11240,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event));
        tracep->fullBit(oldp+11241,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+11242,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+11243,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event));
        tracep->fullBit(oldp+11244,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event) 
                                           | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                              >> 0x17U)))));
        tracep->fullBit(oldp+11245,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event));
        tracep->fullBit(oldp+11246,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+11247,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+11248,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event));
        tracep->fullBit(oldp+11249,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event) 
                                           | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                              >> 0x16U)))));
        tracep->fullBit(oldp+11250,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event));
        tracep->fullBit(oldp+11251,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+11252,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x15U))));
        tracep->fullBit(oldp+11253,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event));
        tracep->fullBit(oldp+11254,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event) 
                                           | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                              >> 0x15U)))));
        tracep->fullBit(oldp+11255,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event));
        tracep->fullBit(oldp+11256,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_wb));
        tracep->fullBit(oldp+11257,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_op_en));
        tracep->fullBit(oldp+11258,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id));
        tracep->fullBit(oldp+11259,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_req_done));
        tracep->fullBit(oldp+11260,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_in_ready));
        tracep->fullBit(oldp+11261,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done));
        tracep->fullBit(oldp+11262,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_wb))));
        tracep->fullBit(oldp+11263,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_jump));
        tracep->fullBit(oldp+11264,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_tbranch));
        tracep->fullBit(oldp+11265,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_mem));
        tracep->fullBit(oldp+11266,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv));
        tracep->fullBit(oldp+11267,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_branch));
        tracep->fullBit(oldp+11268,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_jump));
        tracep->fullBit(oldp+11269,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_id));
        tracep->fullBit(oldp+11270,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_wb)))));
        tracep->fullBit(oldp+11271,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multicycle_done));
        tracep->fullBit(oldp+11272,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__csr_pipe_flush));
        tracep->fullBit(oldp+11273,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
        tracep->fullBit(oldp+11274,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
        tracep->fullBit(oldp+11275,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__stall));
        tracep->fullBit(oldp+11276,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
        tracep->fullBit(oldp+11277,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
        tracep->fullBit(oldp+11278,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_all));
        tracep->fullBit(oldp+11279,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush));
        tracep->fullCData(oldp+11280,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
        tracep->fullBit(oldp+11281,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done));
        tracep->fullIData(oldp+11282,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
        tracep->fullIData(oldp+11283,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
        tracep->fullBit(oldp+11284,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                           >> 1U))));
        tracep->fullBit(oldp+11285,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                           >> 1U))));
        tracep->fullBit(oldp+11286,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int));
        tracep->fullBit(oldp+11287,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wreq));
        tracep->fullIData(oldp+11288,((0x1fffffffU 
                                       & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                          >> 3U))),29);
        tracep->fullIData(oldp+11289,((0x1fffffffU 
                                       & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                          >> 3U))),29);
        tracep->fullBit(oldp+11290,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
        tracep->fullBit(oldp+11291,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
        tracep->fullBit(oldp+11292,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                           >> 2U))));
        tracep->fullBit(oldp+11293,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                           >> 2U))));
        tracep->fullCData(oldp+11294,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready),4);
        tracep->fullBit(oldp+11295,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready))));
        tracep->fullBit(oldp+11296,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready) 
                                           >> 1U))));
        tracep->fullBit(oldp+11297,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready) 
                                           >> 2U))));
        tracep->fullBit(oldp+11298,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready) 
                                           >> 3U))));
        tracep->fullBit(oldp+11299,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d));
        tracep->fullBit(oldp+11300,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11301,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11302,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11303,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11304,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11305,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+11306,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11307,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+11308,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[0U])));
        tracep->fullBit(oldp+11309,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11310,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11311,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11312,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11313,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11314,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+11315,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11316,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+11317,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[0U])));
        tracep->fullBit(oldp+11318,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__instr_req));
        tracep->fullIData(oldp+11319,((0xfffffffcU 
                                       & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr)),32);
        tracep->fullBit(oldp+11320,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set));
        tracep->fullBit(oldp+11321,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set_spec));
        tracep->fullBit(oldp+11322,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req));
        tracep->fullBit(oldp+11323,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set_spec) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set)))));
        tracep->fullBit(oldp+11324,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req));
        tracep->fullIData(oldp+11325,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr),32);
        tracep->fullBit(oldp+11326,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req));
        tracep->fullBit(oldp+11327,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we));
        tracep->fullIData(oldp+11328,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int),32);
        tracep->fullIData(oldp+11329,((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                       << 2U)),32);
        tracep->fullIData(oldp+11330,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w),30);
        tracep->fullBit(oldp+11331,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int)));
        tracep->fullBit(oldp+11332,((0x800U <= (0xffcU 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                   << 2U)))));
        tracep->fullQData(oldp+11333,((QData)((IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                       << 2U)))),64);
        tracep->fullIData(oldp+11335,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int),32);
        tracep->fullBit(oldp+11336,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack));
        tracep->fullCData(oldp+11337,(((4U != (7U & 
                                               (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                >> 0x12U)))
                                        ? 0U : 1U)),2);
        tracep->fullBit(oldp+11338,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__error_internal));
        tracep->fullCData(oldp+11339,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11340,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullBit(oldp+11341,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we)))));
        tracep->fullCData(oldp+11342,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullBit(oldp+11343,((((0U == (7U & 
                                              (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                               >> 0x12U))) 
                                      | (1U == (7U 
                                                & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                   >> 0x12U)))) 
                                     & ((0xfU != (0xfU 
                                                  & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                      << 0x1fU) 
                                                     | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                        >> 1U)))) 
                                        | (2U != (3U 
                                                  & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                     >> 0xdU)))))));
        tracep->fullBit(oldp+11344,((1U & (~ ((((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                     >> 0x12U))) 
                                                | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                       >> 0x12U)))) 
                                               | (4U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                      >> 0x12U)))) 
                                              & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk) 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk)) 
                                                 & (((4U 
                                                      == 
                                                      (7U 
                                                       & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                          >> 0x12U))) 
                                                     | (1U 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                            >> 0x12U)))) 
                                                    | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk))))))));
        tracep->fullIData(oldp+11345,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int),32);
        tracep->fullIData(oldp+11346,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int),32);
        tracep->fullIData(oldp+11347,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+11348,((((0U == (7U & 
                                              (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                               >> 0x12U))) 
                                      | (1U == (7U 
                                                & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                   >> 0x12U)))) 
                                     | (4U == (7U & 
                                               (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                >> 0x12U))))));
        tracep->fullBit(oldp+11349,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk)) 
                                     & (((4U == (7U 
                                                 & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                    >> 0x12U))) 
                                         | (1U == (7U 
                                                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                      >> 0x12U)))) 
                                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullBit(oldp+11350,((0U == (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                  >> 0x12U)))));
        tracep->fullBit(oldp+11351,((1U == (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                  >> 0x12U)))));
        tracep->fullBit(oldp+11352,((4U == (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                  >> 0x12U)))));
        tracep->fullBit(oldp+11353,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk));
        tracep->fullBit(oldp+11354,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk));
        tracep->fullBit(oldp+11355,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk));
        tracep->fullCData(oldp+11356,((0xfU & ((IData)(1U) 
                                               << (3U 
                                                   & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                       << 0x1bU) 
                                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                         >> 5U)))))),4);
        tracep->fullSData(oldp+11357,(((((4U != (7U 
                                                 & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                    >> 0x12U)))
                                          ? 0U : 1U) 
                                        << 0xbU) | 
                                       (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__error_internal) 
                                         << 0xaU) | 
                                        (0x3ffU & (
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                   >> 5U))))),13);
        tracep->fullBit(oldp+11358,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullCData(oldp+11359,((0x1eU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U])),5);
        tracep->fullCData(oldp+11360,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_1),3);
        tracep->fullBit(oldp+11361,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                           [0U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11362,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                             [0U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11363,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                             [0U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11364,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                             [0U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11365,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                [0U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11366,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                        [0U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                          [0U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11367,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                  [0U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11368,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                        [0U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                          [0U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11369,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                     [0U][0U])));
        tracep->fullBit(oldp+11370,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                           [1U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11371,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                             [1U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11372,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                             [1U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11373,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                             [1U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11374,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                [1U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11375,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                        [1U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                          [1U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11376,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                [1U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                  [1U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11377,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                        [1U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                          [1U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11378,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                     [1U][0U])));
        tracep->fullBit(oldp+11379,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                           [2U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11380,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                             [2U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11381,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                             [2U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11382,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                             [2U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11383,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                [2U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11384,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                        [2U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                          [2U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11385,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                [2U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                  [2U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11386,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                        [2U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                          [2U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11387,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                     [2U][0U])));
        tracep->fullBit(oldp+11388,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                           [0U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11389,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                             [0U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11390,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                             [0U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11391,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                             [0U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11392,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                [0U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11393,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                        [0U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                          [0U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11394,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                  [0U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11395,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                        [0U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                          [0U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11396,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                     [0U][0U])));
        tracep->fullBit(oldp+11397,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                           [1U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11398,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                             [1U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11399,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                             [1U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11400,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                             [1U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11401,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                [1U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11402,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                        [1U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                          [1U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11403,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                [1U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                  [1U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11404,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                        [1U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                          [1U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11405,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                     [1U][0U])));
        tracep->fullBit(oldp+11406,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                           [2U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11407,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                             [2U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11408,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                             [2U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11409,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                             [2U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11410,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                [2U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11411,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                        [2U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                          [2U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11412,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                [2U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                  [2U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11413,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                        [2U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                          [2U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11414,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                     [2U][0U])));
        tracep->fullCData(oldp+11415,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_1))),2);
        tracep->fullCData(oldp+11416,((3U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),2);
        tracep->fullBit(oldp+11417,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11418,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11419,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11420,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11421,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11422,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+11423,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11424,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+11425,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[0U])));
        tracep->fullBit(oldp+11426,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__hold_all_requests));
        tracep->fullBit(oldp+11427,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [0U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11428,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11429,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11430,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11431,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                [0U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11432,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                        [0U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                          [0U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11433,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                  [0U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11434,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                        [0U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                          [0U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11435,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                     [0U][0U])));
        tracep->fullBit(oldp+11436,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [1U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11437,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11438,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11439,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11440,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                [1U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11441,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                        [1U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                          [1U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11442,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                [1U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                  [1U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11443,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                        [1U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                          [1U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11444,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                     [1U][0U])));
        tracep->fullBit(oldp+11445,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [2U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11446,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11447,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11448,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11449,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                [2U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11450,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                        [2U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                          [2U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11451,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                [2U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                  [2U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11452,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                        [2U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                          [2U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11453,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                     [2U][0U])));
        tracep->fullBit(oldp+11454,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [3U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11455,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11456,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11457,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11458,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                [3U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11459,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                        [3U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                          [3U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11460,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                [3U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                  [3U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11461,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                        [3U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                          [3U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11462,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                     [3U][0U])));
        tracep->fullBit(oldp+11463,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[2U] 
                                           >> 0x15U))));
        tracep->fullWData(oldp+11464,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),86);
        tracep->fullBit(oldp+11467,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[0U])));
        tracep->fullBit(oldp+11468,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [3U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11469,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11470,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11471,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11472,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                [3U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11473,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                        [3U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                          [3U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11474,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                [3U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                  [3U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11475,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                        [3U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                          [3U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11476,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                     [3U][0U])));
        tracep->fullBit(oldp+11477,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                           [0U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11478,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                             [0U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11479,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                             [0U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11480,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                             [0U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11481,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                                [0U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11482,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                        [0U][2U] << 0x1bU) 
                                       | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                          [0U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11483,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                                  [0U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11484,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                        [0U][1U] << 0x1fU) 
                                       | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                          [0U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11485,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                     [0U][0U])));
        tracep->fullBit(oldp+11486,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                           [1U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11487,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                             [1U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11488,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                             [1U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11489,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                             [1U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11490,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                                [1U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11491,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                        [1U][2U] << 0x1bU) 
                                       | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                          [1U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11492,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                                [1U][2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                                  [1U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11493,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                        [1U][1U] << 0x1fU) 
                                       | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                          [1U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11494,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                     [1U][0U])));
        tracep->fullBit(oldp+11495,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                           [0U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11496,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11497,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11498,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11499,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                [0U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11500,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                        [0U][2U] << 0x1bU) 
                                       | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11501,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                  [0U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11502,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                        [0U][1U] << 0x1fU) 
                                       | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                          [0U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11503,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                     [0U][0U])));
        tracep->fullBit(oldp+11504,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                           [1U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11505,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11506,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11507,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11508,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                [1U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11509,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                        [1U][2U] << 0x1bU) 
                                       | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11510,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                [1U][2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                  [1U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11511,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                        [1U][1U] << 0x1fU) 
                                       | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                          [1U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11512,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                     [1U][0U])));
        tracep->fullCData(oldp+11513,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrequest),2);
        tracep->fullBit(oldp+11514,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11515,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11516,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11517,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11518,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11519,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+11520,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11521,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+11522,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+11523,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrequest))));
        tracep->fullBit(oldp+11524,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11525,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11526,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11527,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11528,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11529,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+11530,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11531,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+11532,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+11533,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+11534,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+11535,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11536,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11537,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11538,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11539,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11540,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+11541,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11542,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+11543,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+11544,((0xfeU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                                [0U][2U] 
                                                >> 4U))),8);
        tracep->fullBit(oldp+11545,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                           [0U][2U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+11546,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11547,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11548,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11549,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11550,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11551,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+11552,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11553,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+11554,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+11555,((1U | (0xfeU 
                                             & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                                [1U][2U] 
                                                >> 4U)))),8);
        tracep->fullBit(oldp+11556,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                           [1U][2U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+11557,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                           >> 0x15U))));
        __Vtemp4735[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U]);
        __Vtemp4735[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U]));
        __Vtemp4735[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+11558,(__Vtemp4735),85);
        tracep->fullBit(oldp+11561,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+11562,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+11565,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullWData(oldp+11568,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullBit(oldp+11571,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11572,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11573,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11574,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11575,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11576,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+11577,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11578,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+11579,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+11580,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        __Vtemp4739[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp4739[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp4739[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+11581,(__Vtemp4739),85);
        tracep->fullBit(oldp+11584,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+11585,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11586,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11587,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11588,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11589,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11590,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+11591,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11592,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+11593,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+11594,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        __Vtemp4743[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp4743[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp4743[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+11595,(__Vtemp4743),85);
        tracep->fullBit(oldp+11598,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+11599,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [0U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11600,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11601,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11602,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11603,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                [0U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11604,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                        [0U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                          [0U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11605,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                  [0U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11606,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                        [0U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                          [0U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11607,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                     [0U][0U])));
        tracep->fullBit(oldp+11608,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11609,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11610,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11611,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11612,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11613,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+11614,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11615,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+11616,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+11617,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [0U][2U] 
                                           >> 0x15U))));
        __Vtemp4758[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                           [0U][0U]);
        __Vtemp4758[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                            [0U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [0U][1U]));
        __Vtemp4758[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [0U][2U]));
        tracep->fullWData(oldp+11618,(__Vtemp4758),85);
        tracep->fullBit(oldp+11621,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                     [0U][0U])));
        tracep->fullBit(oldp+11622,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [1U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11623,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11624,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11625,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11626,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                [1U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11627,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                        [1U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                          [1U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11628,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                [1U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                  [1U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11629,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                        [1U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                          [1U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11630,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                     [1U][0U])));
        tracep->fullBit(oldp+11631,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11632,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11633,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11634,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11635,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11636,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+11637,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11638,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+11639,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+11640,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [1U][2U] 
                                           >> 0x15U))));
        __Vtemp4774[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                           [1U][0U]);
        __Vtemp4774[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                            [1U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [1U][1U]));
        __Vtemp4774[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [1U][2U]));
        tracep->fullWData(oldp+11641,(__Vtemp4774),85);
        tracep->fullBit(oldp+11644,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                     [1U][0U])));
        tracep->fullBit(oldp+11645,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [2U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11646,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11647,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11648,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11649,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                [2U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11650,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                        [2U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                          [2U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+11651,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                [2U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                  [2U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11652,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                        [2U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                          [2U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+11653,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                     [2U][0U])));
        tracep->fullBit(oldp+11654,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11655,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11656,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11657,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11658,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11659,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+11660,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11661,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+11662,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+11663,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [2U][2U] 
                                           >> 0x15U))));
        __Vtemp4790[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                           [2U][0U]);
        __Vtemp4790[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                            [2U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [2U][1U]));
        __Vtemp4790[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [2U][2U]));
        tracep->fullWData(oldp+11664,(__Vtemp4790),85);
        tracep->fullBit(oldp+11667,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                     [2U][0U])));
        tracep->fullCData(oldp+11668,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+11669,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+11670,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+11671,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+11672,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+11673,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+11674,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+11675,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+11676,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+11677,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+11678,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+11679,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+11680,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+11681,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+11682,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+11683,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+11684,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+11685,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+11686,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+11687,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+11688,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+11689,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+11690,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+11691,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+11692,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+11693,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+11694,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+11695,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+11696,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+11697,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+11698,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+11699,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+11700,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__clear_resumeack));
        tracep->fullBit(oldp+11701,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                           >> 0x1fU))));
        tracep->fullBit(oldp+11702,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+11703,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+11704,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+11705,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+11706,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                           >> 0x1aU))));
        tracep->fullSData(oldp+11707,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                 >> 0x10U))),10);
        tracep->fullSData(oldp+11708,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                 >> 6U))),10);
        tracep->fullCData(oldp+11709,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 4U))),2);
        tracep->fullBit(oldp+11710,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                           >> 3U))));
        tracep->fullBit(oldp+11711,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                           >> 2U))));
        tracep->fullBit(oldp+11712,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                           >> 1U))));
        tracep->fullBit(oldp+11713,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d)));
        tracep->fullCData(oldp+11714,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+11715,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+11716,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+11717,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+11718,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+11719,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+11720,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+11721,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+11722,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+11723,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+11724,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+11725,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+11726,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+11727,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+11728,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+11729,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+11730,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+11731,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+11732,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+11733,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+11734,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+11735,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+11736,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+11737,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+11738,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+11739,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+11740,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+11741,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+11742,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+11743,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+11744,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+11745,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullQData(oldp+11746,((((QData)((IData)(
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0U])))),64);
        tracep->fullQData(oldp+11748,((((QData)((IData)(
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[2U])))),64);
        tracep->fullQData(oldp+11750,((((QData)((IData)(
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[4U])))),64);
        tracep->fullQData(oldp+11752,((((QData)((IData)(
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[6U])))),64);
        tracep->fullQData(oldp+11754,((((QData)((IData)(
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[8U])))),64);
        tracep->fullQData(oldp+11756,((((QData)((IData)(
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xbU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xaU])))),64);
        tracep->fullQData(oldp+11758,((((QData)((IData)(
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xdU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xcU])))),64);
        tracep->fullQData(oldp+11760,((((QData)((IData)(
                                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xfU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xeU])))),64);
        tracep->fullBit(oldp+11762,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resume));
        tracep->fullBit(oldp+11763,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__go));
        tracep->fullBit(oldp+11764,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command));
        tracep->fullSData(oldp+11765,((0xffffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                  >> 0x10U))),16);
        tracep->fullCData(oldp+11766,((0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d 
                                               >> 0xcU))),4);
        tracep->fullSData(oldp+11767,((0xfffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d)),12);
        tracep->fullBit(oldp+11768,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11769,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11770,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11771,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11772,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11773,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+11774,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11775,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+11776,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[0U])));
        tracep->fullBit(oldp+11777,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_we_lsu));
        tracep->fullBit(oldp+11778,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_wen));
        tracep->fullBit(oldp+11779,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d));
        tracep->fullBit(oldp+11780,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d));
        tracep->fullIData(oldp+11781,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),31);
        tracep->fullIData(oldp+11782,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec),32);
        tracep->fullBit(oldp+11783,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__req_i));
        tracep->fullSData(oldp+11784,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__addr_i),12);
        tracep->fullIData(oldp+11785,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
        tracep->fullIData(oldp+11786,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
        tracep->fullBit(oldp+11787,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__we_i));
        tracep->fullCData(oldp+11788,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_we),4);
        tracep->fullCData(oldp+11789,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT____Vcellinp__dccm__WE),4);
        tracep->fullBit(oldp+11790,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack));
        tracep->fullCData(oldp+11791,(((4U != (7U & 
                                               (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                >> 0x12U)))
                                        ? 0U : 1U)),2);
        tracep->fullBit(oldp+11792,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__tlul_error));
        tracep->fullCData(oldp+11793,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11794,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullBit(oldp+11795,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__req_i) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__we_i)))));
        tracep->fullCData(oldp+11796,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11797,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
        tracep->fullIData(oldp+11798,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
        tracep->fullIData(oldp+11799,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+11800,((((0U == (7U & 
                                              (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                               >> 0x12U))) 
                                      | (1U == (7U 
                                                & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U)))) 
                                     | (4U == (7U & 
                                               (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                >> 0x12U))))));
        tracep->fullBit(oldp+11801,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                                     & (((4U == (7U 
                                                 & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                    >> 0x12U))) 
                                         | (1U == (7U 
                                                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                      >> 0x12U)))) 
                                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullBit(oldp+11802,((0U == (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                  >> 0x12U)))));
        tracep->fullBit(oldp+11803,((1U == (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                  >> 0x12U)))));
        tracep->fullBit(oldp+11804,((4U == (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                  >> 0x12U)))));
        tracep->fullBit(oldp+11805,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk));
        tracep->fullBit(oldp+11806,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk));
        tracep->fullBit(oldp+11807,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk));
        tracep->fullCData(oldp+11808,((0xfU & ((IData)(1U) 
                                               << (3U 
                                                   & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                       << 0x1bU) 
                                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                                         >> 5U)))))),4);
        tracep->fullSData(oldp+11809,(((((4U != (7U 
                                                 & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                    >> 0x12U)))
                                          ? 0U : 1U) 
                                        << 0xbU) | 
                                       (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                                         << 0xaU) | 
                                        (0x3ffU & (
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 5U))))),13);
        tracep->fullBit(oldp+11810,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullCData(oldp+11811,((0x1eU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U])),5);
        tracep->fullBit(oldp+11812,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullIData(oldp+11813,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next),32);
        tracep->fullBit(oldp+11814,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11815,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11816,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11817,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11818,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11819,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+11820,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11821,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+11822,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+11823,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+11824,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+11825,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+11826,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+11827,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+11828,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+11829,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+11830,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+11831,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+11832,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+11833,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+11834,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                           >> 0x15U))));
        __Vtemp4795[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[0U]);
        __Vtemp4795[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U]));
        __Vtemp4795[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+11835,(__Vtemp4795),85);
        tracep->fullBit(oldp+11838,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+11839,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+11842,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullWData(oldp+11845,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullBit(oldp+11848,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullBit(oldp+11849,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux_we))));
        tracep->fullBit(oldp+11850,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
        tracep->fullCData(oldp+11851,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
        tracep->fullCData(oldp+11852,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux_we),2);
        tracep->fullBit(oldp+11853,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux_we))));
        tracep->fullBit(oldp+11854,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                           >> 1U))));
        tracep->fullBit(oldp+11855,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q)));
        tracep->fullBit(oldp+11856,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                           >> 0x1fU))));
        tracep->fullBit(oldp+11857,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+11858,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+11859,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+11860,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+11861,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                           >> 0x1aU))));
        tracep->fullSData(oldp+11862,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                 >> 0x10U))),10);
        tracep->fullSData(oldp+11863,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                 >> 6U))),10);
        tracep->fullCData(oldp+11864,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 4U))),2);
        tracep->fullBit(oldp+11865,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                           >> 3U))));
        tracep->fullBit(oldp+11866,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                           >> 2U))));
        tracep->fullBit(oldp+11867,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                           >> 1U))));
        tracep->fullBit(oldp+11868,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q)));
        tracep->fullBit(oldp+11869,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__out_ready_fpu2c));
        tracep->fullIData(oldp+11870,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                        << 0x1aU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                        >> 6U))),32);
        tracep->fullIData(oldp+11871,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__data_wb),32);
        tracep->fullBit(oldp+11872,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 5U))));
        tracep->fullBit(oldp+11873,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 4U))));
        tracep->fullBit(oldp+11874,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 3U))));
        tracep->fullBit(oldp+11875,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 2U))));
        tracep->fullBit(oldp+11876,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 1U))));
        tracep->fullIData(oldp+11877,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_id),32);
        tracep->fullBit(oldp+11878,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_instr_ret_wb));
        tracep->fullBit(oldp+11879,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_branch));
        tracep->fullBit(oldp+11880,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_load));
        tracep->fullBit(oldp+11881,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_store));
        tracep->fullBit(oldp+11882,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_spec));
        tracep->fullBit(oldp+11883,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set_d));
        tracep->fullBit(oldp+11884,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw));
        tracep->fullBit(oldp+11885,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d));
        tracep->fullBit(oldp+11886,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
        tracep->fullIData(oldp+11887,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
        tracep->fullBit(oldp+11888,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                           >> 1U))));
        tracep->fullIData(oldp+11889,((0x1fffffffU 
                                       & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 3U))),29);
        tracep->fullQData(oldp+11890,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd),64);
        tracep->fullQData(oldp+11892,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
        tracep->fullBit(oldp+11894,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
        tracep->fullQData(oldp+11895,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
        tracep->fullQData(oldp+11897,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd),64);
        tracep->fullQData(oldp+11899,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
        tracep->fullBit(oldp+11901,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
        tracep->fullQData(oldp+11902,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
        tracep->fullBit(oldp+11904,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        tracep->fullIData(oldp+11905,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                        << 0x14U) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                        >> 0xcU))),32);
        tracep->fullBit(oldp+11906,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+11907,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+11908,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 9U))));
        tracep->fullBit(oldp+11909,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 8U))));
        tracep->fullBit(oldp+11910,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 7U))));
        tracep->fullBit(oldp+11911,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 6U))));
        tracep->fullIData(oldp+11912,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                        << 0xeU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                        >> 0x12U))),32);
        tracep->fullBit(oldp+11913,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+11914,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+11915,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+11916,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+11917,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+11918,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0xcU))));
        tracep->fullIData(oldp+11919,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                        << 0x19U) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                        >> 7U))),32);
        tracep->fullBit(oldp+11920,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 6U))));
        tracep->fullBit(oldp+11921,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 5U))));
        tracep->fullBit(oldp+11922,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 4U))));
        tracep->fullBit(oldp+11923,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 3U))));
        tracep->fullBit(oldp+11924,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 2U))));
        tracep->fullBit(oldp+11925,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 1U))));
        tracep->fullBit(oldp+11926,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        tracep->fullCData(oldp+11927,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        tracep->fullCData(oldp+11928,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        tracep->fullIData(oldp+11929,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                        << 0x12U) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                        >> 0xeU))),32);
        tracep->fullBit(oldp+11930,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+11931,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+11932,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+11933,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+11934,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 9U))));
        tracep->fullBit(oldp+11935,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 8U))));
        tracep->fullBit(oldp+11936,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 7U))));
        tracep->fullIData(oldp+11937,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                        << 0xbU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                        >> 0x15U))),32);
        tracep->fullBit(oldp+11938,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x14U))));
        tracep->fullBit(oldp+11939,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x13U))));
        tracep->fullBit(oldp+11940,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x12U))));
        tracep->fullBit(oldp+11941,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x11U))));
        tracep->fullBit(oldp+11942,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+11943,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+11944,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0xeU))));
        tracep->fullIData(oldp+11945,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                        << 4U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                                  >> 0x1cU))),32);
        tracep->fullBit(oldp+11946,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+11947,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+11948,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           >> 0x19U))));
        tracep->fullBit(oldp+11949,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           >> 0x18U))));
        tracep->fullBit(oldp+11950,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           >> 0x17U))));
        tracep->fullBit(oldp+11951,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           >> 0x16U))));
        tracep->fullBit(oldp+11952,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           >> 0x15U))));
        tracep->fullIData(oldp+11953,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                        << 0x1dU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                        >> 3U))),32);
        tracep->fullBit(oldp+11954,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                           >> 2U))));
        tracep->fullBit(oldp+11955,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                           >> 1U))));
        tracep->fullBit(oldp+11956,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U])));
        tracep->fullBit(oldp+11957,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                           >> 0x1fU))));
        tracep->fullBit(oldp+11958,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+11959,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+11960,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                           >> 0x1cU))));
        tracep->fullIData(oldp+11961,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                        << 0x16U) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                        >> 0xaU))),32);
        tracep->fullBit(oldp+11962,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                           >> 9U))));
        tracep->fullBit(oldp+11963,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                           >> 8U))));
        tracep->fullBit(oldp+11964,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                           >> 7U))));
        tracep->fullBit(oldp+11965,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                           >> 6U))));
        tracep->fullBit(oldp+11966,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                           >> 5U))));
        tracep->fullBit(oldp+11967,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                           >> 4U))));
        tracep->fullBit(oldp+11968,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                           >> 3U))));
        tracep->fullIData(oldp+11969,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                        << 0xfU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                        >> 0x11U))),32);
        tracep->fullBit(oldp+11970,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                           >> 0x10U))));
        tracep->fullBit(oldp+11971,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                           >> 0xfU))));
        tracep->fullBit(oldp+11972,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                           >> 0xeU))));
        tracep->fullBit(oldp+11973,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                           >> 0xdU))));
        tracep->fullBit(oldp+11974,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+11975,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                           >> 0xbU))));
        tracep->fullBit(oldp+11976,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                           >> 0xaU))));
        tracep->fullBit(oldp+11977,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_in_ready))));
        tracep->fullIData(oldp+11978,(((0x10U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux))
                                        ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[
                                       (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux))]
                                        : ((0x9fU >= 
                                            (0xe0U 
                                             & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux) 
                                                << 5U)))
                                            ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[
                                           (7U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux))]
                                            : 0U))),32);
        tracep->fullBit(oldp+11979,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        tracep->fullCData(oldp+11980,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_in_ready),2);
        tracep->fullIData(oldp+11981,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[0U]),32);
        tracep->fullIData(oldp+11982,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[1U]),32);
        tracep->fullIData(oldp+11983,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[2U]),32);
        tracep->fullIData(oldp+11984,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[3U]),32);
        tracep->fullIData(oldp+11985,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[4U]),32);
        tracep->fullSData(oldp+11986,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__pre_round_abs),15);
        tracep->fullCData(oldp+11987,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits),2);
        tracep->fullBit(oldp+11988,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__of_after_round));
        tracep->fullBit(oldp+11989,(((4U >= (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt)) 
                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_uf_after_round) 
                                        >> (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt)))));
        tracep->fullSData(oldp+11990,((0x7fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[0U])),15);
        tracep->fullSData(oldp+11991,((0x7fffU & ((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[1U] 
                                                   << 0x11U) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[0U] 
                                                     >> 0xfU)))),15);
        tracep->fullSData(oldp+11992,((0x7fffU & ((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[1U] 
                                                   << 2U) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[0U] 
                                                     >> 0x1eU)))),15);
        tracep->fullSData(oldp+11993,((0x7fffU & ((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[2U] 
                                                   << 0x13U) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[1U] 
                                                     >> 0xdU)))),15);
        tracep->fullSData(oldp+11994,((0x7fffU & ((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[2U] 
                                                   << 4U) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[1U] 
                                                     >> 0x1cU)))),15);
        tracep->fullCData(oldp+11995,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_round_sticky_bits))),2);
        tracep->fullCData(oldp+11996,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_round_sticky_bits) 
                                             >> 2U))),2);
        tracep->fullCData(oldp+11997,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_round_sticky_bits) 
                                             >> 4U))),2);
        tracep->fullCData(oldp+11998,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_round_sticky_bits) 
                                             >> 6U))),2);
        tracep->fullCData(oldp+11999,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_round_sticky_bits) 
                                             >> 8U))),2);
        tracep->fullCData(oldp+12000,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_of_after_round),5);
        tracep->fullCData(oldp+12001,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_uf_after_round),5);
        tracep->fullSData(oldp+12002,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__rounded_abs),15);
        tracep->fullBit(oldp+12003,(((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__pre_round_abs)) 
                                     & (0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits)))));
        tracep->fullSData(oldp+12004,((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[0U])),16);
        tracep->fullSData(oldp+12005,((0xffffU & ((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[0U] 
                                                     >> 0x10U)))),16);
        tracep->fullSData(oldp+12006,((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[1U])),16);
        tracep->fullSData(oldp+12007,((0xffffU & ((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[1U] 
                                                     >> 0x10U)))),16);
        tracep->fullSData(oldp+12008,((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[2U])),16);
        tracep->fullSData(oldp+12009,(((0x4fU >= (0x7fU 
                                                  & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                     << 4U)))
                                        ? (0xffffU 
                                           & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                    << 4U)))
                                                ? 0U
                                                : (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[
                                                   ((IData)(1U) 
                                                    + 
                                                    (3U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                        >> 1U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                        << 4U))))) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[
                                                 (3U 
                                                  & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                     >> 1U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                     << 4U)))))
                                        : 0U)),16);
        tracep->fullBit(oldp+12010,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__regular_status) 
                                           >> 4U))));
        tracep->fullBit(oldp+12011,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__regular_status) 
                                           >> 3U))));
        tracep->fullBit(oldp+12012,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__regular_status) 
                                           >> 2U))));
        tracep->fullBit(oldp+12013,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__regular_status) 
                                           >> 1U))));
        tracep->fullBit(oldp+12014,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__regular_status))));
        tracep->fullCData(oldp+12015,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        tracep->fullBit(oldp+12016,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        tracep->fullCData(oldp+12017,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        tracep->fullBit(oldp+12018,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        tracep->fullBit(oldp+12019,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_state_we));
        tracep->fullBit(oldp+12020,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_enable_we));
        tracep->fullBit(oldp+12021,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_rising_we));
        tracep->fullBit(oldp+12022,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_falling_we));
        tracep->fullBit(oldp+12023,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we));
        tracep->fullBit(oldp+12024,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we));
        tracep->fullBit(oldp+12025,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__ctrl_en_input_filter_we));
        tracep->fullBit(oldp+12026,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_watermark_we));
        tracep->fullBit(oldp+12027,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_watermark_we));
        tracep->fullBit(oldp+12028,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_empty_we));
        tracep->fullBit(oldp+12029,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_overflow_we));
        tracep->fullBit(oldp+12030,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_frame_err_we));
        tracep->fullBit(oldp+12031,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_parity_err_we));
        tracep->fullBit(oldp+12032,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_tx_we));
        tracep->fullBit(oldp+12033,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_slpbk_we));
        tracep->fullBit(oldp+12034,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_llpbk_we));
        tracep->fullBit(oldp+12035,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rxblvl_we));
        tracep->fullBit(oldp+12036,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nco_we));
        tracep->fullBit(oldp+12037,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wdata_we));
        tracep->fullBit(oldp+12038,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxrst_we));
        tracep->fullBit(oldp+12039,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txval_we));
        tracep->fullBit(oldp+12040,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_val_we));
        tracep->fullBit(oldp+12041,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_en_we));
        tracep->fullBit(oldp+12042,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready));
        tracep->fullCData(oldp+12043,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d),4);
        tracep->fullSData(oldp+12044,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_d),11);
        tracep->fullBit(oldp+12045,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_d));
        tracep->fullSData(oldp+12046,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d),11);
        tracep->fullCData(oldp+12047,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d),4);
        tracep->fullCData(oldp+12048,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d),4);
        tracep->fullBit(oldp+12049,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d));
        tracep->fullBit(oldp+12050,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d));
        tracep->fullIData(oldp+12051,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__reg_rdata_next),32);
        tracep->fullBit(oldp+12052,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp));
        tracep->fullBit(oldp+12053,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__byte_clr));
        tracep->fullCData(oldp+12054,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d),6);
        tracep->fullBit(oldp+12055,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12056,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12057,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12058,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12059,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12060,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12061,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12062,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12063,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o))));
        tracep->fullBit(oldp+12064,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12065,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12066,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12067,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12068,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12069,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12070,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12071,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12072,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg))));
        tracep->fullIData(oldp+12073,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbaddress_sba_csrs),32);
        tracep->fullIData(oldp+12074,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12075,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                   >> 0x33U)))));
        tracep->fullBit(oldp+12076,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg))));
        tracep->fullBit(oldp+12077,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                   >> 1U)))));
        tracep->fullQData(oldp+12078,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d),64);
        tracep->fullQData(oldp+12080,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_d),64);
        tracep->fullCData(oldp+12082,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_d),3);
        tracep->fullBit(oldp+12083,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12084,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12085,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12086,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12087,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12088,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12089,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12090,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12091,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[0U])));
        tracep->fullBit(oldp+12092,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                           [0U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12093,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                             [0U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12094,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                             [0U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12095,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                             [0U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12096,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                                [0U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12097,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                        [0U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                          [0U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12098,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                                  [0U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12099,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                        [0U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                          [0U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12100,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                     [0U][0U])));
        tracep->fullBit(oldp+12101,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                           [1U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12102,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                             [1U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12103,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                             [1U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12104,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                             [1U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12105,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                                [1U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12106,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                        [1U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                          [1U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12107,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                                [1U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                                  [1U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12108,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                        [1U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                          [1U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12109,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                     [1U][0U])));
        tracep->fullBit(oldp+12110,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_req));
        tracep->fullBit(oldp+12111,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_rsp));
        tracep->fullBit(oldp+12112,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [0U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12113,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [0U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12114,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [0U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12115,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [0U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12116,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [0U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12117,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [0U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12118,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [0U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12119,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [0U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12120,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [0U]))));
        tracep->fullBit(oldp+12121,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [1U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12122,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [1U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12123,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [1U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12124,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [1U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12125,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [1U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12126,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [1U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12127,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [1U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12128,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [1U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12129,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [1U]))));
        tracep->fullBit(oldp+12130,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [2U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12131,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [2U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12132,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [2U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12133,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [2U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12134,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [2U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12135,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [2U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12136,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [2U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12137,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [2U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12138,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [2U]))));
        tracep->fullBit(oldp+12139,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [3U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12140,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [3U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12141,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [3U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12142,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [3U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12143,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [3U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12144,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [3U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12145,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [3U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12146,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [3U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12147,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [3U]))));
        tracep->fullBit(oldp+12148,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [4U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12149,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [4U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12150,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [4U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12151,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [4U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12152,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [4U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12153,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [4U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12154,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [4U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12155,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [4U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12156,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [4U]))));
        tracep->fullBit(oldp+12157,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [5U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12158,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [5U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12159,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [5U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12160,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [5U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12161,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [5U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12162,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [5U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12163,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [5U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12164,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [5U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12165,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [5U]))));
        tracep->fullBit(oldp+12166,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [6U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12167,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [6U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12168,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [6U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12169,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [6U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12170,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [6U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12171,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [6U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12172,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [6U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12173,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [6U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12174,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [6U]))));
        tracep->fullBit(oldp+12175,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [7U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12176,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [7U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12177,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [7U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12178,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [7U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12179,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [7U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12180,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [7U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12181,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [7U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12182,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [7U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12183,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [7U]))));
        tracep->fullBit(oldp+12184,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [8U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12185,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [8U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12186,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [8U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12187,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [8U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12188,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [8U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12189,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [8U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12190,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [8U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12191,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [8U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12192,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [8U]))));
        tracep->fullBit(oldp+12193,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [9U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12194,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [9U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12195,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [9U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12196,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [9U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12197,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [9U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12198,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [9U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12199,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [9U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12200,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [9U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12201,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [9U]))));
        tracep->fullBit(oldp+12202,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12203,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12204,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12205,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12206,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12207,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12208,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12209,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12210,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i))));
        tracep->fullBit(oldp+12211,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_req));
        tracep->fullBit(oldp+12212,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_rsp));
        tracep->fullBit(oldp+12213,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [0U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12214,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [0U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12215,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [0U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12216,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [0U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12217,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                        [0U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12218,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [0U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12219,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                               [0U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12220,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [0U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12221,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                  [0U]))));
        tracep->fullBit(oldp+12222,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [1U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12223,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [1U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12224,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [1U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12225,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [1U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12226,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                        [1U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12227,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [1U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12228,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                               [1U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12229,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [1U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12230,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                  [1U]))));
        tracep->fullBit(oldp+12231,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [2U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12232,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [2U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12233,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [2U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12234,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [2U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12235,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                        [2U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12236,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [2U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12237,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                               [2U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12238,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [2U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12239,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                  [2U]))));
        tracep->fullBit(oldp+12240,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [3U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12241,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [3U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12242,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [3U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12243,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [3U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12244,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                        [3U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12245,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [3U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12246,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                               [3U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12247,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [3U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12248,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                  [3U]))));
        tracep->fullBit(oldp+12249,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [4U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12250,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [4U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12251,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [4U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12252,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [4U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12253,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                        [4U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12254,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [4U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12255,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                               [4U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12256,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [4U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12257,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                  [4U]))));
        tracep->fullBit(oldp+12258,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [5U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12259,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [5U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12260,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [5U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12261,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [5U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12262,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                        [5U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12263,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [5U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12264,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                               [5U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12265,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [5U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12266,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                  [5U]))));
        tracep->fullBit(oldp+12267,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [6U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12268,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [6U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12269,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [6U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12270,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [6U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12271,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                        [6U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12272,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [6U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12273,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                               [6U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12274,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [6U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12275,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                  [6U]))));
        tracep->fullBit(oldp+12276,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [7U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12277,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [7U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12278,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [7U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12279,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [7U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12280,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                        [7U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12281,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [7U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12282,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                               [7U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12283,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [7U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12284,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                  [7U]))));
        tracep->fullBit(oldp+12285,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [8U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12286,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [8U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12287,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [8U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12288,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [8U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12289,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                        [8U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12290,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [8U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12291,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                               [8U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12292,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [8U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12293,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                  [8U]))));
        tracep->fullBit(oldp+12294,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [9U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12295,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [9U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12296,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [9U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12297,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [9U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12298,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                        [9U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12299,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [9U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12300,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                               [9U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12301,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [9U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12302,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                  [9U]))));
        tracep->fullBit(oldp+12303,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [0xaU] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12304,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [0xaU] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12305,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [0xaU] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12306,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [0xaU] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12307,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                        [0xaU] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12308,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [0xaU] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12309,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                               [0xaU] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12310,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                   [0xaU] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12311,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                  [0xaU]))));
        tracep->fullBit(oldp+12312,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12313,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12314,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12315,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12316,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12317,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12318,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12319,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12320,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p))));
        tracep->fullBit(oldp+12321,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__hfifo_reqready));
        tracep->fullBit(oldp+12322,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i))));
        tracep->fullBit(oldp+12323,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+12324,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+12326,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_req));
        tracep->fullBit(oldp+12327,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_rsp));
        tracep->fullBit(oldp+12328,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                           [0U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12329,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                             [0U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12330,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                             [0U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12331,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                             [0U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12332,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                [0U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12333,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                        [0U][2U] << 0x1bU) 
                                       | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                          [0U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12334,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                  [0U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12335,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                        [0U][1U] << 0x1fU) 
                                       | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                          [0U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12336,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                     [0U][0U])));
        tracep->fullBit(oldp+12337,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                           [1U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12338,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                             [1U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12339,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                             [1U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12340,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                             [1U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12341,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                [1U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12342,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                        [1U][2U] << 0x1bU) 
                                       | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                          [1U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12343,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                [1U][2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                  [1U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12344,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                        [1U][1U] << 0x1fU) 
                                       | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                          [1U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12345,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                     [1U][0U])));
        tracep->fullBit(oldp+12346,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                           [0U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12347,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12348,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12349,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12350,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                                [0U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12351,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                        [0U][2U] << 0x1bU) 
                                       | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12352,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                                  [0U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12353,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                        [0U][1U] << 0x1fU) 
                                       | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                          [0U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12354,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                     [0U][0U])));
        tracep->fullBit(oldp+12355,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                           [1U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12356,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12357,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12358,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12359,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                                [1U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12360,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                        [1U][2U] << 0x1bU) 
                                       | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12361,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                                [1U][2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                                  [1U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12362,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                        [1U][1U] << 0x1fU) 
                                       | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                          [1U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12363,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                     [1U][0U])));
        tracep->fullCData(oldp+12364,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrequest),2);
        tracep->fullBit(oldp+12365,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12366,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12367,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12368,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12369,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12370,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12371,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12372,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12373,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+12374,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrequest))));
        tracep->fullBit(oldp+12375,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12376,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12377,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12378,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12379,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12380,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12381,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12382,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12383,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+12384,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+12385,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+12386,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12387,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12388,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12389,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12390,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12391,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12392,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12393,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12394,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+12395,((0xfeU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                [0U][2U] 
                                                >> 4U))),8);
        tracep->fullBit(oldp+12396,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                           [0U][2U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+12397,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12398,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12399,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12400,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12401,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12402,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12403,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12404,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12405,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+12406,((1U | (0xfeU 
                                             & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                [1U][2U] 
                                                >> 4U)))),8);
        tracep->fullBit(oldp+12407,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                           [1U][2U] 
                                           >> 0xcU))));
        tracep->fullBit(oldp+12408,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                           >> 0x15U))));
        __Vtemp4857[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[0U]);
        __Vtemp4857[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[1U]));
        __Vtemp4857[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+12409,(__Vtemp4857),85);
        tracep->fullBit(oldp+12412,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+12413,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+12416,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullWData(oldp+12419,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+12422,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+12423,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+12424,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+12425,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+12426,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12427,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12428,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12429,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12430,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12431,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12432,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12433,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12434,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+12435,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        __Vtemp4861[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp4861[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp4861[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+12436,(__Vtemp4861),85);
        tracep->fullBit(oldp+12439,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+12440,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12441,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12442,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12443,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12444,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12445,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12446,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12447,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12448,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+12449,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        __Vtemp4865[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp4865[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp4865[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+12450,(__Vtemp4865),85);
        tracep->fullBit(oldp+12453,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+12454,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12455,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12456,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12457,((3U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12458,((0xffU & (IData)(
                                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12459,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12460,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12461,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12462,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+12463,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [0U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12464,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [0U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12465,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [0U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12466,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [0U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12467,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [0U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12468,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [0U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12469,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [0U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12470,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [0U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12471,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [0U]))));
        tracep->fullBit(oldp+12472,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [0U]))));
        tracep->fullBit(oldp+12473,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [0U] 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+12474,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [0U] 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                       [0U] 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [0U] 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                               [0U] 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+12476,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12477,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12478,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12479,((3U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12480,((0xffU & (IData)(
                                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12481,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12482,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12483,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12484,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+12485,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [1U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12486,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [1U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12487,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [1U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12488,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [1U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12489,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [1U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12490,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [1U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12491,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [1U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12492,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [1U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12493,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [1U]))));
        tracep->fullBit(oldp+12494,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [1U]))));
        tracep->fullBit(oldp+12495,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [1U] 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+12496,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [1U] 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                       [1U] 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [1U] 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                               [1U] 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+12498,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12499,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12500,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12501,((3U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12502,((0xffU & (IData)(
                                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12503,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12504,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12505,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12506,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+12507,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [2U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12508,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [2U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12509,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [2U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12510,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [2U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12511,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [2U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12512,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [2U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12513,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [2U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12514,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [2U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12515,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [2U]))));
        tracep->fullBit(oldp+12516,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [2U]))));
        tracep->fullBit(oldp+12517,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [2U] 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+12518,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [2U] 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                       [2U] 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [2U] 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                               [2U] 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+12520,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12521,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12522,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12523,((3U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12524,((0xffU & (IData)(
                                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12525,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12526,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12527,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12528,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+12529,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [3U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12530,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [3U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12531,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [3U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12532,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [3U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12533,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [3U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12534,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [3U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12535,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [3U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12536,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [3U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12537,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [3U]))));
        tracep->fullBit(oldp+12538,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [3U]))));
        tracep->fullBit(oldp+12539,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [3U] 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+12540,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [3U] 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                       [3U] 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [3U] 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                               [3U] 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+12542,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12543,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12544,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12545,((3U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12546,((0xffU & (IData)(
                                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12547,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12548,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12549,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12550,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+12551,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [4U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12552,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [4U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12553,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [4U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12554,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [4U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12555,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [4U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12556,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [4U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12557,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [4U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12558,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [4U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12559,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [4U]))));
        tracep->fullBit(oldp+12560,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [4U]))));
        tracep->fullBit(oldp+12561,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [4U] 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+12562,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [4U] 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                       [4U] 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [4U] 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                               [4U] 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+12564,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12565,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12566,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12567,((3U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12568,((0xffU & (IData)(
                                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12569,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12570,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12571,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12572,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+12573,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [5U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12574,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [5U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12575,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [5U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12576,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [5U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12577,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [5U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12578,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [5U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12579,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [5U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12580,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [5U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12581,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [5U]))));
        tracep->fullBit(oldp+12582,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [5U]))));
        tracep->fullBit(oldp+12583,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [5U] 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+12584,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [5U] 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                       [5U] 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [5U] 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                               [5U] 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+12586,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12587,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12588,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12589,((3U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12590,((0xffU & (IData)(
                                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12591,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12592,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12593,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12594,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+12595,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [6U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12596,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [6U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12597,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [6U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12598,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [6U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12599,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [6U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12600,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [6U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12601,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [6U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12602,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [6U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12603,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [6U]))));
        tracep->fullBit(oldp+12604,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [6U]))));
        tracep->fullBit(oldp+12605,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [6U] 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+12606,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [6U] 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                       [6U] 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [6U] 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                               [6U] 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+12608,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12609,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12610,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12611,((3U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12612,((0xffU & (IData)(
                                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12613,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12614,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12615,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12616,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+12617,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [7U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12618,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [7U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12619,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [7U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12620,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [7U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12621,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [7U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12622,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [7U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12623,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [7U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12624,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [7U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12625,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [7U]))));
        tracep->fullBit(oldp+12626,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [7U]))));
        tracep->fullBit(oldp+12627,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [7U] 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+12628,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [7U] 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                       [7U] 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [7U] 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                               [7U] 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+12630,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12631,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12632,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12633,((3U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12634,((0xffU & (IData)(
                                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12635,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12636,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12637,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12638,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+12639,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [8U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12640,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [8U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12641,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [8U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12642,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [8U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12643,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [8U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12644,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [8U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12645,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [8U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12646,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [8U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12647,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [8U]))));
        tracep->fullBit(oldp+12648,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [8U]))));
        tracep->fullBit(oldp+12649,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [8U] 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+12650,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [8U] 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                       [8U] 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [8U] 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                               [8U] 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+12652,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12653,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12654,((7U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12655,((3U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12656,((0xffU & (IData)(
                                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12657,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12658,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12659,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12660,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+12661,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [9U] 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+12662,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [9U] 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+12663,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [9U] 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+12664,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [9U] 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+12665,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                        [9U] 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+12666,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [9U] 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+12667,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                               [9U] 
                                               >> 2U))),32);
        tracep->fullBit(oldp+12668,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [9U] 
                                                   >> 1U)))));
        tracep->fullBit(oldp+12669,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [9U]))));
        tracep->fullBit(oldp+12670,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                  [9U]))));
        tracep->fullBit(oldp+12671,((1U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                   [9U] 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+12672,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                    [9U] 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                       [9U] 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [9U] 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                               [9U] 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+12674,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_mtvec_init));
        tracep->fullBit(oldp+12675,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_d));
        tracep->fullCData(oldp+12676,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n),2);
        tracep->fullBit(oldp+12677,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_d) 
                                           >> 4U))));
        tracep->fullBit(oldp+12678,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_d) 
                                           >> 3U))));
        tracep->fullBit(oldp+12679,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_d) 
                                           >> 2U))));
        tracep->fullBit(oldp+12680,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_d) 
                                           >> 1U))));
        tracep->fullBit(oldp+12681,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_d))));
        tracep->fullBit(oldp+12682,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_en));
        tracep->fullCData(oldp+12683,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_d),3);
        tracep->fullBit(oldp+12684,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                           >> 5U))));
        tracep->fullBit(oldp+12685,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                           >> 4U))));
        tracep->fullCData(oldp+12686,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                             >> 2U))),2);
        tracep->fullBit(oldp+12687,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                           >> 1U))));
        tracep->fullBit(oldp+12688,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d))));
        tracep->fullBit(oldp+12689,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en));
        tracep->fullBit(oldp+12690,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en));
        tracep->fullBit(oldp+12691,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en));
        tracep->fullBit(oldp+12692,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en));
        tracep->fullBit(oldp+12693,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en));
        tracep->fullBit(oldp+12694,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_en));
        tracep->fullBit(oldp+12695,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en));
        tracep->fullBit(oldp+12696,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en));
        tracep->fullBit(oldp+12697,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
        tracep->fullBit(oldp+12698,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we));
        tracep->fullCData(oldp+12699,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we),2);
        tracep->fullCData(oldp+12700,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we),2);
        tracep->fullCData(oldp+12701,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d),6);
        tracep->fullIData(oldp+12702,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_d),32);
        tracep->fullIData(oldp+12703,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_d),32);
        tracep->fullBit(oldp+12704,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we))));
        tracep->fullBit(oldp+12705,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we))));
        tracep->fullBit(oldp+12706,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we) 
                                           >> 1U))));
        tracep->fullBit(oldp+12707,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we) 
                                           >> 1U))));
        tracep->fullBit(oldp+12708,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12709,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12710,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12711,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12712,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12713,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12714,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12715,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12716,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[0U])));
        tracep->fullBit(oldp+12717,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                           [0U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12718,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                             [0U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12719,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                             [0U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12720,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                             [0U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12721,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                [0U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12722,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                        [0U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                          [0U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12723,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                  [0U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12724,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                        [0U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                          [0U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12725,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                     [0U][0U])));
        tracep->fullBit(oldp+12726,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                           [1U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12727,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                             [1U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12728,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                             [1U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12729,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                             [1U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12730,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                [1U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12731,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                        [1U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                          [1U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12732,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                [1U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                  [1U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12733,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                        [1U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                          [1U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12734,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                     [1U][0U])));
        tracep->fullBit(oldp+12735,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                           [2U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12736,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                             [2U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12737,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                             [2U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12738,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                             [2U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12739,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                [2U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12740,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                        [2U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                          [2U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12741,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                [2U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                  [2U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12742,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                        [2U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                          [2U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12743,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                     [2U][0U])));
        tracep->fullBit(oldp+12744,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                           [0U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12745,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12746,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12747,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12748,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                [0U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12749,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                        [0U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                          [0U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12750,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                  [0U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12751,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                        [0U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                          [0U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12752,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                     [0U][0U])));
        tracep->fullBit(oldp+12753,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                           [1U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12754,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12755,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12756,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12757,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                [1U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12758,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                        [1U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                          [1U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12759,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                [1U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                  [1U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12760,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                        [1U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                          [1U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12761,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                     [1U][0U])));
        tracep->fullBit(oldp+12762,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                           [2U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12763,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                             [2U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12764,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                             [2U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12765,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                             [2U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12766,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                [2U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12767,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                        [2U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                          [2U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12768,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                [2U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                  [2U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12769,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                        [2U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                          [2U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12770,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                     [2U][0U])));
        tracep->fullCData(oldp+12771,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrequest),3);
        tracep->fullBit(oldp+12772,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12773,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12774,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12775,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12776,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12777,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12778,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12779,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12780,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+12781,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrequest))));
        tracep->fullBit(oldp+12782,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12783,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12784,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12785,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12786,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12787,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12788,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12789,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12790,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+12791,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dfifo_rspready),3);
        tracep->fullBit(oldp+12792,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dfifo_rspready))));
        tracep->fullBit(oldp+12793,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12794,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12795,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12796,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12797,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12798,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12799,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12800,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12801,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+12802,((0xfcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                [0U][2U] 
                                                >> 3U))),8);
        tracep->fullCData(oldp+12803,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                             [0U][2U] 
                                             >> 0xbU))),2);
        tracep->fullBit(oldp+12804,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12805,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12806,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12807,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12808,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12809,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12810,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12811,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12812,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+12813,((1U | (0xfcU 
                                             & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                [1U][2U] 
                                                >> 3U)))),8);
        tracep->fullCData(oldp+12814,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                             [1U][2U] 
                                             >> 0xbU))),2);
        tracep->fullBit(oldp+12815,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12816,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12817,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12818,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12819,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12820,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12821,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12822,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12823,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+12824,((2U | (0xfcU 
                                             & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                [2U][2U] 
                                                >> 3U)))),8);
        tracep->fullCData(oldp+12825,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                             [2U][2U] 
                                             >> 0xbU))),2);
        tracep->fullBit(oldp+12826,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
                                           >> 0x15U))));
        __Vtemp4929[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[0U]);
        __Vtemp4929[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[1U]));
        __Vtemp4929[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+12827,(__Vtemp4929),85);
        tracep->fullBit(oldp+12830,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+12831,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+12834,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullWData(oldp+12837,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2]),86);
        tracep->fullWData(oldp+12840,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+12843,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),3);
        tracep->fullCData(oldp+12844,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),3);
        tracep->fullBit(oldp+12845,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12846,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12847,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12848,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12849,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12850,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12851,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12852,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12853,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+12854,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        __Vtemp4933[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp4933[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp4933[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+12855,(__Vtemp4933),85);
        tracep->fullBit(oldp+12858,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+12859,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12860,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12861,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12862,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12863,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12864,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12865,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12866,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12867,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+12868,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        __Vtemp4937[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp4937[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp4937[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+12869,(__Vtemp4937),85);
        tracep->fullBit(oldp+12872,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+12873,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12874,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12875,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12876,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12877,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12878,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12879,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12880,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12881,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+12882,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        __Vtemp4941[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp4941[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp4941[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+12883,(__Vtemp4941),85);
        tracep->fullBit(oldp+12886,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+12887,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_we_ex),2);
        tracep->fullIData(oldp+12888,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb),32);
        tracep->fullIData(oldp+12889,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
        tracep->fullBit(oldp+12890,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req));
        tracep->fullCData(oldp+12891,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
        tracep->fullCData(oldp+12892,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
        tracep->fullBit(oldp+12893,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                     | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
        tracep->fullBit(oldp+12894,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
        tracep->fullBit(oldp+12895,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
        tracep->fullBit(oldp+12896,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
        tracep->fullBit(oldp+12897,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
        tracep->fullBit(oldp+12898,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update));
        tracep->fullBit(oldp+12899,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update));
        tracep->fullBit(oldp+12900,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update));
        tracep->fullBit(oldp+12901,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_en));
        tracep->fullCData(oldp+12902,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_d),8);
        tracep->fullBit(oldp+12903,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_en));
        tracep->fullBit(oldp+12904,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_en));
        tracep->fullCData(oldp+12905,((0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                               >> 0x1cU))),4);
        tracep->fullSData(oldp+12906,((0xfffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                 >> 0x10U))),12);
        tracep->fullBit(oldp+12907,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                           >> 0xfU))));
        tracep->fullBit(oldp+12908,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                           >> 0xeU))));
        tracep->fullBit(oldp+12909,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                           >> 0xdU))));
        tracep->fullBit(oldp+12910,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                           >> 0xcU))));
        tracep->fullBit(oldp+12911,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                           >> 0xbU))));
        tracep->fullBit(oldp+12912,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                           >> 0xaU))));
        tracep->fullBit(oldp+12913,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                           >> 9U))));
        tracep->fullCData(oldp+12914,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 6U))),3);
        tracep->fullBit(oldp+12915,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                           >> 5U))));
        tracep->fullBit(oldp+12916,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                           >> 4U))));
        tracep->fullBit(oldp+12917,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                           >> 3U))));
        tracep->fullBit(oldp+12918,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                           >> 2U))));
        tracep->fullCData(oldp+12919,((3U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d)),2);
        tracep->fullBit(oldp+12920,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en));
        tracep->fullBit(oldp+12921,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_en));
        tracep->fullIData(oldp+12922,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_d),32);
        tracep->fullIData(oldp+12923,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d),32);
        tracep->fullCData(oldp+12924,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        tracep->fullCData(oldp+12925,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        tracep->fullBit(oldp+12926,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        tracep->fullBit(oldp+12927,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12928,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12929,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12930,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12931,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12932,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+12933,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12934,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+12935,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U])));
        tracep->fullSData(oldp+12936,(((0x200000U & 
                                        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U])
                                        ? (0xfffU & 
                                           ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                             << 0x19U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                               >> 7U)))
                                        : 0U)),12);
        tracep->fullBit(oldp+12937,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__req_i));
        tracep->fullIData(oldp+12938,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o)),32);
        tracep->fullIData(oldp+12939,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o 
                                               >> 0x20U))),32);
        tracep->fullBit(oldp+12940,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__data_valid));
        tracep->fullIData(oldp+12941,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d)),32);
        tracep->fullIData(oldp+12942,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d 
                                               >> 0x20U))),32);
        tracep->fullQData(oldp+12943,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits),64);
        tracep->fullIData(oldp+12945,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+12946,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                           [0U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12947,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                             [0U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12948,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                             [0U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12949,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                             [0U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12950,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                [0U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12951,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                        [0U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                          [0U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12952,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                  [0U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12953,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                        [0U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                          [0U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12954,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                     [0U][0U])));
        tracep->fullBit(oldp+12955,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                           [1U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12956,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                             [1U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12957,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                             [1U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12958,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                             [1U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12959,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                [1U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12960,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                        [1U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                          [1U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12961,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                [1U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                  [1U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12962,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                        [1U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                          [1U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12963,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                     [1U][0U])));
        tracep->fullBit(oldp+12964,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                           [2U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12965,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                             [2U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12966,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                             [2U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12967,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                             [2U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12968,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                [2U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12969,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                        [2U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                          [2U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12970,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                [2U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                  [2U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12971,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                        [2U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                          [2U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12972,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                     [2U][0U])));
        tracep->fullBit(oldp+12973,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                           [0U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12974,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12975,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12976,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12977,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                [0U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12978,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                        [0U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                          [0U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12979,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                [0U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                  [0U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12980,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                        [0U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                          [0U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12981,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                     [0U][0U])));
        tracep->fullBit(oldp+12982,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                           [1U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12983,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12984,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12985,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12986,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                [1U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12987,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                        [1U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                          [1U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12988,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                [1U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                  [1U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12989,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                        [1U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                          [1U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12990,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                     [1U][0U])));
        tracep->fullBit(oldp+12991,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                           [2U][2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+12992,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                             [2U][2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+12993,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                             [2U][2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+12994,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                             [2U][2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+12995,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                [2U][2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+12996,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                        [2U][2U] << 0x1bU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                          [2U][1U] 
                                          >> 5U))),32);
        tracep->fullCData(oldp+12997,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                [2U][2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                  [2U][1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+12998,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                        [2U][1U] << 0x1fU) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                          [2U][0U] 
                                          >> 1U))),32);
        tracep->fullBit(oldp+12999,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                     [2U][0U])));
        tracep->fullCData(oldp+13000,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrequest),3);
        tracep->fullBit(oldp+13001,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+13002,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+13003,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+13004,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+13005,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+13006,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+13007,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+13008,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+13009,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+13010,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrequest))));
        tracep->fullBit(oldp+13011,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+13012,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+13013,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+13014,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+13015,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+13016,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+13017,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+13018,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+13019,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+13020,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready),3);
        tracep->fullBit(oldp+13021,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready))));
        tracep->fullBit(oldp+13022,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+13023,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+13024,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+13025,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+13026,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+13027,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+13028,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+13029,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+13030,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+13031,((0xfcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                [0U][2U] 
                                                >> 3U))),8);
        tracep->fullCData(oldp+13032,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                             [0U][2U] 
                                             >> 0xbU))),2);
        tracep->fullBit(oldp+13033,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+13034,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+13035,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+13036,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+13037,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+13038,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+13039,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+13040,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+13041,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+13042,((1U | (0xfcU 
                                             & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                [1U][2U] 
                                                >> 3U)))),8);
        tracep->fullCData(oldp+13043,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                             [1U][2U] 
                                             >> 0xbU))),2);
        tracep->fullBit(oldp+13044,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+13045,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+13046,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+13047,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+13048,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+13049,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+13050,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+13051,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+13052,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+13053,((2U | (0xfcU 
                                             & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                [2U][2U] 
                                                >> 3U)))),8);
        tracep->fullCData(oldp+13054,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                             [2U][2U] 
                                             >> 0xbU))),2);
        tracep->fullBit(oldp+13055,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
                                           >> 0x15U))));
        __Vtemp5005[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[0U]);
        __Vtemp5005[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[1U]));
        __Vtemp5005[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+13056,(__Vtemp5005),85);
        tracep->fullBit(oldp+13059,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+13060,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+13063,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullWData(oldp+13066,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2]),86);
        tracep->fullWData(oldp+13069,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+13072,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),3);
        tracep->fullCData(oldp+13073,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),3);
        tracep->fullBit(oldp+13074,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o));
        tracep->fullIData(oldp+13075,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int),32);
        tracep->fullIData(oldp+13076,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int),32);
        tracep->fullBit(oldp+13077,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack));
        tracep->fullCData(oldp+13078,(((4U != (7U & 
                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                >> 0x12U)))
                                        ? 0U : 1U)),2);
        tracep->fullBit(oldp+13079,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__tlul_error));
        tracep->fullCData(oldp+13080,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+13081,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                >> 5U))),8);
        tracep->fullBit(oldp+13082,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__req_i) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o)))));
        tracep->fullCData(oldp+13083,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+13084,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int),32);
        tracep->fullIData(oldp+13085,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int),32);
        tracep->fullIData(oldp+13086,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+13087,((((0U == (7U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U))) 
                                      | (1U == (7U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                   >> 0x12U)))) 
                                     | (4U == (7U & 
                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                >> 0x12U))))));
        tracep->fullBit(oldp+13088,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                                     & (((4U == (7U 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                    >> 0x12U))) 
                                         | (1U == (7U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                      >> 0x12U)))) 
                                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullBit(oldp+13089,((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                  >> 0x12U)))));
        tracep->fullBit(oldp+13090,((1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                  >> 0x12U)))));
        tracep->fullBit(oldp+13091,((4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                  >> 0x12U)))));
        tracep->fullBit(oldp+13092,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk));
        tracep->fullBit(oldp+13093,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__mask_chk));
        tracep->fullBit(oldp+13094,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk));
        tracep->fullCData(oldp+13095,((0xfU & ((IData)(1U) 
                                               << (3U 
                                                   & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                       << 0x1bU) 
                                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                         >> 5U)))))),4);
        tracep->fullSData(oldp+13096,(((((4U != (7U 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                    >> 0x12U)))
                                          ? 0U : 1U) 
                                        << 0xbU) | 
                                       (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__tlul_error) 
                                         << 0xaU) | 
                                        (0x3ffU & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                   >> 5U))))),13);
        tracep->fullBit(oldp+13097,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullCData(oldp+13098,((0x1eU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U])),5);
        tracep->fullBit(oldp+13099,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullCData(oldp+13100,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+13101,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullBit(oldp+13102,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+13103,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+13104,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+13105,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+13106,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+13107,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+13108,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+13109,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+13110,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+13111,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        __Vtemp5009[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp5009[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp5009[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+13112,(__Vtemp5009),85);
        tracep->fullBit(oldp+13115,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+13116,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+13117,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+13118,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+13119,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+13120,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+13121,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+13122,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+13123,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+13124,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+13125,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        __Vtemp5013[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp5013[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp5013[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+13126,(__Vtemp5013),85);
        tracep->fullBit(oldp+13129,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+13130,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+13131,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+13132,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+13133,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+13134,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+13135,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+13136,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+13137,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+13138,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+13139,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                           >> 0x15U))));
        __Vtemp5017[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp5017[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp5017[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+13140,(__Vtemp5017),85);
        tracep->fullBit(oldp+13143,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+13144,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+13145,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+13146,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+13147,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+13148,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+13149,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+13150,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                               >> 2U))),32);
        tracep->fullBit(oldp+13151,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                   >> 1U)))));
        tracep->fullBit(oldp+13152,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu))));
        tracep->fullBit(oldp+13153,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu))));
        tracep->fullBit(oldp+13154,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                   >> 0x33U)))));
        tracep->fullIData(oldp+13155,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                               >> 2U))),32);
        tracep->fullBit(oldp+13156,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                   >> 1U)))));
        tracep->fullBit(oldp+13157,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw));
        tracep->fullIData(oldp+13158,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata),32);
        tracep->fullIData(oldp+13159,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed),32);
        tracep->fullBit(oldp+13160,((3U != (3U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))));
        tracep->fullBit(oldp+13161,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn));
        tracep->fullBit(oldp+13162,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err));
        tracep->fullBit(oldp+13163,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err));
        tracep->fullBit(oldp+13164,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err));
        tracep->fullBit(oldp+13165,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_valid));
        tracep->fullIData(oldp+13166,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U]),32);
        tracep->fullIData(oldp+13167,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U]),32);
        tracep->fullIData(oldp+13168,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U]),32);
        tracep->fullCData(oldp+13169,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed),3);
        tracep->fullBit(oldp+13170,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
        tracep->fullIData(oldp+13171,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
        tracep->fullBit(oldp+13172,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err));
        tracep->fullBit(oldp+13173,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid));
        tracep->fullBit(oldp+13174,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
        tracep->fullBit(oldp+13175,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
        tracep->fullBit(oldp+13176,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
        tracep->fullBit(oldp+13177,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d));
        tracep->fullBit(oldp+13178,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror_valid));
        tracep->fullCData(oldp+13179,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror),3);
        tracep->fullCData(oldp+13180,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d),3);
        tracep->fullCData(oldp+13181,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                             >> 0x1dU))),3);
        tracep->fullCData(oldp+13182,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                >> 0x18U))),5);
        tracep->fullSData(oldp+13183,((0x7ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                 >> 0xdU))),11);
        tracep->fullBit(oldp+13184,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                           >> 0xcU))));
        tracep->fullBit(oldp+13185,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                           >> 0xbU))));
        tracep->fullCData(oldp+13186,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                             >> 8U))),3);
        tracep->fullCData(oldp+13187,((0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                               >> 4U))),4);
        tracep->fullCData(oldp+13188,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs)),4);
        tracep->fullBit(oldp+13189,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned))));
        tracep->fullBit(oldp+13190,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned))));
        tracep->fullBit(oldp+13191,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__going));
        tracep->fullBit(oldp+13192,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__exception));
        tracep->fullQData(oldp+13193,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d),64);
        tracep->fullCData(oldp+13195,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned),2);
        tracep->fullCData(oldp+13196,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_aligned),2);
        tracep->fullCData(oldp+13197,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned),2);
        tracep->fullCData(oldp+13198,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_d),2);
        tracep->fullCData(oldp+13199,((0xffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata))),8);
        tracep->fullCData(oldp+13200,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                        >> 8U)))),8);
        tracep->fullCData(oldp+13201,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                        >> 0x10U)))),8);
        tracep->fullCData(oldp+13202,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                        >> 0x18U)))),8);
        tracep->fullCData(oldp+13203,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                        >> 0x20U)))),8);
        tracep->fullCData(oldp+13204,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                        >> 0x28U)))),8);
        tracep->fullCData(oldp+13205,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                        >> 0x30U)))),8);
        tracep->fullCData(oldp+13206,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                        >> 0x38U)))),8);
        tracep->fullBit(oldp+13207,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+13208,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+13209,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+13210,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+13211,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+13212,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+13213,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+13214,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+13215,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+13216,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i))));
        tracep->fullBit(oldp+13217,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__accept_t_req));
        tracep->fullBit(oldp+13218,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__accept_t_rsp));
        tracep->fullBit(oldp+13219,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+13220,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+13221,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+13222,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+13223,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+13224,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+13225,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p 
                                               >> 2U))),32);
        tracep->fullBit(oldp+13226,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p 
                                                   >> 1U)))));
        tracep->fullBit(oldp+13227,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p))));
        tracep->fullBit(oldp+13228,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__hfifo_reqready));
        tracep->fullBit(oldp+13229,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i))));
        tracep->fullBit(oldp+13230,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+13231,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+13233,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d));
        tracep->fullBit(oldp+13234,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err));
        tracep->fullCData(oldp+13235,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n),2);
        tracep->fullCData(oldp+13236,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n),2);
        tracep->fullCData(oldp+13237,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
        tracep->fullCData(oldp+13238,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_d),3);
        tracep->fullCData(oldp+13239,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped),3);
        tracep->fullBit(oldp+13240,(vlTOPp->clock));
        tracep->fullBit(oldp+13241,(vlTOPp->reset_ni));
        tracep->fullIData(oldp+13242,(vlTOPp->gpio_i),20);
        tracep->fullIData(oldp+13243,(vlTOPp->gpio_o),20);
        tracep->fullBit(oldp+13244,(vlTOPp->uart_rx));
        tracep->fullBit(oldp+13245,(vlTOPp->uart_tx));
        tracep->fullBit(oldp+13246,((1U & (~ (IData)(vlTOPp->reset_ni)))));
        tracep->fullBit(oldp+13247,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq));
        tracep->fullBit(oldp+13248,((1U & (~ ((0x800000U 
                                               & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[8U])
                                               ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[8U] 
                                                  >> 0x16U)
                                               : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp))))));
        tracep->fullBit(oldp+13249,((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                              & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                                  | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq)) 
                                                 | (0U 
                                                    != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)))))));
        tracep->fullBit(oldp+13250,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_req));
        tracep->fullIData(oldp+13251,(((1U & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 2U)))
                                        ? ((1U & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                          >> 1U)))
                                            ? ((0xff000000U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                   << 0x18U)) 
                                               | (0xffffffU 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                     >> 8U)))
                                            : ((0xffff0000U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                   << 0x10U)) 
                                               | (0xffffU 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                     >> 0x10U))))
                                        : ((1U & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                          >> 1U)))
                                            ? ((0xffffff00U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                     >> 0x18U)))
                                            : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd))),32);
        tracep->fullBit(oldp+13252,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__in_valid_c2fpu));
        tracep->fullBit(oldp+13253,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        tracep->fullIData(oldp+13254,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[
                                      (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0xfU))]),32);
        tracep->fullBit(oldp+13255,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[
                                     (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x1bU))])));
        tracep->fullIData(oldp+13256,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[
                                       (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x1bU))])),32);
        tracep->fullBit(oldp+13257,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__fp_rf_we_wb_q) 
                                        | (0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q))))));
        tracep->fullIData(oldp+13258,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__is_fp_instr) 
                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2))
                                        ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_rdata_b
                                        : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc)),32);
        tracep->fullBit(oldp+13259,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id));
        tracep->fullBit(oldp+13260,((1U & (((((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                              & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                             & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                            & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id))) 
                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err))))));
        tracep->fullBit(oldp+13261,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err));
        tracep->fullBit(oldp+13262,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err_plus2));
        tracep->fullIData(oldp+13263,((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                       << 1U)),32);
        tracep->fullIData(oldp+13264,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_id),32);
        tracep->fullQData(oldp+13265,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[0]),34);
        tracep->fullQData(oldp+13267,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[1]),34);
        tracep->fullBit(oldp+13269,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle));
        tracep->fullBit(oldp+13270,((1U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__stall) 
                                               | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))) 
                                           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)))));
        tracep->fullBit(oldp+13271,(((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                     | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req))));
        tracep->fullBit(oldp+13272,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ctrl_busy) 
                                       | ((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                          | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req))) 
                                      | (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                     | (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_busy)))));
        tracep->fullBit(oldp+13273,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing)) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id)))));
        tracep->fullBit(oldp+13274,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match));
        tracep->fullIData(oldp+13275,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                        ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex)
                                            ? (IData)(
                                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                      [0U])
                                            : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))
                                        : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result)),32);
        tracep->fullBit(oldp+13276,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec))));
        tracep->fullBit(oldp+13277,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec))));
        tracep->fullIData(oldp+13278,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd),32);
        tracep->fullIData(oldp+13279,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd),32);
        tracep->fullBit(oldp+13280,((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)) 
                                           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                                              | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))))));
        tracep->fullBit(oldp+13281,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_write_wb));
        tracep->fullBit(oldp+13282,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                     & (1U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)))));
        tracep->fullBit(oldp+13283,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__data_req_out));
        tracep->fullBit(oldp+13284,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_id));
        tracep->fullIData(oldp+13285,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_mtval),32);
        tracep->fullBit(oldp+13286,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))));
        tracep->fullBit(oldp+13287,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_instr_ret_wb) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q))));
        tracep->fullBit(oldp+13288,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_in_ready) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
        tracep->fullBit(oldp+13289,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                      & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill))) 
                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access) 
                                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_ld_hz)))));
        tracep->fullBit(oldp+13290,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec))));
        tracep->fullBit(oldp+13291,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec))));
        tracep->fullBit(oldp+13292,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) 
                                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id)))));
        tracep->fullBit(oldp+13293,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                     & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                         | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq)) 
                                        | (0U != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)))));
        tracep->fullIData(oldp+13294,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_swap_oprnds)
                                        ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fpu_op_b
                                        : (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[
                                           (0x1fU & 
                                            (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x1bU))]))),32);
        tracep->fullBit(oldp+13295,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__busy));
        tracep->fullBit(oldp+13296,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw) 
                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_in_ready)) 
                                      & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set))) 
                                     | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                        & (~ ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__stall) 
                                                  | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))) 
                                              | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)))))));
        tracep->fullBit(oldp+13297,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                           & ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                               ? (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                   >> 1U) 
                                                  & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                               : (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                  & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
        tracep->fullIData(oldp+13298,(((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
                                        ? ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
                                            ? 0x10040808U
                                            : 0x10040800U)
                                        : ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
                                            ? ((0xffffff00U 
                                                & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                               | (0x7cU 
                                                  & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause) 
                                                     << 2U)))
                                            : (0xffffff00U 
                                               & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)))),32);
        tracep->fullBit(oldp+13299,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err)))));
        tracep->fullBit(oldp+13300,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->fullCData(oldp+13301,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                        ? (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                                 >> 1U))
                                        : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
        tracep->fullCData(oldp+13302,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                        ? (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n) 
                                                 >> 1U))
                                        : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n))),2);
        tracep->fullCData(oldp+13303,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                        ? (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n) 
                                                 >> 1U))
                                        : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n))),2);
        tracep->fullIData(oldp+13304,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__stored_addr_q),32);
        tracep->fullBit(oldp+13305,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
                                      & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->fullIData(oldp+13306,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set)
                                         ? (0xfffffffeU 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                         : (0xfffffffcU 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q)) 
                                       + (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))) 
                                          << 2U))),32);
        tracep->fullIData(oldp+13307,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q),32);
        tracep->fullBit(oldp+13308,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set) 
                                     | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
                                        & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))))));
        tracep->fullIData(oldp+13309,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set)
                                        ? (0xfffffffeU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                        : 0U)),32);
        tracep->fullBit(oldp+13310,((1U & (~ (IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                           >> 1U) 
                                                          | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev)))))))));
        tracep->fullIData(oldp+13311,((0xfffffffeU 
                                       & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                           + ((2U & 
                                               ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                << 1U)) 
                                              | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))) 
                                          << 1U))),32);
        tracep->fullCData(oldp+13312,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
        tracep->fullCData(oldp+13313,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
        tracep->fullIData(oldp+13314,(((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                        ? ((0xffff0000U 
                                            & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                 >> 0x10U)))
                                        : ((0xffff0000U 
                                            & ((IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                        >> 2U)) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                 >> 0x10U))))),32);
        tracep->fullBit(oldp+13315,((1U & ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                            ? ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                 >> 1U) 
                                                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                               | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                            : (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                  & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                     | (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)))))))));
        tracep->fullBit(oldp+13316,((1U & ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                            ? (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                >> 1U) 
                                               & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                            : (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                               & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
        tracep->fullBit(oldp+13317,((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                            >> 1U) 
                                           | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_valid))))));
        tracep->fullIData(oldp+13318,((0x7fffffffU 
                                       & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                          + ((2U & 
                                              ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                               << 1U)) 
                                             | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
        tracep->fullIData(oldp+13319,((0x7fffffffU 
                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set)
                                           ? (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set)
                                                ? (0xfffffffeU 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                                : 0U) 
                                              >> 1U)
                                           : (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                              + ((2U 
                                                  & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                     << 1U)) 
                                                 | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
        tracep->fullIData(oldp+13320,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
        tracep->fullBit(oldp+13321,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set) 
                                     | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_in_ready) 
                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw)))));
        tracep->fullBit(oldp+13322,(0U));
        tracep->fullQData(oldp+13323,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[0]),34);
        tracep->fullQData(oldp+13325,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[1]),34);
        tracep->fullIData(oldp+13327,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                        ? 0U : (0x1fU 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xfU)))),32);
        tracep->fullIData(oldp+13328,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b),32);
        tracep->fullBit(oldp+13329,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req) 
                                     | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
        tracep->fullQData(oldp+13330,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0]),34);
        tracep->fullQData(oldp+13332,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1]),34);
        tracep->fullBit(oldp+13334,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b))));
        tracep->fullBit(oldp+13335,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm));
        tracep->fullBit(oldp+13336,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        tracep->fullBit(oldp+13337,(((3U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                        | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn))))));
        tracep->fullBit(oldp+13338,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
        tracep->fullBit(oldp+13339,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
        tracep->fullBit(oldp+13340,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
        tracep->fullQData(oldp+13341,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[0]),34);
        tracep->fullQData(oldp+13343,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[1]),34);
        tracep->fullIData(oldp+13345,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex)
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                  [0U])
                                        : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
        tracep->fullBit(oldp+13346,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                                     | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
        tracep->fullQData(oldp+13347,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
        tracep->fullQData(oldp+13349,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
        tracep->fullQData(oldp+13351,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                        ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                        : (1ULL | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                   << 1U)))),33);
        tracep->fullQData(oldp+13353,((0x1ffffffffULL 
                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                           ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                           : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                               ? (~ 
                                                  ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                   << 1U))
                                               : ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                  << 1U))))),33);
        tracep->fullBit(oldp+13355,((1U & ((0x80000000U 
                                            & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                               ^ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b))
                                            ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                >> 0x1fU) 
                                               ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                            : (~ (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                          >> 0x20U)))))));
        tracep->fullQData(oldp+13356,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[0]),34);
        tracep->fullQData(oldp+13358,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[1]),34);
        tracep->fullQData(oldp+13360,((0x7ffffffffULL 
                                       & (VL_MULS_QQQ(35,35,35, 
                                                      (0x7ffffffffULL 
                                                       & VL_EXTENDS_QI(35,17, 
                                                                       (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                         << 0x10U) 
                                                                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                      (0x7ffffffffULL 
                                                       & VL_EXTENDS_QI(35,17, 
                                                                       (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                         << 0x10U) 
                                                                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                          + VL_EXTENDS_QQ(35,34, vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
        tracep->fullQData(oldp+13362,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
        tracep->fullQData(oldp+13364,((0x3ffffffffULL 
                                       & ((0x7ffffffffULL 
                                           & VL_MULS_QQQ(35,35,35, 
                                                         (0x7ffffffffULL 
                                                          & VL_EXTENDS_QI(35,17, 
                                                                          (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                            << 0x10U) 
                                                                           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                         (0x7ffffffffULL 
                                                          & VL_EXTENDS_QI(35,17, 
                                                                          (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                            << 0x10U) 
                                                                           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                          + (0x7ffffffffULL 
                                             & VL_EXTENDS_QQ(35,34, vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
        tracep->fullBit(oldp+13366,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                      ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))));
        tracep->fullBit(oldp+13367,((1U & (IData)((1ULL 
                                                   & ((VL_MULS_QQQ(35,35,35, 
                                                                   (0x7ffffffffULL 
                                                                    & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                   (0x7ffffffffULL 
                                                                    & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                                       + 
                                                       VL_EXTENDS_QQ(35,34, vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)) 
                                                      >> 0x22U))))));
        tracep->fullIData(oldp+13368,(((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                        ? ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                            ? ((0xffffff00U 
                                                & ((IData)(
                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                            >> 2U)) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                     >> 0x10U)))
                                            : ((0xffff0000U 
                                                & ((IData)(
                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                            >> 2U)) 
                                                   << 0x10U)) 
                                               | (0xffffU 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                     >> 8U))))
                                        : ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                            ? ((0xff000000U 
                                                & ((IData)(
                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                            >> 2U)) 
                                                   << 0x18U)) 
                                               | vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q)
                                            : (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                       >> 2U))))),32);
        tracep->fullIData(oldp+13369,(((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                        ? ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                            ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                ? (
                                                   (0xffff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                              >> 9U))))) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & ((IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                   >> 2U)) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                            >> 0x10U))))
                                                : (
                                                   (0xff00U 
                                                    & ((IData)(
                                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                >> 2U)) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                         >> 0x10U))))
                                            : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                ? (
                                                   (0xffff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                              >> 0x21U))))) 
                                                       << 0x10U)) 
                                                   | (0xffffU 
                                                      & (IData)(
                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                 >> 0x12U))))
                                                : (0xffffU 
                                                   & (IData)(
                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                              >> 0x12U)))))
                                        : ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                            ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                ? (
                                                   (0xffff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                              >> 0x19U))))) 
                                                       << 0x10U)) 
                                                   | (0xffffU 
                                                      & (IData)(
                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                 >> 0xaU))))
                                                : (0xffffU 
                                                   & (IData)(
                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                              >> 0xaU))))
                                            : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                ? (
                                                   (0xffff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                              >> 0x11U))))) 
                                                       << 0x10U)) 
                                                   | (0xffffU 
                                                      & (IData)(
                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                 >> 2U))))
                                                : (0xffffU 
                                                   & (IData)(
                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                              >> 2U))))))),32);
        tracep->fullIData(oldp+13370,(((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                        ? ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                            ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                ? (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                              >> 0x21U))))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                 >> 0x1aU))))
                                                : (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                              >> 0x1aU))))
                                            : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                ? (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                              >> 0x19U))))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                 >> 0x12U))))
                                                : (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                              >> 0x12U)))))
                                        : ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                            ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                ? (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                              >> 0x11U))))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                 >> 0xaU))))
                                                : (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                              >> 0xaU))))
                                            : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                ? (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                              >> 9U))))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                 >> 2U))))
                                                : (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                              >> 2U))))))),32);
        tracep->fullBit(oldp+13371,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
        tracep->fullIData(oldp+13372,(((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux_we))
                                        ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux
                                       [0U] : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux
                                       [1U])),32);
        tracep->fullIData(oldp+13373,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        tracep->fullIData(oldp+13374,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        tracep->fullIData(oldp+13375,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux[0]),32);
        tracep->fullIData(oldp+13376,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux[1]),32);
        tracep->fullBit(oldp+13377,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q));
        tracep->fullBit(oldp+13378,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_wb)) 
                                     | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                        & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))))));
        tracep->fullIData(oldp+13379,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__fp_rf_wdata_wb_q),32);
        tracep->fullIData(oldp+13380,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_mtvec_init)
                                        ? 0x200000f1U
                                        : (0xf1U | 
                                           (0xffffff00U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
        tracep->fullCData(oldp+13381,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                        ? (5U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                        : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
        tracep->fullIData(oldp+13382,((0x28001048U 
                                       | (4U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
                                                 >> (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                                                << 2U)))),32);
        tracep->fullIData(oldp+13383,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                      [vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q]),32);
        tracep->fullBit(oldp+13384,(((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                            >> 8U)) 
                                     > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        tracep->fullBit(oldp+13385,(((3U == (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                   >> 0xaU))) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wreq))));
        tracep->fullBit(oldp+13386,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_dyn_mod) 
                                     & (7U == (7U & 
                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0xcU))))));
        tracep->fullBit(oldp+13387,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                     & (0x7a0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_addr)))));
        tracep->fullBit(oldp+13388,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
        tracep->fullBit(oldp+13389,((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                            >> 2U) 
                                           & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                 >> 2U))))));
        tracep->fullCData(oldp+13390,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_in_ready),4);
        tracep->fullBit(oldp+13391,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid));
        tracep->fullCData(oldp+13392,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
        tracep->fullCData(oldp+13393,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
        tracep->fullCData(oldp+13394,((3U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_wb) 
                                              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                  ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                                  : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                              : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->fullBit(oldp+13395,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                                     & ((4U >= (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt)) 
                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                                           >> (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt))))));
        tracep->fullBit(oldp+13396,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        tracep->fullCData(oldp+13397,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        tracep->fullCData(oldp+13398,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        tracep->fullCData(oldp+13399,((7U & ((1U & 
                                              ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready) 
                                               & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                  ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                                  : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                              : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        tracep->fullCData(oldp+13400,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        tracep->fullCData(oldp+13401,((7U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                              ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                              : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        tracep->fullCData(oldp+13402,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        tracep->fullCData(oldp+13403,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        tracep->fullSData(oldp+13404,((0xffffU & ((1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_out_valid))
                                                   ? 
                                                  ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__result_is_special)
                                                    ? 
                                                   ((0x4fU 
                                                     >= 
                                                     (0x7fU 
                                                      & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                         << 4U)))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                           << 4U)))
                                                       ? 0U
                                                       : 
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_special_result[
                                                       ((IData)(1U) 
                                                        + 
                                                        (3U 
                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                            >> 1U)))] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                            << 4U))))) 
                                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_special_result[
                                                        (3U 
                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                            >> 1U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                            << 4U))))
                                                     : 0U)
                                                    : 
                                                   ((0x4fU 
                                                     >= 
                                                     (0x7fU 
                                                      & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                         << 4U)))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                           << 4U)))
                                                       ? 0U
                                                       : 
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[
                                                       ((IData)(1U) 
                                                        + 
                                                        (3U 
                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                            >> 1U)))] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                            << 4U))))) 
                                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[
                                                        (3U 
                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                            >> 1U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                            << 4U))))
                                                     : 0U))
                                                   : 
                                                  ((0x8000U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                       << 0xfU)) 
                                                   | ((0x4000U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                          << 0xeU)) 
                                                      | ((0x2000U 
                                                          & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                             << 0xdU)) 
                                                         | ((0x1000U 
                                                             & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                << 0xcU)) 
                                                            | ((0x800U 
                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                   << 0xbU)) 
                                                               | ((0x400U 
                                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                      << 0xaU)) 
                                                                  | ((0x200U 
                                                                      & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                         << 9U)) 
                                                                     | ((0x100U 
                                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                            << 8U)) 
                                                                        | ((0x80U 
                                                                            & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                               << 7U)) 
                                                                           | ((0x40U 
                                                                               & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                                << 6U)) 
                                                                              | ((0x20U 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit)))))))))))))))))))),16);
        tracep->fullIData(oldp+13405,((0xfffffffU & 
                                       ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__effective_subtraction)
                                         ? (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__addend_after_shift)
                                         : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__addend_after_shift))),28);
        tracep->fullBit(oldp+13406,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__effective_subtraction) 
                                     & (~ (IData)((0U 
                                                   != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__addend_sticky_bits)))))));
        tracep->fullIData(oldp+13407,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__sum_raw),29);
        tracep->fullBit(oldp+13408,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__sum_raw 
                                           >> 0x1cU))));
        tracep->fullCData(oldp+13409,((0x1fU & ((VL_GTES_III(1,32,32, 0U, 
                                                             VL_EXTENDS_II(32,10, (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__exponent_difference))) 
                                                 | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__effective_subtraction) 
                                                    & VL_GTES_III(1,32,32, 2U, 
                                                                  VL_EXTENDS_II(32,10, (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__exponent_difference)))))
                                                 ? 
                                                ((VL_LTES_III(1,32,32, 0U, 
                                                              ((IData)(1U) 
                                                               + 
                                                               (VL_EXTENDS_II(32,10, (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__exponent_product)) 
                                                                - 
                                                                VL_EXTENDS_II(32,6, 
                                                                              (0x1fU 
                                                                               & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))))) 
                                                  & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)
                                                  ? 
                                                 ((IData)(0xaU) 
                                                  + 
                                                  vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])
                                                  : 
                                                 ((IData)(0xaU) 
                                                  + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__exponent_product)))
                                                 : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__addend_shamt)))),5);
        tracep->fullBit(oldp+13410,(((0U != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__sum_sticky_bits) 
                                     | (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__addend_sticky_bits)))));
        tracep->fullBit(oldp+13411,(((((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__pre_round_abs)) 
                                       & (0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits))) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__effective_subtraction))
                                      ? (2U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                      : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__final_sign))));
        tracep->fullBit(oldp+13412,((1U & ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                            ? (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew) 
                                                >> 1U) 
                                               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew) 
                                                  | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits) 
                                                     >> 1U)))
                                            : ((2U 
                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits)) 
                                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__final_sign)))
                                                    : 
                                                   ((0U 
                                                     != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits)) 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__final_sign)))
                                                : (
                                                   (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew)) 
                                                   & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits) 
                                                       >> 1U) 
                                                      & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits) 
                                                         | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__pre_round_abs)))))))));
        tracep->fullBit(oldp+13413,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        tracep->fullCData(oldp+13414,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        tracep->fullCData(oldp+13415,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        tracep->fullCData(oldp+13416,((7U & ((1U & 
                                              (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                  ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                                  : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                              : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        tracep->fullBit(oldp+13417,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        tracep->fullCData(oldp+13418,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        tracep->fullCData(oldp+13419,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        tracep->fullCData(oldp+13420,((7U & ((1U & 
                                              (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready) 
                                                >> 2U) 
                                               & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                  ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                                  : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                              : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        tracep->fullBit(oldp+13421,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        tracep->fullCData(oldp+13422,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        tracep->fullCData(oldp+13423,((7U & ((1U & 
                                              (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready) 
                                                >> 3U) 
                                               & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                  ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                                  : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                              : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        tracep->fullIData(oldp+13424,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[
                                      (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x1bU))]),32);
        tracep->fullCData(oldp+13425,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q),8);
        tracep->fullCData(oldp+13426,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be)
                                        : 0xfU)),4);
        tracep->fullBit(oldp+13427,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q));
        tracep->fullBit(oldp+13428,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty)))));
        tracep->fullBit(oldp+13429,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)))));
        tracep->fullIData(oldp+13430,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q)
                                        ? (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux 
                                                   >> 0x20U))
                                        : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux))),32);
        tracep->fullBit(oldp+13431,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__rvalid));
        tracep->fullIData(oldp+13432,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                        ? 0U : (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                                        >> 
                                                        (0x20U 
                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                            << 5U)))))),32);
        tracep->fullCData(oldp+13433,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)
                                        ? 2U : (3U 
                                                & (((1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(2U) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->fullBit(oldp+13434,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+13435,((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk))))));
        tracep->fullIData(oldp+13436,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage)),32);
        tracep->fullIData(oldp+13437,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                               >> 0x20U))),32);
        tracep->fullIData(oldp+13438,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                               >> (0x20U 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      << 5U))))),32);
        tracep->fullQData(oldp+13439,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rom_rdata),64);
        tracep->fullQData(oldp+13441,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_q),64);
        tracep->fullBit(oldp+13443,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i));
        tracep->fullBit(oldp+13444,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__dap__td_o));
        tracep->fullBit(oldp+13445,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__dap__tdo_oe_o));
        tracep->fullIData(oldp+13446,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                               [(3U 
                                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))] 
                                               >> 2U))),32);
        tracep->fullCData(oldp+13447,((3U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                                    [
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))]))),2);
        tracep->fullQData(oldp+13448,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_d),41);
        tracep->fullCData(oldp+13450,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d),5);
        tracep->fullCData(oldp+13451,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d),5);
        tracep->fullBit(oldp+13452,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir)
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q)
                                            : ((1U 
                                                == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q
                                                : (
                                                   (0x10U 
                                                    == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                    ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q
                                                    : 
                                                   ((0x11U 
                                                     == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                     ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q)
                                                     : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q))))))));
        tracep->fullBit(oldp+13453,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i)))));
        tracep->fullCData(oldp+13454,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)
                                        ? 4U : (7U 
                                                & (((1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync) 
                                                        >> 2U)))
                                                    ? 
                                                   ((3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr)) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync)))
                                                    : 
                                                   (((IData)(4U) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync))) 
                                                    + 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr))))))),3);
        tracep->fullCData(oldp+13455,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                        == (4U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))
                                        ? 4U : (7U 
                                                & (((1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr) 
                                                        >> 2U)))
                                                    ? 
                                                   ((3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi)) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(4U) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr))) 
                                                    + 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi))))))),3);
        tracep->fullCData(oldp+13456,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray),3);
        tracep->fullBit(oldp+13457,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty));
        tracep->fullBit(oldp+13458,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                     == (4U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))));
        tracep->fullCData(oldp+13459,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq),3);
        tracep->fullCData(oldp+13460,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)
                                        ? 4U : (7U 
                                                & (((1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync) 
                                                        >> 2U)))
                                                    ? 
                                                   ((3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr)) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync)))
                                                    : 
                                                   (((IData)(4U) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync))) 
                                                    + 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr))))))),3);
        tracep->fullQData(oldp+13461,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                      [(3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))]),34);
        tracep->fullCData(oldp+13463,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                        == (4U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))
                                        ? 4U : (7U 
                                                & (((1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr) 
                                                        >> 2U)))
                                                    ? 
                                                   ((3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi)) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(4U) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))) 
                                                    + 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi))))))),3);
        tracep->fullCData(oldp+13464,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray),3);
        tracep->fullBit(oldp+13465,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+13466,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk));
        tracep->fullBit(oldp+13467,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                     == (4U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))));
        tracep->fullCData(oldp+13468,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_rptr__DOT__intq),3);
        tracep->fullBit(oldp+13469,((1U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                            >> 0x15U) 
                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom)))));
        tracep->fullBit(oldp+13470,((((1U == (3U & 
                                              ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))) 
                                      & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xaU))) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack))));
        tracep->fullBit(oldp+13471,((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                           & ((1U == 
                                               (3U 
                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xbU)))
                                               ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                  | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                     >> 0xaU))
                                               : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                  >> 0xaU))))));
        tracep->fullIData(oldp+13472,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q)
                                         ? (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux 
                                                    >> 0x20U))
                                         : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux)) 
                                       & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask)),32);
        tracep->fullIData(oldp+13473,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask),32);
        tracep->fullBit(oldp+13474,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full) 
                                           | (((1U 
                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                   >> 1U)) 
                                               == (1U 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      >> 1U)))
                                               ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                  - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                               : (((IData)(1U) 
                                                   - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                  + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        tracep->fullBit(oldp+13475,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack))));
        tracep->fullBit(oldp+13476,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+13477,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full) 
                                           | (((1U 
                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                   >> 1U)) 
                                               == (1U 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      >> 1U)))
                                               ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                  - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                               : (((IData)(1U) 
                                                   - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                  + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        tracep->fullBit(oldp+13478,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))));
        tracep->fullBit(oldp+13479,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+13480,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full) 
                                           | (((1U 
                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                   >> 1U)) 
                                               == (1U 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      >> 1U)))
                                               ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                  - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                               : (((IData)(1U) 
                                                   - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                  + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        tracep->fullBit(oldp+13481,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                     & (((1U == (3U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                    >> 0xbU))) 
                                         & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xaU))) 
                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack)))));
        tracep->fullQData(oldp+13482,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))
                                        ? ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword)) 
                                           << 1U) : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage)),33);
        tracep->fullBit(oldp+13484,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending));
        tracep->fullBit(oldp+13485,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending));
        tracep->fullBit(oldp+13486,((1U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                            >> 0x15U) 
                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar)))));
        tracep->fullBit(oldp+13487,((((1U == (3U & 
                                              ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))) 
                                      & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xaU))) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->fullBit(oldp+13488,((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                           & ((1U == 
                                               (3U 
                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xbU)))
                                               ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                  | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                     >> 0xaU))
                                               : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                  >> 0xaU))))));
        tracep->fullIData(oldp+13489,((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rdata_o 
                                       & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->fullCData(oldp+13490,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                        ? 4U : (7U 
                                                & (((1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U)))
                                                    ? 
                                                   ((3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(4U) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->fullBit(oldp+13491,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->fullSData(oldp+13492,(((0x33U >= (0x3fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                        ? (0x1fffU 
                                           & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                      >> 
                                                      (0x3fU 
                                                       & ((IData)(0xdU) 
                                                          * 
                                                          (3U 
                                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                        : 0U)),13);
        tracep->fullCData(oldp+13493,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                        ? 4U : (7U 
                                                & (((1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U)))
                                                    ? 
                                                   ((3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(4U) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->fullBit(oldp+13494,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))));
        tracep->fullCData(oldp+13495,(((0x13U >= (0x1fU 
                                                  & ((IData)(5U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                        ? (0x1fU & 
                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                            >> (0x1fU 
                                                & ((IData)(5U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                        : 0U)),5);
        tracep->fullCData(oldp+13496,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                        ? 4U : (7U 
                                                & (((1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U)))
                                                    ? 
                                                   ((3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(4U) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->fullBit(oldp+13497,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                     & (((1U == (3U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                    >> 0xbU))) 
                                         & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xaU))) 
                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack)))));
        tracep->fullQData(oldp+13498,(((0x83U >= (0xffU 
                                                  & ((IData)(0x21U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                        ? (0x1ffffffffULL 
                                           & (((0U 
                                                == 
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
                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                        : 0ULL)),33);
        tracep->fullQData(oldp+13500,((0x1ffffffffULL 
                                       & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))
                                           ? ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                              << 1U)
                                           : ((0x83U 
                                               >= (0xffU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                               ? ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x21U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
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
                                               : 0ULL)))),33);
        tracep->fullBit(oldp+13502,((1U & ((IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x33U)) 
                                           & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[0U]))));
        tracep->fullBit(oldp+13503,((1U & (((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__hw2reg[0U])
                                             ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__hw2reg[0U] 
                                                >> 1U)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_intr_state0__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__intr_state0_we)) 
                                              | (~ 
                                                 (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[0U] 
                                                  >> 1U)))))));
        tracep->fullIData(oldp+13504,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding),17);
        tracep->fullBit(oldp+13505,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_req_pending));
        tracep->fullBit(oldp+13506,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending));
        tracep->fullIData(oldp+13507,(vlTOPp->gpio_i),32);
        tracep->fullIData(oldp+13508,((((~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q) 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
                                       & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[4U])),32);
        tracep->fullIData(oldp+13509,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q 
                                        & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d)) 
                                       & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[3U])),32);
        tracep->fullIData(oldp+13510,(((((((~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q) 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[4U]) 
                                         | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q 
                                             & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d)) 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[3U])) 
                                        | ((~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[1U])) 
                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[2U]))),32);
        tracep->fullBit(oldp+13511,((1U & ((IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x33U)) 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [6U][0U]))));
        tracep->fullBit(oldp+13512,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_state_we) 
                                           | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U] 
                                              >> 0x15U)))));
        tracep->fullIData(oldp+13513,((((0x200000U 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U])
                                         ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[7U] 
                                             << 0xaU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U] 
                                               >> 0x16U))
                                         : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_state_we)
                                           ? (~ ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [6U][1U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [6U][0U] 
                                                    >> 1U)))
                                           : 0xffffffffU))),32);
        tracep->fullBit(oldp+13514,((1U & vlTOPp->gpio_i)));
        tracep->fullBit(oldp+13515,((1U & ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                            : vlTOPp->gpio_i))));
        tracep->fullBit(oldp+13516,((1U & (vlTOPp->gpio_i 
                                           >> 1U))));
        tracep->fullBit(oldp+13517,((1U & ((2U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 1U)))));
        tracep->fullBit(oldp+13518,((1U & (vlTOPp->gpio_i 
                                           >> 2U))));
        tracep->fullBit(oldp+13519,((1U & ((4U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 2U)))));
        tracep->fullBit(oldp+13520,((1U & (vlTOPp->gpio_i 
                                           >> 3U))));
        tracep->fullBit(oldp+13521,((1U & ((8U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 3U)))));
        tracep->fullBit(oldp+13522,((1U & (vlTOPp->gpio_i 
                                           >> 4U))));
        tracep->fullBit(oldp+13523,((1U & ((0x10U & 
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 4U)))));
        tracep->fullBit(oldp+13524,((1U & (vlTOPp->gpio_i 
                                           >> 5U))));
        tracep->fullBit(oldp+13525,((1U & ((0x20U & 
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 5U)))));
        tracep->fullBit(oldp+13526,((1U & (vlTOPp->gpio_i 
                                           >> 6U))));
        tracep->fullBit(oldp+13527,((1U & ((0x40U & 
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 6U)))));
        tracep->fullBit(oldp+13528,((1U & (vlTOPp->gpio_i 
                                           >> 7U))));
        tracep->fullBit(oldp+13529,((1U & ((0x80U & 
                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 7U)))));
        tracep->fullBit(oldp+13530,((1U & (vlTOPp->gpio_i 
                                           >> 8U))));
        tracep->fullBit(oldp+13531,((1U & ((0x100U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 8U)))));
        tracep->fullBit(oldp+13532,((1U & (vlTOPp->gpio_i 
                                           >> 9U))));
        tracep->fullBit(oldp+13533,((1U & ((0x200U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 9U)))));
        tracep->fullBit(oldp+13534,((1U & (vlTOPp->gpio_i 
                                           >> 0xaU))));
        tracep->fullBit(oldp+13535,((1U & ((0x400U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0xaU)))));
        tracep->fullBit(oldp+13536,((1U & (vlTOPp->gpio_i 
                                           >> 0xbU))));
        tracep->fullBit(oldp+13537,((1U & ((0x800U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0xbU)))));
        tracep->fullBit(oldp+13538,((1U & (vlTOPp->gpio_i 
                                           >> 0xcU))));
        tracep->fullBit(oldp+13539,((1U & ((0x1000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0xcU)))));
        tracep->fullBit(oldp+13540,((1U & (vlTOPp->gpio_i 
                                           >> 0xdU))));
        tracep->fullBit(oldp+13541,((1U & ((0x2000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0xdU)))));
        tracep->fullBit(oldp+13542,((1U & (vlTOPp->gpio_i 
                                           >> 0xeU))));
        tracep->fullBit(oldp+13543,((1U & ((0x4000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+13544,((1U & (vlTOPp->gpio_i 
                                           >> 0xfU))));
        tracep->fullBit(oldp+13545,((1U & ((0x8000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0xfU)))));
        tracep->fullBit(oldp+13546,((1U & (vlTOPp->gpio_i 
                                           >> 0x10U))));
        tracep->fullBit(oldp+13547,((1U & ((0x10000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x10U)))));
        tracep->fullBit(oldp+13548,((1U & (vlTOPp->gpio_i 
                                           >> 0x11U))));
        tracep->fullBit(oldp+13549,((1U & ((0x20000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x11U)))));
        tracep->fullBit(oldp+13550,((1U & (vlTOPp->gpio_i 
                                           >> 0x12U))));
        tracep->fullBit(oldp+13551,((1U & ((0x40000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x12U)))));
        tracep->fullBit(oldp+13552,((1U & (vlTOPp->gpio_i 
                                           >> 0x13U))));
        tracep->fullBit(oldp+13553,((1U & ((0x80000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x13U)))));
        tracep->fullBit(oldp+13554,((1U & (vlTOPp->gpio_i 
                                           >> 0x14U))));
        tracep->fullBit(oldp+13555,((1U & ((0x100000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x14U)))));
        tracep->fullBit(oldp+13556,((1U & (vlTOPp->gpio_i 
                                           >> 0x15U))));
        tracep->fullBit(oldp+13557,((1U & ((0x200000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x15U)))));
        tracep->fullBit(oldp+13558,((1U & (vlTOPp->gpio_i 
                                           >> 0x16U))));
        tracep->fullBit(oldp+13559,((1U & ((0x400000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x16U)))));
        tracep->fullBit(oldp+13560,((1U & (vlTOPp->gpio_i 
                                           >> 0x17U))));
        tracep->fullBit(oldp+13561,((1U & ((0x800000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x17U)))));
        tracep->fullBit(oldp+13562,((1U & (vlTOPp->gpio_i 
                                           >> 0x18U))));
        tracep->fullBit(oldp+13563,((1U & ((0x1000000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x18U)))));
        tracep->fullBit(oldp+13564,((1U & (vlTOPp->gpio_i 
                                           >> 0x19U))));
        tracep->fullBit(oldp+13565,((1U & ((0x2000000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+13566,((1U & (vlTOPp->gpio_i 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+13567,((1U & ((0x4000000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x1aU)))));
        tracep->fullBit(oldp+13568,((1U & (vlTOPp->gpio_i 
                                           >> 0x1bU))));
        tracep->fullBit(oldp+13569,((1U & ((0x8000000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x1bU)))));
        tracep->fullBit(oldp+13570,((1U & (vlTOPp->gpio_i 
                                           >> 0x1cU))));
        tracep->fullBit(oldp+13571,((1U & ((0x10000000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x1cU)))));
        tracep->fullBit(oldp+13572,((1U & (vlTOPp->gpio_i 
                                           >> 0x1dU))));
        tracep->fullBit(oldp+13573,((1U & ((0x20000000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x1dU)))));
        tracep->fullBit(oldp+13574,((1U & (vlTOPp->gpio_i 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+13575,((1U & ((0x40000000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x1eU)))));
        tracep->fullBit(oldp+13576,((1U & (vlTOPp->gpio_i 
                                           >> 0x1fU))));
        tracep->fullBit(oldp+13577,((1U & ((0x80000000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                            : (vlTOPp->gpio_i 
                                               >> 0x1fU)))));
        tracep->fullCData(oldp+13578,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count),2);
        tracep->fullBit(oldp+13579,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data_R));
        tracep->fullBit(oldp+13580,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data));
        tracep->fullIData(oldp+13581,(((IData)(vlTOPp->reset_ni)
                                        ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data
                                        : 0U)),32);
        tracep->fullBit(oldp+13582,((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                            >> 0x15U) 
                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar)))));
        tracep->fullBit(oldp+13583,((((1U == (3U & 
                                              ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))) 
                                      & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xaU))) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack))));
        tracep->fullBit(oldp+13584,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid));
        tracep->fullBit(oldp+13585,((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                           & ((1U == 
                                               (3U 
                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xbU)))
                                               ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                  | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                     >> 0xaU))
                                               : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                  >> 0xaU))))));
        tracep->fullIData(oldp+13586,((((IData)(vlTOPp->reset_ni)
                                         ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data
                                         : 0U) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask)),32);
        tracep->fullIData(oldp+13587,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask),32);
        tracep->fullCData(oldp+13588,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                        ? 2U : (3U 
                                                & (((1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(2U) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->fullBit(oldp+13589,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack))));
        tracep->fullSData(oldp+13590,(((0x19U >= (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                        ? (0x1fffU 
                                           & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                              >> (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                        : 0U)),13);
        tracep->fullCData(oldp+13591,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                        ? 2U : (3U 
                                                & (((1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(2U) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->fullBit(oldp+13592,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid))));
        tracep->fullCData(oldp+13593,(((9U >= (0xfU 
                                               & ((IData)(5U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                        ? (0x1fU & 
                                           ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                            >> (0xfU 
                                                & ((IData)(5U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                        : 0U)),5);
        tracep->fullCData(oldp+13594,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                        ? 2U : (3U 
                                                & (((1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(2U) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->fullBit(oldp+13595,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                     & (((1U == (3U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                    >> 0xbU))) 
                                         & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xaU))) 
                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack)))));
        tracep->fullQData(oldp+13596,(((0x41U >= (0x7fU 
                                                  & ((IData)(0x21U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                        ? (0x1ffffffffULL 
                                           & (((0U 
                                                == 
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
                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                        : 0ULL)),33);
        tracep->fullQData(oldp+13598,((0x1ffffffffULL 
                                       & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid))
                                           ? ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword)) 
                                              << 1U)
                                           : ((0x41U 
                                               >= (0x7fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                               ? ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x21U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
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
                                               : 0ULL)))),33);
        tracep->fullBit(oldp+13600,(((IData)(vlTOPp->reset_ni) 
                                     & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                           >> 1U)))));
        tracep->fullBit(oldp+13601,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_q));
        tracep->fullBit(oldp+13602,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                       | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) 
                                     | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__wr_err))));
        tracep->fullBit(oldp+13603,((((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                               >> 9U)) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+13604,((((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                               >> 0x24U)) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+13605,((1U & ((IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x33U)) 
                                           & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U]))));
        tracep->fullBit(oldp+13606,((1U & ((IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x33U)) 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [0U][0U]))));
        tracep->fullBit(oldp+13607,((1U & (((0x80000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                             ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[2U]
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_watermark_we)) 
                                              | (~ 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 1U)))))));
        tracep->fullBit(oldp+13608,((1U & (((0x20000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                             ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                >> 0x1eU)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_watermark_we)) 
                                              | (~ 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 2U)))))));
        tracep->fullBit(oldp+13609,((1U & (((0x8000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                             ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                >> 0x1cU)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_empty_we)) 
                                              | (~ 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 3U)))))));
        tracep->fullBit(oldp+13610,((1U & (((0x2000000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                             ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                >> 0x1aU)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_overflow_we)) 
                                              | (~ 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 4U)))))));
        tracep->fullBit(oldp+13611,((1U & (((0x800000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                             ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                >> 0x18U)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_frame_err_we)) 
                                              | (~ 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 5U)))))));
        tracep->fullBit(oldp+13612,((1U & (((0x200000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                             ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                >> 0x16U)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_break_err_we)) 
                                              | (~ 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 6U)))))));
        tracep->fullBit(oldp+13613,((1U & (((0x80000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                             ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                >> 0x14U)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_timeout_we)) 
                                              | (~ 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 7U)))))));
        tracep->fullBit(oldp+13614,((1U & (((0x20000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                             ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                >> 0x12U)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)) 
                                           & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_parity_err_we)) 
                                              | (~ 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 8U)))))));
        tracep->fullCData(oldp+13615,((7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we)
                                              ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][1U] 
                                                  << 0x1dU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [0U][0U] 
                                                    >> 3U))
                                              : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U]))),3);
        tracep->fullCData(oldp+13616,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txilvl_we)
                                              ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][1U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [0U][0U] 
                                                    >> 6U))
                                              : ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                                  << 3U) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[0U] 
                                                    >> 0x1dU))))),2);
        tracep->fullCData(oldp+13617,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                        ? 0U : (0xffU 
                                                & (((0U 
                                                     == 
                                                     (0x18U 
                                                      & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         << 3U)))
                                                     ? 0U
                                                     : 
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                     ((IData)(1U) 
                                                      + 
                                                      (7U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          >> 2U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x18U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          << 3U))))) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                      (7U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          >> 2U))] 
                                                      >> 
                                                      (0x18U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          << 3U))))))),8);
        tracep->fullIData(oldp+13618,(((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U])
                                        ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout)
                                            ? 0U : 
                                           (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                                             != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                                             ? 0U : 
                                            ((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth))
                                              ? 0U : 
                                             (0xffffffU 
                                              & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)
                                                  : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)))))
                                        : 0U)),24);
        tracep->fullBit(oldp+13619,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                                     != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q))));
        tracep->fullBit(oldp+13620,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
                                     & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err)) 
                                        | (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data))))));
        tracep->fullBit(oldp+13621,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_d) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_prev_q)))));
        tracep->fullBit(oldp+13622,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_prev_q)))));
        tracep->fullBit(oldp+13623,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                      & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle_q))) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle))));
        tracep->fullBit(oldp+13624,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__full))));
        tracep->fullBit(oldp+13625,(((0x4000000U & 
                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])
                                      ? (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync) 
                                          & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                             | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2))) 
                                         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2)))
                                      : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync))));
        tracep->fullBit(oldp+13626,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync) 
                                      & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                         | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2))) 
                                     | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2)))));
        tracep->fullBit(oldp+13627,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready))));
        tracep->fullCData(oldp+13628,((0xffU & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      << 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U))))) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (7U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U))] 
                                                   >> 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U)))))),8);
        tracep->fullCData(oldp+13629,((0xffU & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      << 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U))))) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (7U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U))] 
                                                   >> 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U)))))),8);
        tracep->fullBit(oldp+13630,((1U & ((0x800000U 
                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[8U])
                                            ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[8U] 
                                               >> 0x16U)
                                            : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp)))));
        tracep->fullBit(oldp+13631,((1U & ((IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x33U)) 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [7U][0U]))));
        tracep->fullBit(oldp+13632,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_watermark_d) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_watermark_q)))));
        tracep->fullBit(oldp+13633,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_watermark_d) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_watermark_q)))));
        tracep->fullBit(oldp+13634,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__target_idle)) 
                                     & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_high_cnt 
                                        > vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[0U]))));
        tracep->fullCData(oldp+13635,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                        ? 0U : (0xffU 
                                                & (((0U 
                                                     == 
                                                     (0x18U 
                                                      & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         << 3U)))
                                                     ? 0U
                                                     : 
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                     ((IData)(1U) 
                                                      + 
                                                      (7U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          >> 2U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x18U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          << 3U))))) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                      (7U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          >> 2U))] 
                                                      >> 
                                                      (0x18U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          << 3U))))))),8);
        tracep->fullCData(oldp+13636,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__full)
                                        ? 0x20U : (0x3fU 
                                                   & (((1U 
                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                           >> 5U)) 
                                                       == 
                                                       (1U 
                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                           >> 5U)))
                                                       ? 
                                                      ((0x1fU 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                       - 
                                                       (0x1fU 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                       : 
                                                      (((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                       + 
                                                       (0x1fU 
                                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),6);
        tracep->fullBit(oldp+13637,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_rvalid) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_rready)) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        tracep->fullSData(oldp+13638,(((0x19fU >= (0x1ffU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                        ? (0x1fffU 
                                           & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                ? 0U
                                                : (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xdU) 
                                                         * 
                                                         (0x1fU 
                                                          & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__storage[
                                                 (0xfU 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                        : 0U)),13);
        tracep->fullSData(oldp+13639,((0x1fffU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_wvalid))
                                                   ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_wdata)
                                                   : 
                                                  ((0x19fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xdU) 
                                                          * 
                                                          (0x1fU 
                                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                      ? 0U
                                                      : 
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__storage[
                                                      ((IData)(1U) 
                                                       + 
                                                       (0xfU 
                                                        & (((IData)(0xdU) 
                                                            * 
                                                            (0x1fU 
                                                             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                           >> 5U)))] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0xdU) 
                                                           * 
                                                           (0x1fU 
                                                            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                    | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__storage[
                                                       (0xfU 
                                                        & (((IData)(0xdU) 
                                                            * 
                                                            (0x1fU 
                                                             & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0xdU) 
                                                           * 
                                                           (0x1fU 
                                                            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                                    : 0U)))),13);
        tracep->fullBit(oldp+13640,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_fifo_rvalid) 
                                      & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[9U] 
                                         >> 0x1aU)) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        tracep->fullCData(oldp+13641,((0xffU & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      << 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U))))) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (7U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U))] 
                                                   >> 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U)))))),8);
        tracep->fullBit(oldp+13642,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__tx_fifo_rvalid) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__tx_fifo_rready)) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        tracep->fullCData(oldp+13643,((0xffU & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      << 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U))))) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (7U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U))] 
                                                   >> 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U)))))),8);
        tracep->fullCData(oldp+13644,((0xffU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                                    >> 4U))
                                                 ? 
                                                ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U] 
                                                  << 0x1bU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                                    >> 5U))
                                                 : 
                                                (((0U 
                                                   == 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U)))
                                                   ? 0U
                                                   : 
                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   ((IData)(1U) 
                                                    + 
                                                    (7U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U))))) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                    (7U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U))] 
                                                    >> 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U))))))),8);
        tracep->fullBit(oldp+13645,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__acq_fifo_rvalid) 
                                      & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                          >> 0x10U) 
                                         & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                            >> 0xdU))) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        tracep->fullSData(oldp+13646,(((0x13fU >= (0x1ffU 
                                                   & ((IData)(0xaU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                        ? (0x3ffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xaU) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                              ? 0U : 
                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__storage[
                                              ((IData)(1U) 
                                               + (0xfU 
                                                  & (((IData)(0xaU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xaU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__storage[
                                               (0xfU 
                                                & (((IData)(0xaU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xaU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                        : 0U)),10);
        tracep->fullBit(oldp+13647,(((0x7fU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__input_byte) 
                                                >> 1U) 
                                               & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[3U] 
                                                   << 0x19U) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U] 
                                                     >> 7U)))) 
                                     == (0x7fU & ((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[3U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U] 
                                                     >> 0xeU))))));
        tracep->fullBit(oldp+13648,(((0x7fU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__input_byte) 
                                                >> 1U) 
                                               & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U] 
                                                   << 7U) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                                     >> 0x19U)))) 
                                     == (0x7fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U]))));
        tracep->fullCData(oldp+13649,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+13650,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hfifo_rspvalid),2);
        tracep->fullBit(oldp+13651,(1U));
        tracep->fullIData(oldp+13652,(0x4f5484dU),32);
        tracep->fullBit(oldp+13653,(vlTOPp->Azadi_top_verilator__DOT__i2c0_scl_in));
        tracep->fullBit(oldp+13654,(0U));
        tracep->fullBit(oldp+13655,(vlTOPp->Azadi_top_verilator__DOT__i2c0_sda_in));
        tracep->fullBit(oldp+13656,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__uart_rx_i));
        tracep->fullBit(oldp+13657,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_pwm[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+13658,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_pwm[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+13659,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_pwm[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+13660,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_pwm[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+13661,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_pwm[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+13662,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_pwm[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_pwm[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+13663,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_pwm[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_pwm[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+13664,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_pwm[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_pwm[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+13665,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_pwm[0U])));
        tracep->fullBit(oldp+13666,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+13667,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+13668,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+13669,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+13670,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+13671,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+13672,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar 
                                               >> 2U))),32);
        tracep->fullBit(oldp+13673,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar 
                                                   >> 1U)))));
        tracep->fullBit(oldp+13674,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__pwm_to_xbar))));
        tracep->fullBit(oldp+13675,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_spi[2U] 
                                           >> 0x15U))));
        tracep->fullCData(oldp+13676,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_spi[2U] 
                                             >> 0x12U))),3);
        tracep->fullCData(oldp+13677,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_spi[2U] 
                                             >> 0xfU))),3);
        tracep->fullCData(oldp+13678,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_spi[2U] 
                                             >> 0xdU))),2);
        tracep->fullCData(oldp+13679,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_spi[2U] 
                                                >> 5U))),8);
        tracep->fullIData(oldp+13680,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_spi[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_spi[1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+13681,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_spi[2U] 
                                                << 0x1fU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_spi[1U] 
                                                  >> 1U)))),4);
        tracep->fullIData(oldp+13682,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_spi[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_spi[0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+13683,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_spi[0U])));
        tracep->fullBit(oldp+13684,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+13685,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+13686,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+13687,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+13688,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+13689,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+13690,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar 
                                               >> 2U))),32);
        tracep->fullBit(oldp+13691,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar 
                                                   >> 1U)))));
        tracep->fullBit(oldp+13692,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__spi_to_xbar))));
        tracep->fullIData(oldp+13693,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__gpio_intr),32);
        tracep->fullBit(oldp+13694,(0U));
        tracep->fullIData(oldp+13695,(0U),32);
        tracep->fullIData(oldp+13696,(0x28U),32);
        tracep->fullIData(oldp+13697,(2U),32);
        tracep->fullIData(oldp+13698,(0U),32);
        tracep->fullIData(oldp+13699,(0U),32);
        tracep->fullBit(oldp+13700,(1U));
        tracep->fullIData(oldp+13701,(2U),32);
        tracep->fullIData(oldp+13702,(0x10040800U),32);
        tracep->fullIData(oldp+13703,(0x10040808U),32);
        tracep->fullIData(oldp+13704,(0U),32);
        tracep->fullIData(oldp+13705,(0x20000000U),32);
        tracep->fullSData(oldp+13706,(0U),15);
        tracep->fullIData(oldp+13707,(2U),32);
        tracep->fullIData(oldp+13708,(0U),32);
        tracep->fullIData(oldp+13709,(0U),32);
        tracep->fullIData(oldp+13710,(1U),32);
        tracep->fullIData(oldp+13711,(1U),32);
        tracep->fullIData(oldp+13712,(0x20U),32);
        tracep->fullBit(oldp+13713,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_id_fpu));
        tracep->fullBit(oldp+13714,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_we));
        tracep->fullBit(oldp+13715,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_swap_oprnds));
        tracep->fullCData(oldp+13716,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_operation),4);
        tracep->fullIData(oldp+13717,(0U),32);
        tracep->fullCData(oldp+13718,(0U),8);
        tracep->fullIData(oldp+13719,(3U),32);
        tracep->fullIData(oldp+13720,(2U),32);
        tracep->fullIData(oldp+13721,(0U),32);
        tracep->fullIData(oldp+13722,(2U),32);
        tracep->fullBit(oldp+13723,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__fp_floating_type_o));
        tracep->fullCData(oldp+13724,(2U),2);
        tracep->fullCData(oldp+13725,(0U),3);
        tracep->fullIData(oldp+13726,(2U),32);
        tracep->fullIData(oldp+13727,(0U),32);
        tracep->fullIData(oldp+13728,(2U),32);
        tracep->fullIData(oldp+13729,(2U),32);
        tracep->fullIData(oldp+13730,(0U),32);
        tracep->fullCData(oldp+13731,(0U),2);
        tracep->fullIData(oldp+13732,(0U),32);
        tracep->fullCData(oldp+13733,(0U),6);
        tracep->fullIData(oldp+13734,(2U),32);
        tracep->fullIData(oldp+13735,(2U),32);
        tracep->fullIData(oldp+13736,(2U),32);
        tracep->fullBit(oldp+13737,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                           [0U] >> 5U))));
        tracep->fullCData(oldp+13738,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                             [0U] >> 3U))),2);
        tracep->fullBit(oldp+13739,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                           [0U] >> 2U))));
        tracep->fullBit(oldp+13740,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                           [0U] >> 1U))));
        tracep->fullBit(oldp+13741,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                     [0U])));
        tracep->fullBit(oldp+13742,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                           [1U] >> 5U))));
        tracep->fullCData(oldp+13743,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                             [1U] >> 3U))),2);
        tracep->fullBit(oldp+13744,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                           [1U] >> 2U))));
        tracep->fullBit(oldp+13745,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                           [1U] >> 1U))));
        tracep->fullBit(oldp+13746,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                     [1U])));
        tracep->fullQData(oldp+13747,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[0]),34);
        tracep->fullQData(oldp+13749,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[1]),34);
        tracep->fullIData(oldp+13751,(0x4010110cU),32);
        tracep->fullBit(oldp+13752,(0U));
        tracep->fullBit(oldp+13753,(1U));
        tracep->fullCData(oldp+13754,(0U),2);
        tracep->fullBit(oldp+13755,(0U));
        tracep->fullBit(oldp+13756,(0U));
        tracep->fullCData(oldp+13757,(4U),4);
        tracep->fullSData(oldp+13758,(0U),12);
        tracep->fullBit(oldp+13759,(0U));
        tracep->fullBit(oldp+13760,(0U));
        tracep->fullBit(oldp+13761,(0U));
        tracep->fullBit(oldp+13762,(0U));
        tracep->fullBit(oldp+13763,(0U));
        tracep->fullBit(oldp+13764,(0U));
        tracep->fullBit(oldp+13765,(0U));
        tracep->fullCData(oldp+13766,(0U),3);
        tracep->fullBit(oldp+13767,(0U));
        tracep->fullBit(oldp+13768,(0U));
        tracep->fullBit(oldp+13769,(0U));
        tracep->fullBit(oldp+13770,(0U));
        tracep->fullCData(oldp+13771,(3U),2);
        tracep->fullBit(oldp+13772,(1U));
        tracep->fullIData(oldp+13773,(0x20U),32);
        tracep->fullIData(oldp+13774,(0x1fU),32);
        tracep->fullIData(oldp+13775,(6U),32);
        tracep->fullCData(oldp+13776,(0x10U),6);
        tracep->fullIData(oldp+13777,(0U),32);
        tracep->fullIData(oldp+13778,(0x12U),32);
        tracep->fullIData(oldp+13779,(0U),18);
        tracep->fullCData(oldp+13780,(0U),6);
        tracep->fullIData(oldp+13781,(1U),32);
        tracep->fullIData(oldp+13782,(0x40000003U),32);
        tracep->fullCData(oldp+13783,(4U),3);
        tracep->fullIData(oldp+13784,(0x40U),32);
        tracep->fullBit(oldp+13785,(0U));
        tracep->fullIData(oldp+13786,(0x20U),32);
        tracep->fullBit(oldp+13787,(0U));
        tracep->fullBit(oldp+13788,(1U));
        tracep->fullCData(oldp+13789,(0x10U),5);
        tracep->fullCData(oldp+13790,(2U),4);
        tracep->fullCData(oldp+13791,(1U),2);
        tracep->fullCData(oldp+13792,(2U),2);
        tracep->fullCData(oldp+13793,(0U),2);
        tracep->fullCData(oldp+13794,(2U),2);
        tracep->fullIData(oldp+13795,(4U),32);
        tracep->fullIData(oldp+13796,(5U),32);
        tracep->fullIData(oldp+13797,(0x10U),32);
        tracep->fullIData(oldp+13798,(8U),32);
        tracep->fullIData(oldp+13799,(0x40U),32);
        tracep->fullBit(oldp+13800,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        tracep->fullCData(oldp+13801,(0U),2);
        tracep->fullCData(oldp+13802,(0x10U),5);
        tracep->fullCData(oldp+13803,(2U),4);
        tracep->fullCData(oldp+13804,(0U),2);
        tracep->fullCData(oldp+13805,(0U),3);
        tracep->fullBit(oldp+13806,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        tracep->fullIData(oldp+13807,(7U),32);
        tracep->fullIData(oldp+13808,(9U),32);
        tracep->fullBit(oldp+13809,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        tracep->fullIData(oldp+13810,(0xbU),32);
        tracep->fullBit(oldp+13811,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        tracep->fullIData(oldp+13812,(0xdU),32);
        tracep->fullCData(oldp+13813,(0U),2);
        tracep->fullCData(oldp+13814,(0x10U),5);
        tracep->fullCData(oldp+13815,(2U),4);
        tracep->fullCData(oldp+13816,(0U),2);
        tracep->fullBit(oldp+13817,(1U));
        tracep->fullCData(oldp+13818,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__target_aux_q),3);
        tracep->fullIData(oldp+13819,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_slice_result),32);
        tracep->fullIData(oldp+13820,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_d),32);
        tracep->fullIData(oldp+13821,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_q),32);
        tracep->fullIData(oldp+13822,(5U),32);
        tracep->fullCData(oldp+13823,(0x10U),5);
        tracep->fullCData(oldp+13824,(0U),4);
        tracep->fullCData(oldp+13825,(0x10U),5);
        tracep->fullCData(oldp+13826,(0U),4);
        tracep->fullCData(oldp+13827,(0x10U),5);
        tracep->fullCData(oldp+13828,(0x10U),5);
        tracep->fullCData(oldp+13829,(0U),4);
        tracep->fullCData(oldp+13830,(0x10U),5);
        tracep->fullCData(oldp+13831,(0U),4);
        tracep->fullCData(oldp+13832,(0x10U),5);
        tracep->fullIData(oldp+13833,(2U),32);
        tracep->fullCData(oldp+13834,(0x10U),5);
        tracep->fullCData(oldp+13835,(0U),2);
        tracep->fullBit(oldp+13836,(1U));
        tracep->fullBit(oldp+13837,(1U));
        tracep->fullIData(oldp+13838,(8U),32);
        tracep->fullIData(oldp+13839,(7U),32);
        tracep->fullIData(oldp+13840,(0x13U),32);
        tracep->fullIData(oldp+13841,(0xaU),32);
        tracep->fullBit(oldp+13842,(1U));
        tracep->fullIData(oldp+13843,(0x34U),32);
        tracep->fullIData(oldp+13844,(0x17U),32);
        tracep->fullCData(oldp+13845,(0xffU),8);
        tracep->fullCData(oldp+13846,(0x40U),7);
        tracep->fullCData(oldp+13847,(0U),7);
        tracep->fullCData(oldp+13848,(0x1fU),5);
        tracep->fullCData(oldp+13849,(2U),2);
        tracep->fullSData(oldp+13850,(0x200U),10);
        tracep->fullSData(oldp+13851,(0U),10);
        tracep->fullSData(oldp+13852,(0x7ffU),11);
        tracep->fullQData(oldp+13853,(0x8000000000000ULL),52);
        tracep->fullQData(oldp+13855,(0ULL),52);
        tracep->fullIData(oldp+13857,(0x400000U),23);
        tracep->fullIData(oldp+13858,(0U),23);
        tracep->fullCData(oldp+13859,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_res_assemble__BRA__1__KET____DOT__pre_round_exponent),5);
        tracep->fullCData(oldp+13860,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_res_assemble__BRA__1__KET____DOT__pre_round_mantissa),2);
        tracep->fullCData(oldp+13861,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_res_assemble__BRA__2__KET____DOT__pre_round_exponent),5);
        tracep->fullSData(oldp+13862,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_res_assemble__BRA__2__KET____DOT__pre_round_mantissa),10);
        tracep->fullSData(oldp+13863,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_res_assemble__BRA__3__KET____DOT__pre_round_exponent),11);
        tracep->fullQData(oldp+13864,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_res_assemble__BRA__3__KET____DOT__pre_round_mantissa),52);
        tracep->fullCData(oldp+13866,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_res_assemble__BRA__4__KET____DOT__pre_round_exponent),8);
        tracep->fullIData(oldp+13867,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__gen_res_assemble__BRA__4__KET____DOT__pre_round_mantissa),23);
        tracep->fullIData(oldp+13868,(0xfU),32);
        tracep->fullCData(oldp+13869,(0U),3);
        tracep->fullCData(oldp+13870,(1U),2);
        tracep->fullCData(oldp+13871,(0x10U),5);
        tracep->fullCData(oldp+13872,(2U),4);
        tracep->fullCData(oldp+13873,(0U),2);
        tracep->fullBit(oldp+13874,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        tracep->fullBit(oldp+13875,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        tracep->fullBit(oldp+13876,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        tracep->fullCData(oldp+13877,(1U),2);
        tracep->fullCData(oldp+13878,(0U),3);
        tracep->fullCData(oldp+13879,(0U),2);
        tracep->fullBit(oldp+13880,(1U));
        tracep->fullBit(oldp+13881,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_in_ready));
        tracep->fullBit(oldp+13882,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_ext_bit));
        tracep->fullBit(oldp+13883,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_tags));
        tracep->fullBit(oldp+13884,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid));
        tracep->fullBit(oldp+13885,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_busy));
        tracep->fullBit(oldp+13886,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_in_ready));
        tracep->fullSData(oldp+13887,((0xffffU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid)
                                                   ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_result)
                                                   : 
                                                  (- (IData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_ext_bit)))))),16);
        tracep->fullIData(oldp+13888,(VL_EXTENDS_II(32,17, 
                                                    (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_ext_bit) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid)
                                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_result)
                                                            : 
                                                           (- (IData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_ext_bit)))))))),32);
        tracep->fullBit(oldp+13889,((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid)
                                             ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status)
                                             : 0U) 
                                           >> 4U))));
        tracep->fullBit(oldp+13890,((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid)
                                             ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status)
                                             : 0U) 
                                           >> 3U))));
        tracep->fullBit(oldp+13891,((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid)
                                             ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status)
                                             : 0U) 
                                           >> 2U))));
        tracep->fullBit(oldp+13892,((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid)
                                             ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status)
                                             : 0U) 
                                           >> 1U))));
        tracep->fullBit(oldp+13893,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid)
                                      ? (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status))
                                      : 0U)));
        tracep->fullBit(oldp+13894,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_ext_bit));
        tracep->fullSData(oldp+13895,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_class_mask),10);
        tracep->fullBit(oldp+13896,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_tags));
        tracep->fullBit(oldp+13897,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_vectorial));
        tracep->fullBit(oldp+13898,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_busy));
        tracep->fullBit(oldp+13899,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_is_class));
        tracep->fullBit(oldp+13900,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_vectorial));
        tracep->fullBit(oldp+13901,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_is_class));
        tracep->fullSData(oldp+13902,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_result),16);
        tracep->fullBit(oldp+13903,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status) 
                                           >> 4U))));
        tracep->fullBit(oldp+13904,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status) 
                                           >> 3U))));
        tracep->fullBit(oldp+13905,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status) 
                                           >> 2U))));
        tracep->fullBit(oldp+13906,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status) 
                                           >> 1U))));
        tracep->fullBit(oldp+13907,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status))));
        tracep->fullIData(oldp+13908,(1U),32);
        tracep->fullCData(oldp+13909,(2U),2);
        tracep->fullCData(oldp+13910,(0x10U),5);
        tracep->fullCData(oldp+13911,(2U),4);
        tracep->fullCData(oldp+13912,(0U),2);
        tracep->fullBit(oldp+13913,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        tracep->fullBit(oldp+13914,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        tracep->fullBit(oldp+13915,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        tracep->fullCData(oldp+13916,(2U),2);
        tracep->fullCData(oldp+13917,(0x10U),5);
        tracep->fullCData(oldp+13918,(2U),4);
        tracep->fullCData(oldp+13919,(0U),2);
        tracep->fullBit(oldp+13920,(1U));
        tracep->fullBit(oldp+13921,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit))));
        tracep->fullBit(oldp+13922,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_tags))));
        tracep->fullCData(oldp+13923,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__target_aux_q),3);
        tracep->fullIData(oldp+13924,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_slice_result),32);
        tracep->fullIData(oldp+13925,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_d),32);
        tracep->fullIData(oldp+13926,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_q),32);
        tracep->fullCData(oldp+13927,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit),2);
        tracep->fullBit(oldp+13928,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_tags))));
        tracep->fullBit(oldp+13929,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_tags) 
                                           >> 1U))));
        tracep->fullCData(oldp+13930,((0x1fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux))),5);
        tracep->fullCData(oldp+13931,((0x1fU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux) 
                                                >> 5U))),5);
        tracep->fullBit(oldp+13932,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux) 
                                           >> 3U))));
        tracep->fullCData(oldp+13933,((7U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux))),3);
        tracep->fullBit(oldp+13934,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux) 
                                           >> 4U))));
        tracep->fullCData(oldp+13935,(0x10U),5);
        tracep->fullCData(oldp+13936,(0U),4);
        tracep->fullCData(oldp+13937,(0x10U),5);
        tracep->fullCData(oldp+13938,(0U),4);
        tracep->fullCData(oldp+13939,(0x10U),5);
        tracep->fullBit(oldp+13940,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid));
        tracep->fullSData(oldp+13941,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_result),16);
        tracep->fullBit(oldp+13942,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status) 
                                           >> 4U))));
        tracep->fullBit(oldp+13943,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status) 
                                           >> 3U))));
        tracep->fullBit(oldp+13944,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status) 
                                           >> 2U))));
        tracep->fullBit(oldp+13945,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status) 
                                           >> 1U))));
        tracep->fullBit(oldp+13946,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status))));
        tracep->fullCData(oldp+13947,(0x10U),5);
        tracep->fullCData(oldp+13948,(0U),4);
        tracep->fullCData(oldp+13949,(0x10U),5);
        tracep->fullCData(oldp+13950,(0U),4);
        tracep->fullCData(oldp+13951,(0x10U),5);
        tracep->fullSData(oldp+13952,(((0x8000U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 0xfU)) 
                                       | ((0x4000U 
                                           & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                              << 0xeU)) 
                                          | ((0x2000U 
                                              & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit)))))))))))))))))),16);
        tracep->fullCData(oldp+13953,(3U),2);
        tracep->fullCData(oldp+13954,(0x10U),5);
        tracep->fullCData(oldp+13955,(2U),4);
        tracep->fullCData(oldp+13956,(0U),2);
        tracep->fullBit(oldp+13957,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        tracep->fullBit(oldp+13958,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        tracep->fullBit(oldp+13959,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        tracep->fullCData(oldp+13960,(3U),2);
        tracep->fullCData(oldp+13961,(0U),3);
        tracep->fullCData(oldp+13962,(0U),2);
        tracep->fullBit(oldp+13963,(1U));
        tracep->fullBit(oldp+13964,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_in_ready));
        tracep->fullBit(oldp+13965,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_ext_bit));
        tracep->fullBit(oldp+13966,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_tags));
        tracep->fullBit(oldp+13967,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid));
        tracep->fullBit(oldp+13968,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_busy));
        tracep->fullBit(oldp+13969,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_in_ready));
        tracep->fullSData(oldp+13970,((0xffffU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid)
                                                   ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_result)
                                                   : 
                                                  (- (IData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_ext_bit)))))),16);
        tracep->fullIData(oldp+13971,(VL_EXTENDS_II(32,17, 
                                                    (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_ext_bit) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid)
                                                            ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_result)
                                                            : 
                                                           (- (IData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_ext_bit)))))))),32);
        tracep->fullBit(oldp+13972,((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid)
                                             ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status)
                                             : 0U) 
                                           >> 4U))));
        tracep->fullBit(oldp+13973,((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid)
                                             ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status)
                                             : 0U) 
                                           >> 3U))));
        tracep->fullBit(oldp+13974,((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid)
                                             ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status)
                                             : 0U) 
                                           >> 2U))));
        tracep->fullBit(oldp+13975,((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid)
                                             ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status)
                                             : 0U) 
                                           >> 1U))));
        tracep->fullBit(oldp+13976,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__out_valid)
                                      ? (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status))
                                      : 0U)));
        tracep->fullBit(oldp+13977,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_ext_bit));
        tracep->fullSData(oldp+13978,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_class_mask),10);
        tracep->fullBit(oldp+13979,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_tags));
        tracep->fullBit(oldp+13980,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_vectorial));
        tracep->fullBit(oldp+13981,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_busy));
        tracep->fullBit(oldp+13982,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_is_class));
        tracep->fullBit(oldp+13983,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_vectorial));
        tracep->fullBit(oldp+13984,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_is_class));
        tracep->fullSData(oldp+13985,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_result),16);
        tracep->fullBit(oldp+13986,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status) 
                                           >> 4U))));
        tracep->fullBit(oldp+13987,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status) 
                                           >> 3U))));
        tracep->fullBit(oldp+13988,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status) 
                                           >> 2U))));
        tracep->fullBit(oldp+13989,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status) 
                                           >> 1U))));
        tracep->fullBit(oldp+13990,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__op_status))));
        tracep->fullIData(oldp+13991,(3U),32);
        tracep->fullIData(oldp+13992,(1U),32);
        tracep->fullCData(oldp+13993,(0xfU),4);
        tracep->fullIData(oldp+13994,(2U),32);
        tracep->fullIData(oldp+13995,(1U),32);
        tracep->fullBit(oldp+13996,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__testmode_i));
        tracep->fullIData(oldp+13997,(0x20U),32);
        tracep->fullBit(oldp+13998,(1U));
        tracep->fullCData(oldp+13999,(0U),8);
        tracep->fullCData(oldp+14000,(2U),4);
        tracep->fullCData(oldp+14001,(0U),3);
        tracep->fullBit(oldp+14002,(1U));
        tracep->fullCData(oldp+14003,(2U),4);
        tracep->fullSData(oldp+14004,(0x380U),12);
        tracep->fullIData(oldp+14005,(0x1eU),32);
        tracep->fullCData(oldp+14006,(5U),8);
        tracep->fullCData(oldp+14007,(0x27U),8);
        tracep->fullIData(oldp+14008,(0xcU),32);
        tracep->fullCData(oldp+14009,(0xaU),5);
        tracep->fullSData(oldp+14010,(0x380U),12);
        tracep->fullSData(oldp+14011,(0x387U),12);
        tracep->fullSData(oldp+14012,(0x360U),12);
        tracep->fullSData(oldp+14013,(0x37fU),12);
        tracep->fullSData(oldp+14014,(0x338U),12);
        tracep->fullSData(oldp+14015,(0x35fU),12);
        tracep->fullSData(oldp+14016,(0x300U),12);
        tracep->fullSData(oldp+14017,(0x400U),12);
        tracep->fullSData(oldp+14018,(0x7ffU),12);
        tracep->fullSData(oldp+14019,(0x100U),12);
        tracep->fullSData(oldp+14020,(0x104U),12);
        tracep->fullSData(oldp+14021,(0x108U),12);
        tracep->fullSData(oldp+14022,(0x10cU),12);
        tracep->fullQData(oldp+14023,(0x7c0006f00c0006fULL),64);
        tracep->fullQData(oldp+14025,(0xff0000f04c0006fULL),64);
        tracep->fullQData(oldp+14027,(0x7b3510737b241073ULL),64);
        tracep->fullQData(oldp+14029,(0xc5551300000517ULL),64);
        tracep->fullQData(oldp+14031,(0xf140247300c51513ULL),64);
        tracep->fullQData(oldp+14033,(0xa4043310852023ULL),64);
        tracep->fullQData(oldp+14035,(0x14741340044403ULL),64);
        tracep->fullQData(oldp+14037,(0xf140247302041c63ULL),64);
        tracep->fullQData(oldp+14039,(0x4004440300a40433ULL),64);
        tracep->fullQData(oldp+14041,(0xfa041ce300247413ULL),64);
        tracep->fullQData(oldp+14043,(0x517fd5ff06fULL),64);
        tracep->fullQData(oldp+14045,(0xc5151300c55513ULL),64);
        tracep->fullQData(oldp+14047,(0x7b30257310052623ULL),64);
        tracep->fullQData(oldp+14049,(0x1000737b202473ULL),64);
        tracep->fullQData(oldp+14051,(0x7b30257310052223ULL),64);
        tracep->fullQData(oldp+14053,(0xa85ff06f7b202473ULL),64);
        tracep->fullQData(oldp+14055,(0x10852423f1402473ULL),64);
        tracep->fullQData(oldp+14057,(0x7b2024737b302573ULL),64);
        tracep->fullQData(oldp+14059,(0x7b200073ULL),64);
        tracep->fullIData(oldp+14061,(0x29U),32);
        tracep->fullCData(oldp+14062,(3U),2);
        tracep->fullIData(oldp+14063,(3U),32);
        tracep->fullIData(oldp+14064,(0x22U),32);
        tracep->fullIData(oldp+14065,(0x1eU),32);
        tracep->fullIData(oldp+14066,(4U),32);
        tracep->fullIData(oldp+14067,(5U),32);
        tracep->fullIData(oldp+14068,(0xdU),32);
        tracep->fullIData(oldp+14069,(0x21U),32);
        tracep->fullIData(oldp+14070,(4U),32);
        tracep->fullIData(oldp+14071,(8U),32);
        tracep->fullIData(oldp+14072,(0x21U),32);
        tracep->fullBit(oldp+14073,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+14074,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+14075,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+14076,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+14077,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+14078,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+14079,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+14080,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+14081,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i))));
        tracep->fullBit(oldp+14082,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+14083,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+14084,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+14085,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+14086,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+14087,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+14088,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+14089,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+14090,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i))));
        tracep->fullBit(oldp+14091,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+14092,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+14093,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+14094,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+14095,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+14096,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+14097,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+14098,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+14099,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i))));
        tracep->fullBit(oldp+14100,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+14101,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+14102,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+14103,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+14104,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+14105,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+14106,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+14107,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+14108,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i))));
        tracep->fullBit(oldp+14109,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+14110,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+14111,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+14112,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+14113,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+14114,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+14115,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+14116,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+14117,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i))));
        tracep->fullBit(oldp+14118,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__scanmode_i));
        tracep->fullCData(oldp+14119,(7U),3);
        tracep->fullCData(oldp+14120,(0U),4);
        tracep->fullSData(oldp+14121,(0U),12);
        tracep->fullIData(oldp+14122,(0x10000U),32);
        tracep->fullIData(oldp+14123,(0x11U),32);
        tracep->fullIData(oldp+14124,(0x56U),32);
        tracep->fullIData(oldp+14125,(0x33U),32);
        tracep->fullSData(oldp+14126,(0x7ffU),11);
        tracep->fullQData(oldp+14127,(0ULL),44);
        tracep->fullIData(oldp+14129,(0xbU),32);
        tracep->fullIData(oldp+14130,(0x58U),32);
        tracep->fullSData(oldp+14131,(0x3ffU),10);
        tracep->fullQData(oldp+14132,(0ULL),40);
        tracep->fullIData(oldp+14134,(0xaU),32);
        tracep->fullCData(oldp+14135,(1U),2);
        tracep->fullIData(oldp+14136,(0x55U),32);
        tracep->fullBit(oldp+14137,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i))));
        tracep->fullBit(oldp+14138,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+14139,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullIData(oldp+14141,(0xcU),32);
        tracep->fullIData(oldp+14142,(9U),32);
        tracep->fullSData(oldp+14143,(0x5257U),16);
        tracep->fullBit(oldp+14144,(0U));
        tracep->fullSData(oldp+14145,(0U),12);
        tracep->fullCData(oldp+14146,(1U),8);
        tracep->fullIData(oldp+14147,(0xffffffffU),32);
        tracep->fullIData(oldp+14148,(0x573143U),24);
        tracep->fullBit(oldp+14149,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+14150,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+14151,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+14152,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+14153,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+14154,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+14155,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+14156,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+14157,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i))));
        tracep->fullBit(oldp+14158,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+14159,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+14160,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+14161,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+14162,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+14163,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+14164,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+14165,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+14166,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i))));
        tracep->fullBit(oldp+14167,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+14168,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+14169,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+14170,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+14171,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+14172,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+14173,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+14174,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+14175,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i))));
        tracep->fullBit(oldp+14176,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+14177,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+14178,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+14179,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+14180,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+14181,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+14182,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+14183,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+14184,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i))));
        tracep->fullBit(oldp+14185,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+14186,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+14187,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+14188,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+14189,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+14190,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+14191,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+14192,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+14193,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i))));
        tracep->fullBit(oldp+14194,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+14195,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+14196,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+14197,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+14198,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+14199,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+14200,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+14201,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+14202,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i))));
        tracep->fullBit(oldp+14203,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+14204,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+14205,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+14206,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+14207,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+14208,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+14209,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+14210,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+14211,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i))));
        tracep->fullBit(oldp+14212,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+14213,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+14214,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+14215,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+14216,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+14217,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+14218,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+14219,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+14220,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i))));
        tracep->fullBit(oldp+14221,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+14222,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+14223,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+14224,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+14225,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+14226,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+14227,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+14228,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+14229,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i))));
        tracep->fullBit(oldp+14230,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+14231,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+14232,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+14233,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+14234,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+14235,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+14236,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+14237,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+14238,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i))));
        tracep->fullBit(oldp+14239,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__scanmode_i));
        tracep->fullSData(oldp+14240,(0x1fffU),13);
        tracep->fullQData(oldp+14241,(0ULL),52);
        tracep->fullIData(oldp+14243,(0xdU),32);
        tracep->fullIData(oldp+14244,(6U),32);
        tracep->fullSData(oldp+14245,(0x524fU),16);
        tracep->fullSData(oldp+14246,(0x57U),16);
        tracep->fullCData(oldp+14247,(1U),3);
        tracep->fullCData(oldp+14248,(2U),3);
        tracep->fullCData(oldp+14249,(3U),3);
        tracep->fullCData(oldp+14250,(4U),3);
        tracep->fullIData(oldp+14251,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm__DOT__wdata),32);
        tracep->fullCData(oldp+14252,(0U),4);
        tracep->fullIData(oldp+14253,(7U),32);
        tracep->fullBit(oldp+14254,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_qs));
        tracep->fullBit(oldp+14255,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we));
        tracep->fullCData(oldp+14256,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd),3);
        tracep->fullCData(oldp+14257,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we)
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd)
                                        : 0U)),3);
        tracep->fullBit(oldp+14258,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d));
        tracep->fullIData(oldp+14259,(0U),32);
        tracep->fullIData(oldp+14260,(0xaU),32);
        tracep->fullIData(oldp+14261,(0xbU),32);
        tracep->fullIData(oldp+14262,(0xeU),32);
        tracep->fullIData(oldp+14263,(0xfU),32);
        tracep->fullIData(oldp+14264,(0x10U),32);
        tracep->fullIData(oldp+14265,(0x12U),32);
        tracep->fullIData(oldp+14266,(0x13U),32);
        tracep->fullIData(oldp+14267,(0x14U),32);
        tracep->fullIData(oldp+14268,(0x15U),32);
        tracep->fullIData(oldp+14269,(0x16U),32);
        tracep->fullIData(oldp+14270,(0x17U),32);
        tracep->fullIData(oldp+14271,(0x18U),32);
        tracep->fullIData(oldp+14272,(0x19U),32);
        tracep->fullIData(oldp+14273,(0x1aU),32);
        tracep->fullIData(oldp+14274,(0x1bU),32);
        tracep->fullIData(oldp+14275,(0x1cU),32);
        tracep->fullIData(oldp+14276,(0x1dU),32);
        tracep->fullIData(oldp+14277,(0x1fU),32);
        tracep->fullIData(oldp+14278,(0x22U),32);
        tracep->fullIData(oldp+14279,(0x23U),32);
        tracep->fullIData(oldp+14280,(0x24U),32);
        tracep->fullIData(oldp+14281,(0x25U),32);
        tracep->fullIData(oldp+14282,(0x26U),32);
        tracep->fullIData(oldp+14283,(0x27U),32);
        tracep->fullIData(oldp+14284,(0x28U),32);
        tracep->fullIData(oldp+14285,(0x29U),32);
        tracep->fullIData(oldp+14286,(0x2aU),32);
        tracep->fullIData(oldp+14287,(0x2bU),32);
        tracep->fullIData(oldp+14288,(0x2cU),32);
        tracep->fullIData(oldp+14289,(0x2dU),32);
        tracep->fullIData(oldp+14290,(0x2eU),32);
        tracep->fullIData(oldp+14291,(0x2fU),32);
        tracep->fullIData(oldp+14292,(0x30U),32);
        tracep->fullIData(oldp+14293,(0x31U),32);
        tracep->fullIData(oldp+14294,(0x32U),32);
        tracep->fullIData(oldp+14295,(0x33U),32);
        tracep->fullIData(oldp+14296,(0x34U),32);
        tracep->fullIData(oldp+14297,(0x35U),32);
        tracep->fullIData(oldp+14298,(0x36U),32);
        tracep->fullIData(oldp+14299,(0x37U),32);
        tracep->fullIData(oldp+14300,(0x38U),32);
        tracep->fullIData(oldp+14301,(0x39U),32);
        tracep->fullIData(oldp+14302,(0x3aU),32);
        tracep->fullIData(oldp+14303,(0x3bU),32);
        tracep->fullIData(oldp+14304,(0x3cU),32);
        tracep->fullIData(oldp+14305,(0x3dU),32);
        tracep->fullIData(oldp+14306,(0x3eU),32);
        tracep->fullIData(oldp+14307,(0x3fU),32);
        tracep->fullIData(oldp+14308,(0x41U),32);
        tracep->fullIData(oldp+14309,(0x42U),32);
        tracep->fullIData(oldp+14310,(0x43U),32);
        tracep->fullIData(oldp+14311,(0x44U),32);
        tracep->fullIData(oldp+14312,(0x45U),32);
        tracep->fullIData(oldp+14313,(0x46U),32);
        tracep->fullIData(oldp+14314,(0x47U),32);
        tracep->fullIData(oldp+14315,(0x48U),32);
        tracep->fullIData(oldp+14316,(0x49U),32);
        tracep->fullIData(oldp+14317,(0x4aU),32);
        tracep->fullIData(oldp+14318,(0x4bU),32);
        tracep->fullIData(oldp+14319,(0x4cU),32);
        tracep->fullIData(oldp+14320,(0x4dU),32);
        tracep->fullIData(oldp+14321,(0x4eU),32);
        tracep->fullIData(oldp+14322,(0x4fU),32);
        tracep->fullIData(oldp+14323,(0x50U),32);
        tracep->fullIData(oldp+14324,(0x51U),32);
        tracep->fullIData(oldp+14325,(0x52U),32);
        tracep->fullIData(oldp+14326,(0x53U),32);
        tracep->fullIData(oldp+14327,(0x54U),32);
        tracep->fullIData(oldp+14328,(0x55U),32);
        tracep->fullIData(oldp+14329,(0x56U),32);
        tracep->fullIData(oldp+14330,(0x57U),32);
        tracep->fullIData(oldp+14331,(0x58U),32);
        tracep->fullIData(oldp+14332,(0x59U),32);
        tracep->fullIData(oldp+14333,(0x5aU),32);
        tracep->fullIData(oldp+14334,(0x5bU),32);
        tracep->fullIData(oldp+14335,(0x5cU),32);
        tracep->fullIData(oldp+14336,(0x5dU),32);
        tracep->fullIData(oldp+14337,(0x5eU),32);
        tracep->fullIData(oldp+14338,(0x5fU),32);
        tracep->fullIData(oldp+14339,(0x60U),32);
        tracep->fullIData(oldp+14340,(0x61U),32);
        tracep->fullIData(oldp+14341,(0x62U),32);
        tracep->fullIData(oldp+14342,(0x63U),32);
        tracep->fullIData(oldp+14343,(0x64U),32);
        tracep->fullIData(oldp+14344,(0x65U),32);
        tracep->fullIData(oldp+14345,(0x66U),32);
        tracep->fullIData(oldp+14346,(0x67U),32);
        tracep->fullIData(oldp+14347,(0x68U),32);
        tracep->fullIData(oldp+14348,(0x69U),32);
        tracep->fullIData(oldp+14349,(0x6aU),32);
        tracep->fullIData(oldp+14350,(0x6bU),32);
        tracep->fullIData(oldp+14351,(0x6cU),32);
        tracep->fullIData(oldp+14352,(0x6dU),32);
        tracep->fullIData(oldp+14353,(0x6eU),32);
        tracep->fullIData(oldp+14354,(0x6fU),32);
        tracep->fullIData(oldp+14355,(0x70U),32);
        tracep->fullIData(oldp+14356,(0x71U),32);
        tracep->fullIData(oldp+14357,(0x72U),32);
        tracep->fullIData(oldp+14358,(0x73U),32);
        tracep->fullIData(oldp+14359,(0x74U),32);
        tracep->fullIData(oldp+14360,(0x75U),32);
        tracep->fullIData(oldp+14361,(0x76U),32);
        tracep->fullIData(oldp+14362,(0x77U),32);
        tracep->fullIData(oldp+14363,(0x78U),32);
        tracep->fullIData(oldp+14364,(0x79U),32);
        tracep->fullIData(oldp+14365,(0x7aU),32);
        tracep->fullIData(oldp+14366,(0x7bU),32);
        tracep->fullIData(oldp+14367,(0x7cU),32);
        tracep->fullIData(oldp+14368,(0x7dU),32);
        tracep->fullIData(oldp+14369,(0x7eU),32);
        tracep->fullSData(oldp+14370,(0U),16);
        tracep->fullSData(oldp+14371,(0x574fU),16);
        tracep->fullIData(oldp+14372,(0U),24);
        tracep->fullIData(oldp+14373,(0U),31);
        tracep->fullIData(oldp+14374,(0xaf35U),32);
        tracep->fullBit(oldp+14375,(0U));
        tracep->fullBit(oldp+14376,(0U));
        tracep->fullBit(oldp+14377,(0U));
        tracep->fullBit(oldp+14378,(0U));
        tracep->fullBit(oldp+14379,(0U));
        tracep->fullBit(oldp+14380,(0U));
        tracep->fullCData(oldp+14381,(2U),4);
        tracep->fullCData(oldp+14382,(8U),5);
        tracep->fullQData(oldp+14383,(0x800ULL),64);
        tracep->fullQData(oldp+14385,(0x804ULL),64);
        tracep->fullQData(oldp+14387,(0x808ULL),64);
        tracep->fullIData(oldp+14389,(0x47df4U),32);
        tracep->fullIData(oldp+14390,(0x3e20e8fU),32);
        tracep->fullIData(oldp+14391,(0x12ff886U),32);
        tracep->fullIData(oldp+14392,(0xf3181U),32);
        tracep->fullIData(oldp+14393,(0x11d2e881U),32);
        tracep->fullIData(oldp+14394,(0x3e7b72U),32);
        tracep->fullIData(oldp+14395,(0x40060000U),32);
        tracep->fullIData(oldp+14396,(0x40070000U),32);
        tracep->fullIData(oldp+14397,(0x40080000U),32);
        tracep->fullIData(oldp+14398,(0x40090000U),32);
        tracep->fullIData(oldp+14399,(0x400a0000U),32);
        tracep->fullIData(oldp+14400,(0x400b0000U),32);
        tracep->fullIData(oldp+14401,(0x400c0000U),32);
        tracep->fullIData(oldp+14402,(0x400d0000U),32);
        tracep->fullIData(oldp+14403,(0x400e0000U),32);
        tracep->fullIData(oldp+14404,(0x400f0000U),32);
        tracep->fullIData(oldp+14405,(0x40100000U),32);
        tracep->fullIData(oldp+14406,(0x40200000U),32);
        tracep->fullIData(oldp+14407,(0x40300000U),32);
        tracep->fullIData(oldp+14408,(0xffffU),32);
        tracep->fullIData(oldp+14409,(0x10040000U),32);
        tracep->fullIData(oldp+14410,(0x10000000U),32);
        tracep->fullIData(oldp+14411,(0x10080000U),32);
        tracep->fullIData(oldp+14412,(0x40000000U),32);
        tracep->fullIData(oldp+14413,(0x40010000U),32);
        tracep->fullIData(oldp+14414,(0x40020000U),32);
        tracep->fullIData(oldp+14415,(0x40030000U),32);
        tracep->fullIData(oldp+14416,(0x40040000U),32);
        tracep->fullIData(oldp+14417,(0x40050000U),32);
        tracep->fullCData(oldp+14418,(3U),2);
        tracep->fullCData(oldp+14419,(0U),8);
        tracep->fullBit(oldp+14420,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i))));
        tracep->fullBit(oldp+14421,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+14422,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+14424,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i))));
        tracep->fullBit(oldp+14425,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+14426,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+14428,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i))));
        tracep->fullBit(oldp+14429,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+14430,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+14432,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i))));
        tracep->fullBit(oldp+14433,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+14434,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullCData(oldp+14436,(4U),6);
        tracep->fullCData(oldp+14437,(8U),6);
        tracep->fullCData(oldp+14438,(0xcU),6);
        tracep->fullCData(oldp+14439,(0x10U),6);
        tracep->fullCData(oldp+14440,(0x14U),6);
        tracep->fullCData(oldp+14441,(0x18U),6);
        tracep->fullCData(oldp+14442,(0x1cU),6);
        tracep->fullCData(oldp+14443,(0x20U),6);
        tracep->fullCData(oldp+14444,(0x24U),6);
        tracep->fullCData(oldp+14445,(0x28U),6);
        tracep->fullCData(oldp+14446,(0x2cU),6);
        tracep->fullCData(oldp+14447,(0x30U),6);
        tracep->fullCData(oldp+14448,(0x34U),6);
        tracep->fullCData(oldp+14449,(0x38U),6);
        tracep->fullSData(oldp+14450,(0U),9);
        tracep->fullSData(oldp+14451,(4U),9);
        tracep->fullSData(oldp+14452,(8U),9);
        tracep->fullSData(oldp+14453,(0xcU),9);
        tracep->fullSData(oldp+14454,(0x10U),9);
        tracep->fullSData(oldp+14455,(0x14U),9);
        tracep->fullSData(oldp+14456,(0x18U),9);
        tracep->fullSData(oldp+14457,(0x1cU),9);
        tracep->fullSData(oldp+14458,(0x20U),9);
        tracep->fullSData(oldp+14459,(0x24U),9);
        tracep->fullSData(oldp+14460,(0x28U),9);
        tracep->fullSData(oldp+14461,(0x2cU),9);
        tracep->fullSData(oldp+14462,(0x30U),9);
        tracep->fullSData(oldp+14463,(0x34U),9);
        tracep->fullSData(oldp+14464,(0x38U),9);
        tracep->fullSData(oldp+14465,(0x3cU),9);
        tracep->fullSData(oldp+14466,(0x40U),9);
        tracep->fullSData(oldp+14467,(0x44U),9);
        tracep->fullSData(oldp+14468,(0x48U),9);
        tracep->fullSData(oldp+14469,(0x4cU),9);
        tracep->fullSData(oldp+14470,(0x50U),9);
        tracep->fullSData(oldp+14471,(0x54U),9);
        tracep->fullSData(oldp+14472,(0x58U),9);
        tracep->fullSData(oldp+14473,(0x5cU),9);
        tracep->fullSData(oldp+14474,(0x60U),9);
        tracep->fullSData(oldp+14475,(0x64U),9);
        tracep->fullSData(oldp+14476,(0x68U),9);
        tracep->fullSData(oldp+14477,(0x6cU),9);
        tracep->fullSData(oldp+14478,(0x70U),9);
        tracep->fullSData(oldp+14479,(0x74U),9);
        tracep->fullSData(oldp+14480,(0x78U),9);
        tracep->fullSData(oldp+14481,(0x7cU),9);
        tracep->fullSData(oldp+14482,(0x80U),9);
        tracep->fullSData(oldp+14483,(0x84U),9);
        tracep->fullSData(oldp+14484,(0x100U),9);
        tracep->fullSData(oldp+14485,(0x104U),9);
        tracep->fullSData(oldp+14486,(0x108U),9);
        tracep->fullSData(oldp+14487,(0x10cU),9);
        tracep->fullCData(oldp+14488,(4U),7);
        tracep->fullCData(oldp+14489,(8U),7);
        tracep->fullCData(oldp+14490,(0xcU),7);
        tracep->fullCData(oldp+14491,(0x10U),7);
        tracep->fullCData(oldp+14492,(0x14U),7);
        tracep->fullCData(oldp+14493,(0x18U),7);
        tracep->fullCData(oldp+14494,(0x1cU),7);
        tracep->fullCData(oldp+14495,(0x20U),7);
        tracep->fullCData(oldp+14496,(0x24U),7);
        tracep->fullCData(oldp+14497,(0x28U),7);
        tracep->fullCData(oldp+14498,(0x2cU),7);
        tracep->fullCData(oldp+14499,(0x30U),7);
        tracep->fullCData(oldp+14500,(0x34U),7);
        tracep->fullCData(oldp+14501,(0x38U),7);
        tracep->fullCData(oldp+14502,(0x3cU),7);
        tracep->fullCData(oldp+14503,(0x44U),7);
        tracep->fullCData(oldp+14504,(0x48U),7);
        tracep->fullCData(oldp+14505,(0x4cU),7);
        tracep->fullCData(oldp+14506,(0x50U),7);
        tracep->fullCData(oldp+14507,(0x54U),7);
        tracep->fullSData(oldp+14508,(0x110U),9);
        tracep->fullSData(oldp+14509,(0x114U),9);
        tracep->fullSData(oldp+14510,(0x118U),9);
        tracep->fullSData(oldp+14511,(0x11cU),9);
        tracep->fullSData(oldp+14512,(0x3a0U),12);
        tracep->fullSData(oldp+14513,(0x3b0U),12);
        tracep->fullIData(oldp+14514,(0x11U),32);
        tracep->fullIData(oldp+14515,(0x15U),32);
        tracep->fullIData(oldp+14516,(0x505043U),24);
        tracep->fullBit(oldp+14517,(0U));
        tracep->fullCData(oldp+14518,(0U),3);
        tracep->fullCData(oldp+14519,(0U),3);
        tracep->fullCData(oldp+14520,(0U),2);
        tracep->fullCData(oldp+14521,(0U),8);
        tracep->fullIData(oldp+14522,(0U),32);
        tracep->fullCData(oldp+14523,(0U),4);
        tracep->fullIData(oldp+14524,(0U),32);
        tracep->fullBit(oldp+14525,(1U));
        tracep->fullBit(oldp+14526,(0U));
        tracep->fullCData(oldp+14527,(0U),3);
        tracep->fullCData(oldp+14528,(0U),3);
        tracep->fullCData(oldp+14529,(0U),2);
        tracep->fullCData(oldp+14530,(0U),8);
        tracep->fullBit(oldp+14531,(0U));
        tracep->fullIData(oldp+14532,(0U),32);
        tracep->fullBit(oldp+14533,(0U));
        tracep->fullBit(oldp+14534,(1U));
        tracep->fullIData(oldp+14535,(0x17U),32);
        tracep->fullIData(oldp+14536,(0xbU),32);
        tracep->fullIData(oldp+14537,(0x34U),32);
        tracep->fullIData(oldp+14538,(5U),32);
        tracep->fullIData(oldp+14539,(0xaU),32);
        tracep->fullIData(oldp+14540,(2U),32);
        tracep->fullCData(oldp+14541,(0x18U),5);
        tracep->fullIData(oldp+14542,(0x40U),32);
        tracep->fullCData(oldp+14543,(0x18U),5);
        tracep->fullCData(oldp+14544,(3U),4);
        tracep->fullBit(oldp+14545,(1U));
        tracep->fullCData(oldp+14546,(0x1fU),5);
        tracep->fullCData(oldp+14547,(0xfU),4);
        tracep->fullCData(oldp+14548,(0x17U),5);
        tracep->fullCData(oldp+14549,(0xeU),4);
        tracep->fullCData(oldp+14550,(0x11U),5);
        tracep->fullCData(oldp+14551,(6U),4);
        tracep->fullCData(oldp+14552,(0U),2);
    }
}
