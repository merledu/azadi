// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VAzadi_top_verilator__Syms.h"


void VAzadi_top_verilator::traceRegister(VerilatedFst* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VAzadi_top_verilator::traceFullTop0(void* userp, VerilatedFst* tracep) {
    VAzadi_top_verilator__Syms* __restrict vlSymsp = static_cast<VAzadi_top_verilator__Syms*>(userp);
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
        vlTOPp->traceFullSub1(userp, tracep);
        vlTOPp->traceFullSub2(userp, tracep);
        vlTOPp->traceFullSub3(userp, tracep);
    }
}

void VAzadi_top_verilator::traceFullSub0(void* userp, VerilatedFst* tracep) {
    VAzadi_top_verilator__Syms* __restrict vlSymsp = static_cast<VAzadi_top_verilator__Syms*>(userp);
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp1350[3];
    WData/*95:0*/ __Vtemp1366[3];
    WData/*95:0*/ __Vtemp1382[3];
    WData/*95:0*/ __Vtemp1398[3];
    WData/*95:0*/ __Vtemp1414[3];
    WData/*95:0*/ __Vtemp1430[3];
    WData/*95:0*/ __Vtemp1446[3];
    WData/*95:0*/ __Vtemp1462[3];
    WData/*95:0*/ __Vtemp1478[3];
    WData/*95:0*/ __Vtemp1494[3];
    WData/*95:0*/ __Vtemp1627[3];
    WData/*95:0*/ __Vtemp1643[3];
    WData/*95:0*/ __Vtemp1659[3];
    WData/*95:0*/ __Vtemp1675[3];
    WData/*95:0*/ __Vtemp1691[3];
    WData/*95:0*/ __Vtemp1707[3];
    WData/*95:0*/ __Vtemp1723[3];
    WData/*95:0*/ __Vtemp1739[3];
    WData/*95:0*/ __Vtemp1755[3];
    WData/*95:0*/ __Vtemp1771[3];
    WData/*95:0*/ __Vtemp1787[3];
    // Body
    {
        tracep->fullQData(oldp+1,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[0]),34);
        tracep->fullQData(oldp+3,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[1]),34);
        tracep->fullBit(oldp+5,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                       [0U] >> 5U))));
        tracep->fullCData(oldp+6,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                         [0U] >> 3U))),2);
        tracep->fullBit(oldp+7,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                       [0U] >> 2U))));
        tracep->fullBit(oldp+8,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                       [0U] >> 1U))));
        tracep->fullBit(oldp+9,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                 [0U])));
        tracep->fullBit(oldp+10,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [1U] >> 5U))));
        tracep->fullCData(oldp+11,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                          [1U] >> 3U))),2);
        tracep->fullBit(oldp+12,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [1U] >> 2U))));
        tracep->fullBit(oldp+13,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [1U] >> 1U))));
        tracep->fullBit(oldp+14,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                  [1U])));
        tracep->fullBit(oldp+15,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err[0]));
        tracep->fullBit(oldp+16,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err[1]));
        tracep->fullQData(oldp+17,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0]),34);
        tracep->fullQData(oldp+19,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1]),34);
        tracep->fullBit(oldp+21,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [0U] >> 5U))));
        tracep->fullCData(oldp+22,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                          [0U] >> 3U))),2);
        tracep->fullBit(oldp+23,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [0U] >> 2U))));
        tracep->fullBit(oldp+24,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [0U] >> 1U))));
        tracep->fullBit(oldp+25,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                  [0U])));
        tracep->fullBit(oldp+26,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [1U] >> 5U))));
        tracep->fullCData(oldp+27,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                          [1U] >> 3U))),2);
        tracep->fullBit(oldp+28,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [1U] >> 2U))));
        tracep->fullBit(oldp+29,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [1U] >> 1U))));
        tracep->fullBit(oldp+30,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                  [1U])));
        tracep->fullBit(oldp+31,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err
                                 [0U]));
        tracep->fullBit(oldp+32,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_alu));
        tracep->fullIData(oldp+33,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[0]),32);
        tracep->fullIData(oldp+34,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[1]),32);
        tracep->fullIData(oldp+35,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[0]),32);
        tracep->fullIData(oldp+36,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[1]),32);
        tracep->fullIData(oldp+37,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev),32);
        tracep->fullBit(oldp+38,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err
                                 [1U]));
        tracep->fullIData(oldp+39,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
        tracep->fullIData(oldp+40,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
        tracep->fullIData(oldp+41,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
        tracep->fullIData(oldp+42,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
        tracep->fullIData(oldp+43,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
        tracep->fullIData(oldp+44,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
        tracep->fullIData(oldp+45,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
        tracep->fullIData(oldp+46,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
        tracep->fullIData(oldp+47,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
        tracep->fullIData(oldp+48,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
        tracep->fullIData(oldp+49,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
        tracep->fullIData(oldp+50,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
        tracep->fullIData(oldp+51,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
        tracep->fullIData(oldp+52,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
        tracep->fullIData(oldp+53,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
        tracep->fullIData(oldp+54,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
        tracep->fullCData(oldp+55,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
        tracep->fullCData(oldp+56,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
        tracep->fullCData(oldp+57,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
        tracep->fullCData(oldp+58,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
        tracep->fullCData(oldp+59,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
        tracep->fullCData(oldp+60,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
        tracep->fullCData(oldp+61,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
        tracep->fullCData(oldp+62,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
        tracep->fullCData(oldp+63,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
        tracep->fullCData(oldp+64,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
        tracep->fullCData(oldp+65,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
        tracep->fullCData(oldp+66,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
        tracep->fullCData(oldp+67,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
        tracep->fullCData(oldp+68,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
        tracep->fullCData(oldp+69,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
        tracep->fullCData(oldp+70,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
        tracep->fullIData(oldp+71,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
        tracep->fullIData(oldp+72,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
        tracep->fullIData(oldp+73,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
        tracep->fullIData(oldp+74,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
        tracep->fullIData(oldp+75,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
        tracep->fullIData(oldp+76,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
        tracep->fullIData(oldp+77,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
        tracep->fullIData(oldp+78,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
        tracep->fullIData(oldp+79,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
        tracep->fullIData(oldp+80,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
        tracep->fullIData(oldp+81,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
        tracep->fullIData(oldp+82,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
        tracep->fullIData(oldp+83,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
        tracep->fullIData(oldp+84,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
        tracep->fullIData(oldp+85,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
        tracep->fullIData(oldp+86,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
        tracep->fullIData(oldp+87,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
        tracep->fullIData(oldp+88,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
        tracep->fullIData(oldp+89,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
        tracep->fullIData(oldp+90,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
        tracep->fullIData(oldp+91,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
        tracep->fullIData(oldp+92,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
        tracep->fullIData(oldp+93,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
        tracep->fullIData(oldp+94,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
        tracep->fullIData(oldp+95,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
        tracep->fullIData(oldp+96,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
        tracep->fullIData(oldp+97,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
        tracep->fullIData(oldp+98,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
        tracep->fullIData(oldp+99,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
        tracep->fullIData(oldp+100,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
        tracep->fullIData(oldp+101,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
        tracep->fullIData(oldp+102,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
        tracep->fullCData(oldp+103,((7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d) 
                                           >> 3U))),3);
        tracep->fullBit(oldp+104,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d) 
                                         >> 2U))));
        tracep->fullBit(oldp+105,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d) 
                                         >> 1U))));
        tracep->fullBit(oldp+106,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d))));
        tracep->fullCData(oldp+107,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d),6);
        tracep->fullCData(oldp+108,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                      >> 0x18U)))),8);
        tracep->fullCData(oldp+109,((0xfU & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+110,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                   >> 0x11U)))),3);
        tracep->fullBit(oldp+111,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                 >> 0x10U)))));
        tracep->fullCData(oldp+112,((0xfU & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                     >> 0xcU)))),4);
        tracep->fullSData(oldp+113,((0xfffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned))),12);
        tracep->fullCData(oldp+114,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                      >> 0x38U)))),8);
        tracep->fullCData(oldp+115,((0xfU & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+116,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                   >> 0x31U)))),3);
        tracep->fullBit(oldp+117,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                 >> 0x30U)))));
        tracep->fullCData(oldp+118,((0xfU & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                     >> 0x2cU)))),4);
        tracep->fullSData(oldp+119,((0xfffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                       >> 0x20U)))),12);
        tracep->fullBit(oldp+120,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+121,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+122,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+123,((3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+124,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+125,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+126,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+127,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+128,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o))));
        tracep->fullBit(oldp+129,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o))));
        tracep->fullCData(oldp+130,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hfifo_rspvalid),3);
        tracep->fullCData(oldp+131,((0x3fU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                      >> 0x25U)))),8);
        tracep->fullQData(oldp+132,(vlTOPp->Azadi_top_verilator__DOT__u_jtagdpi__DOT__ctx),64);
        tracep->fullBit(oldp+134,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+135,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+136,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+137,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+138,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+139,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+140,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+141,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+142,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+143,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+144,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+145,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullBit(oldp+146,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+147,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+148,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+149,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+150,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+151,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+152,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+153,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+154,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+155,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+156,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+157,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullBit(oldp+158,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+159,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+160,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+161,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+162,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+163,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+164,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+165,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+166,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+167,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+168,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+169,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullBit(oldp+170,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+171,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+172,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+173,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+174,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+175,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+176,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+177,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+178,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+179,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+180,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+181,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullBit(oldp+182,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+183,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+184,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+185,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+186,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+187,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+188,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+189,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+190,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+191,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+192,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+193,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullCData(oldp+194,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[0]),4);
        tracep->fullCData(oldp+195,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[1]),4);
        tracep->fullCData(oldp+196,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[2]),4);
        tracep->fullCData(oldp+197,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[3]),4);
        tracep->fullCData(oldp+198,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[4]),4);
        tracep->fullCData(oldp+199,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[5]),4);
        tracep->fullCData(oldp+200,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[6]),4);
        tracep->fullCData(oldp+201,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[7]),4);
        tracep->fullCData(oldp+202,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[8]),4);
        tracep->fullCData(oldp+203,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[9]),4);
        tracep->fullCData(oldp+204,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[10]),4);
        tracep->fullCData(oldp+205,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[11]),4);
        tracep->fullCData(oldp+206,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[12]),4);
        tracep->fullCData(oldp+207,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[13]),4);
        tracep->fullCData(oldp+208,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[14]),4);
        tracep->fullCData(oldp+209,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0]),4);
        tracep->fullCData(oldp+210,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[1]),4);
        tracep->fullCData(oldp+211,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[2]),4);
        tracep->fullCData(oldp+212,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[3]),4);
        tracep->fullCData(oldp+213,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[4]),4);
        tracep->fullCData(oldp+214,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[5]),4);
        tracep->fullCData(oldp+215,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[6]),4);
        tracep->fullCData(oldp+216,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[7]),4);
        tracep->fullCData(oldp+217,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[8]),4);
        tracep->fullCData(oldp+218,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[9]),4);
        tracep->fullCData(oldp+219,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[10]),4);
        tracep->fullCData(oldp+220,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[11]),4);
        tracep->fullCData(oldp+221,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[12]),4);
        tracep->fullCData(oldp+222,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[13]),4);
        tracep->fullCData(oldp+223,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[14]),4);
        tracep->fullCData(oldp+224,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[15]),4);
        tracep->fullCData(oldp+225,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[16]),4);
        tracep->fullCData(oldp+226,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[17]),4);
        tracep->fullCData(oldp+227,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[18]),4);
        tracep->fullCData(oldp+228,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[19]),4);
        tracep->fullCData(oldp+229,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[20]),4);
        tracep->fullCData(oldp+230,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[21]),4);
        tracep->fullCData(oldp+231,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[22]),4);
        tracep->fullCData(oldp+232,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[23]),4);
        tracep->fullCData(oldp+233,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[24]),4);
        tracep->fullCData(oldp+234,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[25]),4);
        tracep->fullCData(oldp+235,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[26]),4);
        tracep->fullCData(oldp+236,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[27]),4);
        tracep->fullCData(oldp+237,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[28]),4);
        tracep->fullCData(oldp+238,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[29]),4);
        tracep->fullCData(oldp+239,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[30]),4);
        tracep->fullCData(oldp+240,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[31]),4);
        tracep->fullCData(oldp+241,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[32]),4);
        tracep->fullCData(oldp+242,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[33]),4);
        tracep->fullCData(oldp+243,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[34]),4);
        tracep->fullCData(oldp+244,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[35]),4);
        tracep->fullCData(oldp+245,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[36]),4);
        tracep->fullCData(oldp+246,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[37]),4);
        tracep->fullBit(oldp+247,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q));
        tracep->fullCData(oldp+248,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                              >> 0x18U))),8);
        tracep->fullIData(oldp+249,((0xffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)),24);
        tracep->fullIData(oldp+250,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U]),32);
        tracep->fullIData(oldp+251,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U]),32);
        tracep->fullIData(oldp+252,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U]),32);
        tracep->fullIData(oldp+253,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U]),32);
        tracep->fullIData(oldp+254,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U]),32);
        tracep->fullIData(oldp+255,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U]),32);
        tracep->fullIData(oldp+256,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U]),32);
        tracep->fullIData(oldp+257,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U]),32);
        tracep->fullIData(oldp+258,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q)),32);
        tracep->fullIData(oldp+259,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q 
                                             >> 0x20U))),32);
        tracep->fullIData(oldp+260,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q)),32);
        tracep->fullBit(oldp+261,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x14U))));
        tracep->fullBit(oldp+262,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x10U))));
        tracep->fullCData(oldp+263,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                           >> 0x11U))),3);
        tracep->fullBit(oldp+264,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0xfU))));
        tracep->fullIData(oldp+265,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q)),32);
        tracep->fullBit(oldp+266,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))));
        tracep->fullCData(oldp+267,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q),3);
        tracep->fullSData(oldp+268,((0xffffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q 
                                                >> 0x10U))),16);
        tracep->fullCData(oldp+269,((0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q 
                                             >> 0xcU))),4);
        tracep->fullSData(oldp+270,((0xfffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q)),12);
        tracep->fullCData(oldp+271,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                           >> 0x1dU))),3);
        tracep->fullCData(oldp+272,((0x3fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                              >> 0x17U))),6);
        tracep->fullBit(oldp+273,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x16U))));
        tracep->fullBit(oldp+274,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x15U))));
        tracep->fullBit(oldp+275,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x14U))));
        tracep->fullBit(oldp+276,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x10U))));
        tracep->fullBit(oldp+277,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0xfU))));
        tracep->fullCData(oldp+278,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+279,((0x7fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                              >> 5U))),7);
        tracep->fullBit(oldp+280,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 4U))));
        tracep->fullBit(oldp+281,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 3U))));
        tracep->fullBit(oldp+282,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 2U))));
        tracep->fullBit(oldp+283,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 1U))));
        tracep->fullBit(oldp+284,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q)));
        tracep->fullQData(oldp+285,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q),64);
        tracep->fullQData(oldp+287,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q),64);
        tracep->fullCData(oldp+289,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q),3);
        tracep->fullQData(oldp+290,((((QData)((IData)(
                                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U])))),64);
        tracep->fullQData(oldp+292,((((QData)((IData)(
                                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U])))),64);
        tracep->fullQData(oldp+294,((((QData)((IData)(
                                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U])))),64);
        tracep->fullQData(oldp+296,((((QData)((IData)(
                                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U])))),64);
        tracep->fullBit(oldp+298,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x17U))));
        tracep->fullCData(oldp+299,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                           >> 0x14U))),3);
        tracep->fullBit(oldp+300,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x13U))));
        tracep->fullBit(oldp+301,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x12U))));
        tracep->fullBit(oldp+302,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x11U))));
        tracep->fullBit(oldp+303,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x10U))));
        tracep->fullSData(oldp+304,((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)),16);
        tracep->fullBit(oldp+305,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+306,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+307,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+308,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+309,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+310,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                      << 0x1bU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[1U] 
                                                   >> 5U))),32);
        tracep->fullCData(oldp+311,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+312,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[1U] 
                                      << 0x1fU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[0U] 
                                                   >> 1U))),32);
        tracep->fullBit(oldp+313,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[0U])));
        tracep->fullBit(oldp+314,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req));
        tracep->fullBit(oldp+315,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we));
        tracep->fullCData(oldp+316,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be),4);
        tracep->fullCData(oldp+317,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx),2);
        tracep->fullCData(oldp+318,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we)
                                      ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be)
                                      : 0xfU)),4);
        tracep->fullBit(oldp+319,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+320,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[0U])));
        tracep->fullBit(oldp+321,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+322,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+323,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+324,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+325,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+326,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                      << 0x1bU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U] 
                                                   >> 5U))),32);
        tracep->fullCData(oldp+327,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+328,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U] 
                                      << 0x1fU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U] 
                                                   >> 1U))),32);
        tracep->fullBit(oldp+329,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U])));
        tracep->fullIData(oldp+330,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0U]),32);
        tracep->fullIData(oldp+331,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1U]),32);
        tracep->fullIData(oldp+332,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2U]),32);
        tracep->fullIData(oldp+333,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3U]),32);
        tracep->fullIData(oldp+334,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4U]),32);
        tracep->fullIData(oldp+335,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5U]),32);
        tracep->fullIData(oldp+336,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6U]),32);
        tracep->fullIData(oldp+337,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7U]),32);
        tracep->fullIData(oldp+338,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8U]),32);
        tracep->fullIData(oldp+339,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9U]),32);
        tracep->fullIData(oldp+340,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xaU]),32);
        tracep->fullIData(oldp+341,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xbU]),32);
        tracep->fullIData(oldp+342,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xcU]),32);
        tracep->fullIData(oldp+343,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xdU]),32);
        tracep->fullIData(oldp+344,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xeU]),32);
        tracep->fullIData(oldp+345,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xfU]),32);
        tracep->fullIData(oldp+346,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x10U]),32);
        tracep->fullIData(oldp+347,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x11U]),32);
        tracep->fullIData(oldp+348,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x12U]),32);
        tracep->fullIData(oldp+349,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x13U]),32);
        tracep->fullIData(oldp+350,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x14U]),32);
        tracep->fullIData(oldp+351,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x15U]),32);
        tracep->fullIData(oldp+352,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x16U]),32);
        tracep->fullIData(oldp+353,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x17U]),32);
        tracep->fullIData(oldp+354,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x18U]),32);
        tracep->fullIData(oldp+355,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x19U]),32);
        tracep->fullIData(oldp+356,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1aU]),32);
        tracep->fullIData(oldp+357,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1bU]),32);
        tracep->fullIData(oldp+358,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1cU]),32);
        tracep->fullIData(oldp+359,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1dU]),32);
        tracep->fullIData(oldp+360,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1eU]),32);
        tracep->fullIData(oldp+361,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1fU]),32);
        tracep->fullIData(oldp+362,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0U]),32);
        tracep->fullIData(oldp+363,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[1U]),32);
        tracep->fullIData(oldp+364,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[2U]),32);
        tracep->fullIData(oldp+365,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[3U]),32);
        tracep->fullIData(oldp+366,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[4U]),32);
        tracep->fullIData(oldp+367,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[5U]),32);
        tracep->fullIData(oldp+368,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[6U]),32);
        tracep->fullIData(oldp+369,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[7U]),32);
        tracep->fullIData(oldp+370,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[8U]),32);
        tracep->fullIData(oldp+371,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[9U]),32);
        tracep->fullIData(oldp+372,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xaU]),32);
        tracep->fullIData(oldp+373,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xbU]),32);
        tracep->fullIData(oldp+374,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xcU]),32);
        tracep->fullIData(oldp+375,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xdU]),32);
        tracep->fullIData(oldp+376,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xeU]),32);
        tracep->fullIData(oldp+377,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xfU]),32);
        tracep->fullIData(oldp+378,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x10U]),32);
        tracep->fullIData(oldp+379,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x11U]),32);
        tracep->fullIData(oldp+380,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x12U]),32);
        tracep->fullIData(oldp+381,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x13U]),32);
        tracep->fullIData(oldp+382,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x14U]),32);
        tracep->fullIData(oldp+383,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x15U]),32);
        tracep->fullIData(oldp+384,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x16U]),32);
        tracep->fullIData(oldp+385,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x17U]),32);
        tracep->fullIData(oldp+386,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x18U]),32);
        tracep->fullIData(oldp+387,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x19U]),32);
        tracep->fullIData(oldp+388,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1aU]),32);
        tracep->fullIData(oldp+389,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1bU]),32);
        tracep->fullIData(oldp+390,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1cU]),32);
        tracep->fullIData(oldp+391,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1dU]),32);
        tracep->fullIData(oldp+392,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1eU]),32);
        tracep->fullBit(oldp+393,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq));
        tracep->fullBit(oldp+394,((0U != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)));
        tracep->fullBit(oldp+395,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs 
                                         >> 0x11U))));
        tracep->fullBit(oldp+396,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs 
                                         >> 0x10U))));
        tracep->fullBit(oldp+397,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs 
                                         >> 0xfU))));
        tracep->fullSData(oldp+398,((0x7fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)),15);
        tracep->fullBit(oldp+399,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk));
        tracep->fullBit(oldp+400,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
        tracep->fullCData(oldp+401,(((0x4000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                      ? 0xeU : ((0x2000U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                 ? 0xdU
                                                 : 
                                                ((0x1000U 
                                                  & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                  ? 0xcU
                                                  : 
                                                 ((0x800U 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                   ? 0xbU
                                                   : 
                                                  ((0x400U 
                                                    & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                    ? 0xaU
                                                    : 
                                                   ((0x200U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                     ? 9U
                                                     : 
                                                    ((0x100U 
                                                      & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                      ? 8U
                                                      : 
                                                     ((0x80U 
                                                       & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                       ? 7U
                                                       : 
                                                      ((0x40U 
                                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                        ? 6U
                                                        : 
                                                       ((0x20U 
                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                          ? 4U
                                                          : 
                                                         ((8U 
                                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                           ? 3U
                                                           : 
                                                          ((4U 
                                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                            ? 2U
                                                            : 
                                                           ((2U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                             ? 1U
                                                             : 0U))))))))))))))),4);
        tracep->fullBit(oldp+402,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs 
                                         >> 0x10U))));
        tracep->fullBit(oldp+403,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__resumereq));
        tracep->fullIData(oldp+404,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel),20);
        tracep->fullBit(oldp+405,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart));
        tracep->fullBit(oldp+406,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel)));
        tracep->fullCData(oldp+407,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__resumereq),2);
        tracep->fullCData(oldp+408,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq),2);
        tracep->fullBit(oldp+409,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q));
        tracep->fullBit(oldp+410,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_busy_q));
        tracep->fullBit(oldp+411,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fetch_enable_q));
        tracep->fullBit(oldp+412,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__qe));
        tracep->fullBit(oldp+413,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
                                         >> 0x11U))));
        tracep->fullBit(oldp+414,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
                                         >> 0x10U))));
        tracep->fullBit(oldp+415,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
                                         >> 0xfU))));
        tracep->fullSData(oldp+416,((0x7fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip)),15);
        tracep->fullIData(oldp+417,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q),32);
        tracep->fullBit(oldp+418,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q));
        tracep->fullCData(oldp+419,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q),2);
        tracep->fullBit(oldp+420,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q));
        tracep->fullBit(oldp+421,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
        tracep->fullBit(oldp+422,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q));
        tracep->fullIData(oldp+423,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding),17);
        tracep->fullCData(oldp+424,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__dev_select_outstanding),4);
        tracep->fullCData(oldp+425,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_opcode),3);
        tracep->fullCData(oldp+426,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_source),8);
        tracep->fullCData(oldp+427,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_size),2);
        tracep->fullBit(oldp+428,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending));
        tracep->fullIData(oldp+429,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding),17);
        tracep->fullCData(oldp+430,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__dev_select_outstanding),4);
        tracep->fullCData(oldp+431,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_opcode),3);
        tracep->fullCData(oldp+432,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_source),8);
        tracep->fullCData(oldp+433,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_size),2);
        tracep->fullBit(oldp+434,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending));
        tracep->fullCData(oldp+435,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_opcode),3);
        tracep->fullCData(oldp+436,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_source),8);
        tracep->fullCData(oldp+437,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_size),2);
        tracep->fullBit(oldp+438,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_req_pending));
        tracep->fullBit(oldp+439,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending));
        tracep->fullCData(oldp+440,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q),3);
        tracep->fullBit(oldp+441,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe));
        tracep->fullBit(oldp+442,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe));
        tracep->fullBit(oldp+443,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe));
        tracep->fullBit(oldp+444,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe));
        tracep->fullBit(oldp+445,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe));
        tracep->fullBit(oldp+446,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe));
        tracep->fullBit(oldp+447,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe));
        tracep->fullBit(oldp+448,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe));
        tracep->fullBit(oldp+449,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe));
        tracep->fullBit(oldp+450,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe));
        tracep->fullBit(oldp+451,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe));
        tracep->fullBit(oldp+452,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe));
        tracep->fullBit(oldp+453,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe));
        tracep->fullBit(oldp+454,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe));
        tracep->fullBit(oldp+455,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe));
        tracep->fullBit(oldp+456,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe));
        tracep->fullBit(oldp+457,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe));
        tracep->fullBit(oldp+458,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe));
        tracep->fullBit(oldp+459,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe));
        tracep->fullBit(oldp+460,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe));
        tracep->fullBit(oldp+461,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe));
        tracep->fullBit(oldp+462,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe));
        tracep->fullBit(oldp+463,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe));
        tracep->fullBit(oldp+464,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe));
        tracep->fullBit(oldp+465,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe));
        tracep->fullBit(oldp+466,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe));
        tracep->fullBit(oldp+467,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe));
        tracep->fullBit(oldp+468,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe));
        tracep->fullBit(oldp+469,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe));
        tracep->fullBit(oldp+470,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe));
        tracep->fullBit(oldp+471,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe));
        tracep->fullBit(oldp+472,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe));
        tracep->fullBit(oldp+473,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+474,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+475,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+476,((3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+477,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+478,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+479,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+480,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+481,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o))));
        tracep->fullCData(oldp+482,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
        tracep->fullBit(oldp+483,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                         >> 2U))));
        tracep->fullCData(oldp+484,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
        tracep->fullCData(oldp+485,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
        tracep->fullBit(oldp+486,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                         >> 2U))));
        tracep->fullCData(oldp+487,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
        tracep->fullCData(oldp+488,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
        tracep->fullBit(oldp+489,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                         >> 2U))));
        tracep->fullCData(oldp+490,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
        tracep->fullCData(oldp+491,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+492,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullBit(oldp+493,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullCData(oldp+494,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+495,((2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                           << 1U))),2);
        tracep->fullCData(oldp+496,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullSData(oldp+497,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage),13);
        tracep->fullCData(oldp+498,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage),5);
        tracep->fullQData(oldp+499,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage),33);
        tracep->fullBit(oldp+501,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rvalid_o));
        tracep->fullIData(oldp+502,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rdata_o),32);
        tracep->fullSData(oldp+503,((0x1fffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage))),13);
        tracep->fullSData(oldp+504,((0x1fffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                        >> 0xdU)))),13);
        tracep->fullSData(oldp+505,((0x1fffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                        >> 0x1aU)))),13);
        tracep->fullSData(oldp+506,((0x1fffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                        >> 0x27U)))),13);
        tracep->fullCData(oldp+507,((0x1fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage)),5);
        tracep->fullCData(oldp+508,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                              >> 5U))),5);
        tracep->fullCData(oldp+509,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+510,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+511,((0x1ffffffffULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
        tracep->fullQData(oldp+513,((0x1ffffffffULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                              >> 1U))))),33);
        tracep->fullQData(oldp+515,((0x1ffffffffULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                              >> 2U))))),33);
        tracep->fullQData(oldp+517,((0x1ffffffffULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                         << 0x1dU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                           >> 3U)))),33);
        tracep->fullIData(oldp+519,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q),32);
        tracep->fullBit(oldp+520,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_q));
        tracep->fullSData(oldp+521,((0xfffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q))),12);
        tracep->fullBit(oldp+522,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_q));
        tracep->fullSData(oldp+523,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q),14);
        tracep->fullCData(oldp+524,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q0),8);
        tracep->fullCData(oldp+525,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q1),8);
        tracep->fullCData(oldp+526,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q2),8);
        tracep->fullCData(oldp+527,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q3),8);
        tracep->fullBit(oldp+528,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q));
        tracep->fullBit(oldp+529,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__fwd_rom_q));
        tracep->fullCData(oldp+530,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+531,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+532,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                         >> 1U))));
        tracep->fullBit(oldp+533,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                         >> 1U))));
        tracep->fullBit(oldp+534,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+535,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+536,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+537,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+538,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                         >> 1U))));
        tracep->fullBit(oldp+539,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                         >> 1U))));
        tracep->fullBit(oldp+540,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+541,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+542,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+543,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+544,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                         >> 1U))));
        tracep->fullBit(oldp+545,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                         >> 1U))));
        tracep->fullBit(oldp+546,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+547,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+548,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
        tracep->fullBit(oldp+549,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                         >> 2U))));
        tracep->fullCData(oldp+550,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
        tracep->fullCData(oldp+551,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
        tracep->fullBit(oldp+552,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                         >> 2U))));
        tracep->fullCData(oldp+553,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
        tracep->fullCData(oldp+554,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
        tracep->fullBit(oldp+555,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                         >> 2U))));
        tracep->fullCData(oldp+556,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
        tracep->fullBit(oldp+557,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+558,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+559,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+560,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+561,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+562,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+563,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+564,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+565,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+566,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+567,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+568,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV));
        tracep->fullCData(oldp+569,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte),8);
        tracep->fullIData(oldp+570,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_cntrl_data),32);
        tracep->fullCData(oldp+571,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs),2);
        tracep->fullCData(oldp+572,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                           >> 0xbU))),2);
        tracep->fullBit(oldp+573,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                         >> 0xaU))));
        tracep->fullCData(oldp+574,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                           >> 8U))),2);
        tracep->fullCData(oldp+575,((0xffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
        tracep->fullBit(oldp+576,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid));
        tracep->fullCData(oldp+577,((0xfU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                             >> 1U))),4);
        tracep->fullBit(oldp+578,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
        tracep->fullSData(oldp+579,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
        tracep->fullCData(oldp+580,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        tracep->fullSData(oldp+581,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count),16);
        tracep->fullCData(oldp+582,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index),3);
        tracep->fullCData(oldp+583,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main),3);
        tracep->fullCData(oldp+584,((0xfU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                             >> 1U))),4);
        tracep->fullBit(oldp+585,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
        tracep->fullCData(oldp+586,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        tracep->fullBit(oldp+587,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
        tracep->fullIData(oldp+588,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask),32);
        tracep->fullBit(oldp+589,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+590,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        tracep->fullCData(oldp+591,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_ns),2);
        tracep->fullBit(oldp+592,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_d));
        tracep->fullBit(oldp+593,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_d));
        tracep->fullIData(oldp+594,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
        tracep->fullBit(oldp+595,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_valid));
        tracep->fullQData(oldp+596,(((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                     << 1U)),33);
        tracep->fullIData(oldp+598,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                             >> 1U))),32);
        tracep->fullBit(oldp+599,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
        tracep->fullQData(oldp+600,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
        tracep->fullBit(oldp+602,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+603,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+604,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+605,((3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+606,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+607,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+608,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                             >> 2U))),32);
        tracep->fullBit(oldp+609,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                 >> 1U)))));
        tracep->fullBit(oldp+610,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar))));
        tracep->fullBit(oldp+611,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+612,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+613,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+614,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+615,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+616,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+617,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+618,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+619,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+620,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+621,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullBit(oldp+622,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar))));
        tracep->fullBit(oldp+623,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+624,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                                                >> 0x30U))))
                                                                      ? (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                                                >> 2U))
                                                                      : 0U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullIData(oldp+626,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q),32);
        tracep->fullBit(oldp+627,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q));
        tracep->fullBit(oldp+628,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q));
        tracep->fullIData(oldp+629,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
        tracep->fullBit(oldp+630,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
        tracep->fullCData(oldp+631,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
        tracep->fullCData(oldp+632,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
        tracep->fullBit(oldp+633,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
        tracep->fullCData(oldp+634,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
        tracep->fullBit(oldp+635,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q));
        tracep->fullBit(oldp+636,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req));
        tracep->fullBit(oldp+637,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_write_wb));
        tracep->fullQData(oldp+638,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[0]),34);
        tracep->fullQData(oldp+640,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[1]),34);
        tracep->fullQData(oldp+642,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[0]),34);
        tracep->fullQData(oldp+644,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[1]),34);
        tracep->fullQData(oldp+646,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[0]),34);
        tracep->fullQData(oldp+648,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[1]),34);
        tracep->fullQData(oldp+650,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[0]),34);
        tracep->fullQData(oldp+652,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[1]),34);
        tracep->fullIData(oldp+654,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                            [1U])),32);
        tracep->fullCData(oldp+655,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                   [1U] 
                                                   >> 0x20U)))),2);
        tracep->fullIData(oldp+656,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id),32);
        tracep->fullCData(oldp+657,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+658,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+659,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 7U))),5);
        tracep->fullIData(oldp+660,(((0xfffff000U & 
                                      ((- (IData)((1U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                                     (0xfffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x14U)))),32);
        tracep->fullIData(oldp+661,(((0xfffff000U & 
                                      ((- (IData)((1U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                                     ((0xfe0U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x14U)) 
                                      | (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 7U))))),32);
        tracep->fullIData(oldp+662,(((0xffffe000U & 
                                      ((- (IData)((1U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xdU)) | 
                                     ((0x1000U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x13U)) 
                                      | ((0x800U & 
                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                           << 4U)) 
                                         | ((0x7e0U 
                                             & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 7U))))))),32);
        tracep->fullIData(oldp+663,((0xfffff000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)),32);
        tracep->fullIData(oldp+664,(((0xfff00000U & 
                                      ((- (IData)((1U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0x14U)) | 
                                     ((0xff000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id) 
                                      | ((0x800U & 
                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x14U)))))),32);
        tracep->fullIData(oldp+665,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0xfU))),32);
        tracep->fullSData(oldp+666,(((0x3e0U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0xaU)) 
                                     | (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 7U)))),10);
        tracep->fullCData(oldp+667,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x1bU))),5);
        tracep->fullBit(oldp+668,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we));
        tracep->fullBit(oldp+669,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__icache_inval));
        tracep->fullBit(oldp+670,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a));
        tracep->fullBit(oldp+671,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b));
        tracep->fullCData(oldp+672,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator),6);
        tracep->fullBit(oldp+673,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__mult_sel_ex));
        tracep->fullBit(oldp+674,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex));
        tracep->fullCData(oldp+675,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator),2);
        tracep->fullCData(oldp+676,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
        tracep->fullBit(oldp+677,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_access));
        tracep->fullCData(oldp+678,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type),2);
        tracep->fullBit(oldp+679,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext));
        tracep->fullCData(oldp+680,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)
                                      ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                          ? 1U : 0U)
                                      : 2U)),2);
        tracep->fullBit(oldp+681,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
        tracep->fullBit(oldp+682,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn));
        tracep->fullBit(oldp+683,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec));
        tracep->fullBit(oldp+684,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec));
        tracep->fullBit(oldp+685,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec));
        tracep->fullBit(oldp+686,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec));
        tracep->fullBit(oldp+687,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec));
        tracep->fullBit(oldp+688,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec));
        tracep->fullBit(oldp+689,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec));
        tracep->fullBit(oldp+690,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel));
        tracep->fullBit(oldp+691,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
        tracep->fullCData(oldp+692,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
        tracep->fullBit(oldp+693,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
        tracep->fullBit(oldp+694,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
        tracep->fullCData(oldp+695,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
        tracep->fullBit(oldp+696,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec));
        tracep->fullBit(oldp+697,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
        tracep->fullCData(oldp+698,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
        tracep->fullCData(oldp+699,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
        tracep->fullCData(oldp+700,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
        tracep->fullBit(oldp+701,((8U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))));
        tracep->fullBit(oldp+702,(((3U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                   | (6U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
        tracep->fullBit(oldp+703,(((4U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                   | (7U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
        tracep->fullBit(oldp+704,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
        tracep->fullCData(oldp+705,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
        tracep->fullCData(oldp+706,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
        tracep->fullBit(oldp+707,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel));
        tracep->fullIData(oldp+708,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[0]),32);
        tracep->fullIData(oldp+709,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[1]),32);
        tracep->fullBit(oldp+710,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
        tracep->fullIData(oldp+711,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b),32);
        tracep->fullQData(oldp+712,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
        tracep->fullIData(oldp+714,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[0]),32);
        tracep->fullIData(oldp+715,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[1]),32);
        tracep->fullIData(oldp+716,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b),32);
        tracep->fullQData(oldp+717,((0x1ffffffffULL 
                                     & (~ ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                           << 1U)))),33);
        tracep->fullCData(oldp+719,((0x3fU & ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
        tracep->fullCData(oldp+720,(((0x10U & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0xfU 
                                                            & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                               >> 0x18U))))) 
                                               << 4U)) 
                                     | (0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                >> 0x18U)))),5);
        tracep->fullCData(oldp+721,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                              >> 0x10U))),5);
        tracep->fullBit(oldp+722,((1U & (((IData)(0x20U) 
                                          - (0x1fU 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                         >> 5U))));
        tracep->fullCData(oldp+723,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be),4);
        tracep->fullIData(oldp+724,((0xfffffffcU & 
                                     ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 3U)) 
                                      << 2U))),32);
        tracep->fullIData(oldp+725,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                             >> 1U))),32);
        tracep->fullQData(oldp+726,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
        tracep->fullBit(oldp+728,((0U == (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U)))));
        tracep->fullCData(oldp+729,(((2U & ((IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 0x21U)) 
                                            << 1U)) 
                                     | (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
        tracep->fullCData(oldp+730,((3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+731,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+732,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+733,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+734,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+735,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+736,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                      << 0x1bU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[1U] 
                                                   >> 5U))),32);
        tracep->fullCData(oldp+737,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+738,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[1U] 
                                      << 0x1fU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[0U] 
                                                   >> 1U))),32);
        tracep->fullBit(oldp+739,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[0U])));
        tracep->fullBit(oldp+740,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+741,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[0U])));
        tracep->fullCData(oldp+742,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_3),4);
        tracep->fullCData(oldp+743,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
        tracep->fullBit(oldp+744,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__hold_all_requests));
        tracep->fullBit(oldp+745,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][2U] >> 0x15U))));
        tracep->fullCData(oldp+746,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [0U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+747,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [0U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+748,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [0U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+749,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+750,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [0U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+751,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [0U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [0U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+752,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [0U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+753,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [0U][0U])));
        tracep->fullBit(oldp+754,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][2U] >> 0x15U))));
        tracep->fullCData(oldp+755,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [1U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+756,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [1U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+757,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [1U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+758,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+759,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [1U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+760,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [1U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [1U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+761,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [1U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+762,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [1U][0U])));
        tracep->fullBit(oldp+763,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][2U] >> 0x15U))));
        tracep->fullCData(oldp+764,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [2U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+765,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [2U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+766,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [2U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+767,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+768,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [2U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+769,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [2U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [2U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+770,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [2U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+771,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [2U][0U])));
        tracep->fullBit(oldp+772,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][2U] >> 0x15U))));
        tracep->fullCData(oldp+773,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [3U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+774,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [3U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+775,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [3U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+776,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+777,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [3U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+778,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [3U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [3U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+779,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [3U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+780,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [3U][0U])));
        tracep->fullBit(oldp+781,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][2U] >> 0x15U))));
        tracep->fullCData(oldp+782,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [4U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+783,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [4U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+784,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [4U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+785,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [4U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+786,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [4U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+787,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [4U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [4U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+788,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [4U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+789,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [4U][0U])));
        tracep->fullBit(oldp+790,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][2U] >> 0x15U))));
        tracep->fullCData(oldp+791,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [5U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+792,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [5U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+793,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [5U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+794,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [5U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+795,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [5U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+796,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [5U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [5U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+797,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [5U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+798,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [5U][0U])));
        tracep->fullBit(oldp+799,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][2U] >> 0x15U))));
        tracep->fullCData(oldp+800,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [6U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+801,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [6U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+802,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [6U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+803,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [6U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+804,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [6U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+805,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [6U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [6U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+806,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [6U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+807,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [6U][0U])));
        tracep->fullBit(oldp+808,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][2U] >> 0x15U))));
        tracep->fullCData(oldp+809,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [7U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+810,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [7U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+811,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [7U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+812,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [7U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+813,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [7U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+814,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [7U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [7U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+815,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [7U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+816,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [7U][0U])));
        tracep->fullBit(oldp+817,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][2U] >> 0x15U))));
        tracep->fullCData(oldp+818,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [8U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+819,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [8U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+820,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [8U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+821,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [8U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+822,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [8U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+823,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [8U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [8U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+824,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [8U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+825,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [8U][0U])));
        tracep->fullBit(oldp+826,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][2U] >> 0x15U))));
        tracep->fullCData(oldp+827,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [9U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+828,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [9U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+829,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [9U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+830,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [9U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+831,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [9U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+832,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [9U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [9U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+833,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [9U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+834,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [9U][0U])));
        tracep->fullBit(oldp+835,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0xaU][2U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+836,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [0xaU][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+837,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [0xaU][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+838,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [0xaU][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+839,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [0xaU][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+840,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [0xaU][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [0xaU][1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+841,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [0xaU][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [0xaU][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+842,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [0xaU][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [0xaU][0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+843,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [0xaU][0U])));
        tracep->fullWData(oldp+844,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
        tracep->fullBit(oldp+847,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0xaU][2U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+848,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [0xaU][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+849,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [0xaU][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+850,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [0xaU][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+851,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [0xaU][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+852,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [0xaU][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [0xaU][1U] 
                                        >> 5U))),32);
        tracep->fullCData(oldp+853,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [0xaU][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [0xaU][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+854,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [0xaU][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [0xaU][0U] 
                                        >> 1U))),32);
        tracep->fullBit(oldp+855,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [0xaU][0U])));
        tracep->fullBit(oldp+856,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][2U] >> 0x15U))));
        tracep->fullCData(oldp+857,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [0U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+858,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [0U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+859,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [0U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+860,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+861,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [0U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+862,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [0U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [0U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+863,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [0U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+864,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [0U][0U])));
        tracep->fullBit(oldp+865,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][2U] >> 0x15U))));
        __Vtemp1350[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [0U][0U]);
        __Vtemp1350[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [0U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][1U]));
        __Vtemp1350[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][2U]));
        tracep->fullWData(oldp+866,(__Vtemp1350),85);
        tracep->fullBit(oldp+869,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [0U][0U])));
        tracep->fullBit(oldp+870,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][2U] >> 0x15U))));
        tracep->fullCData(oldp+871,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [1U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+872,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [1U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+873,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [1U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+874,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+875,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [1U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+876,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [1U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [1U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+877,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [1U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+878,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [1U][0U])));
        tracep->fullBit(oldp+879,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][2U] >> 0x15U))));
        __Vtemp1366[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [1U][0U]);
        __Vtemp1366[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [1U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][1U]));
        __Vtemp1366[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][2U]));
        tracep->fullWData(oldp+880,(__Vtemp1366),85);
        tracep->fullBit(oldp+883,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [1U][0U])));
        tracep->fullBit(oldp+884,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][2U] >> 0x15U))));
        tracep->fullCData(oldp+885,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [2U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+886,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [2U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+887,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [2U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+888,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+889,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [2U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+890,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [2U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [2U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+891,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [2U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+892,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [2U][0U])));
        tracep->fullBit(oldp+893,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][2U] >> 0x15U))));
        __Vtemp1382[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [2U][0U]);
        __Vtemp1382[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [2U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][1U]));
        __Vtemp1382[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][2U]));
        tracep->fullWData(oldp+894,(__Vtemp1382),85);
        tracep->fullBit(oldp+897,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [2U][0U])));
        tracep->fullBit(oldp+898,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][2U] >> 0x15U))));
        tracep->fullCData(oldp+899,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [3U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+900,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [3U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+901,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [3U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+902,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+903,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [3U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+904,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [3U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [3U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+905,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [3U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+906,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [3U][0U])));
        tracep->fullBit(oldp+907,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][2U] >> 0x15U))));
        __Vtemp1398[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [3U][0U]);
        __Vtemp1398[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [3U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][1U]));
        __Vtemp1398[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][2U]));
        tracep->fullWData(oldp+908,(__Vtemp1398),85);
        tracep->fullBit(oldp+911,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [3U][0U])));
        tracep->fullBit(oldp+912,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][2U] >> 0x15U))));
        tracep->fullCData(oldp+913,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [4U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+914,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [4U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+915,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [4U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+916,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [4U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+917,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [4U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+918,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [4U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [4U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+919,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [4U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+920,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [4U][0U])));
        tracep->fullBit(oldp+921,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][2U] >> 0x15U))));
        __Vtemp1414[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [4U][0U]);
        __Vtemp1414[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [4U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][1U]));
        __Vtemp1414[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][2U]));
        tracep->fullWData(oldp+922,(__Vtemp1414),85);
        tracep->fullBit(oldp+925,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [4U][0U])));
        tracep->fullBit(oldp+926,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][2U] >> 0x15U))));
        tracep->fullCData(oldp+927,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [5U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+928,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [5U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+929,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [5U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+930,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [5U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+931,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [5U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+932,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [5U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [5U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+933,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [5U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+934,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [5U][0U])));
        tracep->fullBit(oldp+935,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][2U] >> 0x15U))));
        __Vtemp1430[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [5U][0U]);
        __Vtemp1430[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [5U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][1U]));
        __Vtemp1430[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][2U]));
        tracep->fullWData(oldp+936,(__Vtemp1430),85);
        tracep->fullBit(oldp+939,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [5U][0U])));
        tracep->fullBit(oldp+940,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][2U] >> 0x15U))));
        tracep->fullCData(oldp+941,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [6U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+942,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [6U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+943,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [6U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+944,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [6U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+945,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [6U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+946,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [6U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [6U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+947,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [6U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+948,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [6U][0U])));
        tracep->fullBit(oldp+949,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][2U] >> 0x15U))));
        __Vtemp1446[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [6U][0U]);
        __Vtemp1446[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [6U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][1U]));
        __Vtemp1446[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][2U]));
        tracep->fullWData(oldp+950,(__Vtemp1446),85);
        tracep->fullBit(oldp+953,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [6U][0U])));
        tracep->fullBit(oldp+954,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][2U] >> 0x15U))));
        tracep->fullCData(oldp+955,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [7U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+956,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [7U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+957,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [7U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+958,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [7U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+959,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [7U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+960,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [7U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [7U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+961,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [7U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+962,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [7U][0U])));
        tracep->fullBit(oldp+963,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][2U] >> 0x15U))));
        __Vtemp1462[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [7U][0U]);
        __Vtemp1462[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [7U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][1U]));
        __Vtemp1462[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][2U]));
        tracep->fullWData(oldp+964,(__Vtemp1462),85);
        tracep->fullBit(oldp+967,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [7U][0U])));
        tracep->fullBit(oldp+968,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][2U] >> 0x15U))));
        tracep->fullCData(oldp+969,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [8U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+970,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [8U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+971,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [8U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+972,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [8U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+973,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [8U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+974,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [8U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [8U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+975,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [8U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+976,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [8U][0U])));
        tracep->fullBit(oldp+977,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][2U] >> 0x15U))));
        __Vtemp1478[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [8U][0U]);
        __Vtemp1478[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [8U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][1U]));
        __Vtemp1478[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][2U]));
        tracep->fullWData(oldp+978,(__Vtemp1478),85);
        tracep->fullBit(oldp+981,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [8U][0U])));
        tracep->fullBit(oldp+982,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][2U] >> 0x15U))));
        tracep->fullCData(oldp+983,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [9U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+984,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [9U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+985,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                           [9U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+986,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [9U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+987,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [9U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+988,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                              [9U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                [9U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+989,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [9U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                        [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+990,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [9U][0U])));
        tracep->fullBit(oldp+991,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][2U] >> 0x15U))));
        __Vtemp1494[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [9U][0U]);
        __Vtemp1494[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [9U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][1U]));
        __Vtemp1494[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [9U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][2U]));
        tracep->fullWData(oldp+992,(__Vtemp1494),85);
        tracep->fullBit(oldp+995,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                   [9U][0U])));
        tracep->fullCData(oldp+996,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_2),4);
        tracep->fullCData(oldp+997,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
        tracep->fullBit(oldp+998,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+999,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+1000,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1001,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1002,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1003,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1004,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1005,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1006,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U])));
        tracep->fullBit(oldp+1007,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__hold_all_requests));
        tracep->fullBit(oldp+1008,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1009,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1010,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1011,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1012,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1013,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1014,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1015,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1016,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+1017,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1018,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1019,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1020,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1021,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1022,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1023,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1024,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1025,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+1026,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1027,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1028,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1029,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1030,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1031,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1032,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1033,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1034,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+1035,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1036,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1037,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1038,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1039,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1040,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1041,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1042,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1043,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+1044,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1045,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1046,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1047,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1048,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1049,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1050,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1051,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1052,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+1053,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1054,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1055,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1056,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1057,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1058,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1059,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1060,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1061,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+1062,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1063,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1064,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1065,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1066,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1067,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1068,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1069,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1070,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+1071,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1072,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1073,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1074,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1075,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1076,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1077,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1078,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1079,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+1080,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1081,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1082,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1083,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1084,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1085,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1086,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1087,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1088,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+1089,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1090,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1091,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1092,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1093,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1094,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1095,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1096,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1097,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+1098,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1099,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1100,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1101,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1102,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1103,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+1104,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1105,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+1106,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0xaU][0U])));
        tracep->fullBit(oldp+1107,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0xbU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1108,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1109,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1110,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1111,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xbU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1112,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xbU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xbU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+1113,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xbU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [0xbU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1114,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xbU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xbU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+1115,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0xbU][0U])));
        tracep->fullWData(oldp+1116,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
        tracep->fullBit(oldp+1119,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0xbU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1120,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1121,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1122,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1123,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xbU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1124,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xbU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xbU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+1125,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xbU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [0xbU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1126,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xbU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xbU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+1127,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0xbU][0U])));
        tracep->fullBit(oldp+1128,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1129,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1130,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1131,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1132,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1133,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1134,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1135,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1136,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+1137,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        __Vtemp1627[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [0U][0U]);
        __Vtemp1627[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [0U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][1U]));
        __Vtemp1627[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][2U]));
        tracep->fullWData(oldp+1138,(__Vtemp1627),85);
        tracep->fullBit(oldp+1141,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+1142,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1143,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1144,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1145,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1146,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1147,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1148,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1149,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1150,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+1151,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        __Vtemp1643[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [1U][0U]);
        __Vtemp1643[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [1U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][1U]));
        __Vtemp1643[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][2U]));
        tracep->fullWData(oldp+1152,(__Vtemp1643),85);
        tracep->fullBit(oldp+1155,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+1156,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1157,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1158,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1159,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1160,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1161,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1162,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1163,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1164,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+1165,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        __Vtemp1659[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [2U][0U]);
        __Vtemp1659[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [2U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][1U]));
        __Vtemp1659[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][2U]));
        tracep->fullWData(oldp+1166,(__Vtemp1659),85);
        tracep->fullBit(oldp+1169,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+1170,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1171,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1172,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1173,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1174,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1175,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1176,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1177,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1178,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+1179,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        __Vtemp1675[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [3U][0U]);
        __Vtemp1675[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [3U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][1U]));
        __Vtemp1675[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][2U]));
        tracep->fullWData(oldp+1180,(__Vtemp1675),85);
        tracep->fullBit(oldp+1183,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+1184,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1185,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1186,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1187,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1188,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1189,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1190,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1191,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1192,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+1193,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        __Vtemp1691[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [4U][0U]);
        __Vtemp1691[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [4U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][1U]));
        __Vtemp1691[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][2U]));
        tracep->fullWData(oldp+1194,(__Vtemp1691),85);
        tracep->fullBit(oldp+1197,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+1198,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1199,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1200,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1201,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1202,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1203,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1204,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1205,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1206,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+1207,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        __Vtemp1707[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [5U][0U]);
        __Vtemp1707[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [5U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][1U]));
        __Vtemp1707[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][2U]));
        tracep->fullWData(oldp+1208,(__Vtemp1707),85);
        tracep->fullBit(oldp+1211,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+1212,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1213,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1214,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1215,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1216,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1217,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1218,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1219,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1220,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+1221,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        __Vtemp1723[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [6U][0U]);
        __Vtemp1723[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [6U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][1U]));
        __Vtemp1723[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][2U]));
        tracep->fullWData(oldp+1222,(__Vtemp1723),85);
        tracep->fullBit(oldp+1225,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+1226,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1227,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1228,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1229,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1230,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1231,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1232,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1233,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1234,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+1235,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        __Vtemp1739[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [7U][0U]);
        __Vtemp1739[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [7U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][1U]));
        __Vtemp1739[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][2U]));
        tracep->fullWData(oldp+1236,(__Vtemp1739),85);
        tracep->fullBit(oldp+1239,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+1240,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1241,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1242,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1243,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1244,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1245,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1246,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1247,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1248,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+1249,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        __Vtemp1755[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [8U][0U]);
        __Vtemp1755[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [8U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][1U]));
        __Vtemp1755[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][2U]));
        tracep->fullWData(oldp+1250,(__Vtemp1755),85);
        tracep->fullBit(oldp+1253,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+1254,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1255,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1256,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1257,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1258,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1259,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1260,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1261,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1262,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+1263,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        __Vtemp1771[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [9U][0U]);
        __Vtemp1771[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [9U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][1U]));
        __Vtemp1771[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [9U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][2U]));
        tracep->fullWData(oldp+1264,(__Vtemp1771),85);
        tracep->fullBit(oldp+1267,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+1268,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1269,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1270,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1271,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1272,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1273,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+1274,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1275,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+1276,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0xaU][0U])));
        tracep->fullBit(oldp+1277,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        __Vtemp1787[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [0xaU][0U]);
        __Vtemp1787[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [0xaU][1U]) | (0xfffffffeU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                           [0xaU][1U]));
        __Vtemp1787[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [0xaU][2U]) | (0x1ffffeU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                           [0xaU][2U]));
        tracep->fullWData(oldp+1278,(__Vtemp1787),85);
        tracep->fullBit(oldp+1281,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0xaU][0U])));
        tracep->fullBit(oldp+1282,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1283,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1284,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1285,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1286,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1287,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1288,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1289,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1290,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1291,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1292,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1293,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1294,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1295,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1296,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1297,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1298,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1299,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1300,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1301,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1302,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1303,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1304,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1305,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1306,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1307,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1308,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1309,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1310,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1311,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1312,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1313,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1314,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1315,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1316,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1317,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1318,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1319,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1320,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1321,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1322,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1323,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1324,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1325,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1326,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1327,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1328,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1329,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1330,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1331,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1332,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1333,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1334,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1335,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1336,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1337,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1338,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1339,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1340,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1341,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1342,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1343,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1344,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1345,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1346,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1347,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1348,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1349,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1350,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1351,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1352,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1353,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1354,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1355,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1356,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1357,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1358,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1359,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1360,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1361,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1362,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1363,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1364,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1365,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1366,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1367,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1368,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1369,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1370,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1371,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullCData(oldp+1372,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1373,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+1374,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1375,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1376,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+1377,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1378,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1379,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+1380,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1381,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1382,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+1383,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1384,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1385,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+1386,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1387,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1388,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+1389,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1390,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1391,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+1392,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1393,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1394,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+1395,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1396,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1397,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+1398,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1399,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1400,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+1401,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1402,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1403,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+1404,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1405,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1406,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+1407,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1408,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1409,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+1410,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1411,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1412,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+1413,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1414,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1415,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+1416,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1417,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1418,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+1419,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1420,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1421,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1422,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1423,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1424,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1425,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1426,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1427,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1428,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+1429,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+1430,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+1431,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+1432,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+1433,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+1434,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+1435,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+1436,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+1437,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+1438,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+1439,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+1440,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+1441,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+1442,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+1443,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+1444,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+1445,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+1446,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+1447,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+1448,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+1449,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+1450,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+1451,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+1452,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+1453,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+1454,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+1455,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+1456,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+1457,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+1458,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+1459,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullBit(oldp+1460,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1461,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1462,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1463,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1464,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1465,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1466,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1467,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1468,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullBit(oldp+1469,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1470,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1471,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1472,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1473,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1474,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1475,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1476,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1477,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullIData(oldp+1478,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_gpio),32);
        tracep->fullIData(oldp+1479,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding),17);
        tracep->fullCData(oldp+1480,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__dev_select_outstanding),2);
        tracep->fullBit(oldp+1481,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1482,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1483,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1484,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1485,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1486,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1487,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1488,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1489,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0U]))));
        tracep->fullBit(oldp+1490,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1491,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1492,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1493,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1494,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1495,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1496,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1497,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1498,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [1U]))));
        tracep->fullBit(oldp+1499,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1500,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1501,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1502,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1503,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1504,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1505,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1506,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1507,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [2U]))));
        tracep->fullBit(oldp+1508,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1509,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1510,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1511,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1512,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1513,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1514,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1515,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1516,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [3U]))));
        tracep->fullBit(oldp+1517,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1518,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1519,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1520,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1521,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1522,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1523,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1524,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1525,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [4U]))));
        tracep->fullBit(oldp+1526,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1527,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1528,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1529,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1530,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1531,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1532,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1533,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1534,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [5U]))));
        tracep->fullBit(oldp+1535,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1536,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1537,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1538,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1539,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1540,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1541,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1542,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1543,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [6U]))));
        tracep->fullBit(oldp+1544,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1545,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1546,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1547,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1548,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1549,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1550,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1551,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1552,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [7U]))));
        tracep->fullBit(oldp+1553,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1554,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1555,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1556,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1557,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1558,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1559,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1560,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1561,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [8U]))));
        tracep->fullBit(oldp+1562,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1563,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1564,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1565,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1566,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1567,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1568,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1569,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1570,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [9U]))));
        tracep->fullBit(oldp+1571,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1572,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1573,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1574,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1575,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1576,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1577,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1578,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1579,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0xaU]))));
        tracep->fullBit(oldp+1580,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1581,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1582,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1583,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1584,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1585,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1586,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1587,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1588,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0xbU]))));
        tracep->fullBit(oldp+1589,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1590,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1591,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1592,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1593,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1594,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1595,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1596,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1597,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0xcU]))));
        tracep->fullBit(oldp+1598,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1599,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1600,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1601,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1602,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1603,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1604,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1605,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1606,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+1607,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1608,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1609,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1610,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1611,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1612,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1613,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1614,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1615,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+1616,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1617,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1618,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1619,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1620,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1621,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1622,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1623,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1624,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+1625,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1626,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1627,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1628,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1629,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1630,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1631,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1632,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1633,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+1634,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1635,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1636,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1637,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1638,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1639,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1640,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1641,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1642,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+1643,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1644,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1645,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1646,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1647,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1648,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1649,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1650,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1651,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+1652,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1653,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1654,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1655,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1656,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1657,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1658,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1659,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1660,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+1661,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1662,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1663,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1664,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1665,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1666,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1667,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1668,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1669,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+1670,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1671,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1672,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1673,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1674,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1675,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1676,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1677,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1678,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+1679,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1680,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1681,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1682,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1683,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1684,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1685,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1686,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1687,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+1688,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1689,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1690,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1691,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1692,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1693,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1694,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1695,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1696,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+1697,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1698,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1699,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1700,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1701,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1702,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1703,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1704,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1705,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+1706,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1707,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1708,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1709,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1710,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1711,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1712,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1713,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1714,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xcU]))));
        tracep->fullIData(oldp+1715,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q),32);
        tracep->fullIData(oldp+1716,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q),32);
        tracep->fullIData(oldp+1717,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q),32);
        tracep->fullIData(oldp+1718,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q),32);
        tracep->fullIData(oldp+1719,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q),32);
        tracep->fullIData(oldp+1720,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q),32);
        tracep->fullIData(oldp+1721,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q),32);
        tracep->fullBit(oldp+1722,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
        tracep->fullIData(oldp+1723,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
        tracep->fullBit(oldp+1724,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__error));
        tracep->fullCData(oldp+1725,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
        tracep->fullCData(oldp+1726,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
        tracep->fullCData(oldp+1727,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
        tracep->fullBit(oldp+1728,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1729,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1730,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1731,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1732,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1733,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1734,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullIData(oldp+1735,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ip),32);
        tracep->fullIData(oldp+1736,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__src_q),32);
        tracep->fullBit(oldp+1737,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q));
        tracep->fullBit(oldp+1738,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q));
        tracep->fullBit(oldp+1739,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q));
        tracep->fullBit(oldp+1740,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q));
        tracep->fullCData(oldp+1741,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q),3);
        tracep->fullCData(oldp+1742,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q),3);
        tracep->fullCData(oldp+1743,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q),3);
        tracep->fullCData(oldp+1744,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q),3);
        tracep->fullCData(oldp+1745,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q),3);
        tracep->fullCData(oldp+1746,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q),3);
        tracep->fullCData(oldp+1747,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q),3);
        tracep->fullCData(oldp+1748,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q),3);
        tracep->fullCData(oldp+1749,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q),3);
        tracep->fullCData(oldp+1750,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q),3);
        tracep->fullCData(oldp+1751,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q),3);
        tracep->fullCData(oldp+1752,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q),3);
        tracep->fullCData(oldp+1753,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q),3);
        tracep->fullCData(oldp+1754,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q),3);
        tracep->fullCData(oldp+1755,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q),3);
        tracep->fullCData(oldp+1756,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q),3);
        tracep->fullBit(oldp+1757,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
        tracep->fullIData(oldp+1758,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
        tracep->fullBit(oldp+1759,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error));
        tracep->fullCData(oldp+1760,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
        tracep->fullCData(oldp+1761,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
        tracep->fullCData(oldp+1762,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
        tracep->fullCData(oldp+1763,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q),6);
        tracep->fullBit(oldp+1764,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1765,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1766,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1767,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1768,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1769,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1770,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1771,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1772,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+1773,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+1774,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+1775,((0x7fU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                       >> 0x24U)))),8);
        tracep->fullBit(oldp+1776,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullBit(oldp+1777,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+1778,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullCData(oldp+1780,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+1781,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullBit(oldp+1782,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1783,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1784,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1785,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1786,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1787,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1788,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1789,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1790,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+1791,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1792,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1793,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1794,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1795,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1796,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1797,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1798,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1799,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+1800,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+1801,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+1802,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+1804,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1805,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1806,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1807,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1808,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1809,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1810,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1811,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1812,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+1813,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1814,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1815,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1816,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1817,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1818,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1819,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1820,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1821,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+1822,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+1823,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+1824,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+1826,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1827,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1828,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1829,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1830,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1831,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1832,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1833,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1834,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+1835,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1836,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1837,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1838,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1839,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1840,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1841,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1842,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1843,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+1844,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+1845,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+1846,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [2U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [2U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+1848,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1849,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1850,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1851,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1852,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1853,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1854,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1855,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1856,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+1857,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1858,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1859,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1860,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1861,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1862,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1863,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1864,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1865,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+1866,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+1867,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+1868,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [3U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [3U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+1870,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1871,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1872,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1873,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1874,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1875,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1876,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1877,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1878,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+1879,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1880,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1881,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1882,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1883,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1884,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1885,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1886,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1887,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+1888,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+1889,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+1890,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [4U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [4U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+1892,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1893,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1894,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1895,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1896,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1897,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1898,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1899,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1900,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+1901,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1902,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1903,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1904,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1905,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1906,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1907,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1908,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1909,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+1910,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+1911,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+1912,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [5U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [5U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+1914,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1915,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1916,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1917,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1918,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1919,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1920,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1921,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1922,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+1923,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1924,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1925,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1926,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1927,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1928,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1929,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1930,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1931,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+1932,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+1933,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+1934,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [6U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [6U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+1936,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1937,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1938,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1939,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1940,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1941,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1942,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1943,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1944,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+1945,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1946,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1947,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1948,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1949,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1950,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1951,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1952,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1953,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+1954,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+1955,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+1956,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [7U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [7U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+1958,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1959,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1960,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1961,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1962,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1963,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1964,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1965,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1966,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+1967,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1968,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1969,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1970,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1971,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1972,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1973,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1974,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1975,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+1976,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+1977,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+1978,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [8U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [8U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+1980,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1981,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1982,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1983,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1984,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1985,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1986,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1987,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1988,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+1989,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1990,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1991,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1992,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1993,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1994,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1995,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1996,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1997,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+1998,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+1999,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+2000,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [9U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [9U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+2002,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2003,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2004,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2005,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2006,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2007,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2008,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2009,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2010,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+2011,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2012,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2013,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2014,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2015,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2016,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2017,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2018,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2019,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+2020,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+2021,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+2022,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0xaU] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [0xaU] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+2024,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2025,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2026,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2027,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2028,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2029,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2030,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2031,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2032,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+2033,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2034,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2035,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2036,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2037,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2038,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2039,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2040,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2041,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+2042,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+2043,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+2044,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0xbU] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [0xbU] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+2046,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2047,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2048,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2049,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2050,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2051,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2052,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2053,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2054,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+2055,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2056,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2057,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2058,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2059,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2060,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2061,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2062,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2063,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xcU]))));
        tracep->fullBit(oldp+2064,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xcU]))));
        tracep->fullBit(oldp+2065,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+2066,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0xcU] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [0xcU] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+2068,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2069,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2070,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2071,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2072,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2073,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2074,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2075,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2076,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0U]))));
        tracep->fullBit(oldp+2077,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2078,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2079,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2080,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2081,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2082,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2083,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2084,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2085,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [1U]))));
        tracep->fullBit(oldp+2086,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2087,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2088,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2089,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2090,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2091,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2092,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2093,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2094,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [2U]))));
        tracep->fullBit(oldp+2095,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2096,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2097,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2098,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2099,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2100,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2101,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2102,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2103,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [3U]))));
        tracep->fullBit(oldp+2104,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2105,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2106,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2107,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2108,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2109,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2110,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2111,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2112,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [4U]))));
        tracep->fullBit(oldp+2113,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2114,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2115,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2116,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2117,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2118,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2119,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2120,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2121,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [5U]))));
        tracep->fullBit(oldp+2122,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2123,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2124,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2125,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2126,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2127,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2128,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2129,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2130,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [6U]))));
        tracep->fullBit(oldp+2131,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2132,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2133,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2134,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2135,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2136,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2137,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2138,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2139,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [7U]))));
        tracep->fullBit(oldp+2140,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2141,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2142,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2143,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2144,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2145,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2146,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2147,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2148,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [8U]))));
        tracep->fullBit(oldp+2149,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2150,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2151,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2152,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2153,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2154,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2155,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2156,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2157,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [9U]))));
        tracep->fullBit(oldp+2158,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2159,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2160,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2161,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2162,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2163,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2164,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2165,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2166,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+2167,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2168,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2169,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2170,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2171,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2172,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2173,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2174,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2175,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+2176,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2177,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2178,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2179,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2180,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2181,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2182,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2183,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2184,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0xcU]))));
        tracep->fullBit(oldp+2185,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xdU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2186,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2187,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2188,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2189,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [0xdU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2190,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xdU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2191,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [0xdU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2192,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xdU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2193,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0xdU]))));
        tracep->fullCData(oldp+2194,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__irq_id_o[0]),5);
        tracep->fullBit(oldp+2195,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 7U))));
        tracep->fullBit(oldp+2196,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 6U))));
        tracep->fullBit(oldp+2197,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 9U))));
        tracep->fullBit(oldp+2198,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 8U))));
        tracep->fullBit(oldp+2199,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xbU))));
        tracep->fullBit(oldp+2200,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+2201,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+2202,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+2203,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+2204,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+2205,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+2206,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+2207,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+2208,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+2209,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+2210,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+2211,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+2212,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+2213,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+2214,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+2215,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+2216,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+2217,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+2218,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+2219,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+2220,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+2221,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 1U))));
        tracep->fullBit(oldp+2222,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U])));
        tracep->fullBit(oldp+2223,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 3U))));
        tracep->fullBit(oldp+2224,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 2U))));
        tracep->fullBit(oldp+2225,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 5U))));
        tracep->fullBit(oldp+2226,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 4U))));
        tracep->fullBit(oldp+2227,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 7U))));
        tracep->fullBit(oldp+2228,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 6U))));
        tracep->fullBit(oldp+2229,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 9U))));
        tracep->fullBit(oldp+2230,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 8U))));
        tracep->fullBit(oldp+2231,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xbU))));
        tracep->fullBit(oldp+2232,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+2233,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+2234,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+2235,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+2236,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+2237,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+2238,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+2239,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+2240,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+2241,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+2242,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+2243,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+2244,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+2245,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+2246,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+2247,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+2248,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+2249,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+2250,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+2251,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+2252,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+2253,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 1U))));
        tracep->fullBit(oldp+2254,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U])));
        tracep->fullBit(oldp+2255,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 3U))));
        tracep->fullBit(oldp+2256,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 2U))));
        tracep->fullBit(oldp+2257,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 5U))));
        tracep->fullBit(oldp+2258,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 4U))));
        tracep->fullCData(oldp+2259,((0x3fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U])),6);
        tracep->fullCData(oldp+2260,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__claim_id[0]),5);
        tracep->fullCData(oldp+2261,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__cc_id[0]),5);
        tracep->fullBit(oldp+2262,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q));
        tracep->fullBit(oldp+2263,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q));
        tracep->fullBit(oldp+2264,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q));
        tracep->fullBit(oldp+2265,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q));
        tracep->fullBit(oldp+2266,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q));
        tracep->fullBit(oldp+2267,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q));
        tracep->fullBit(oldp+2268,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q));
        tracep->fullBit(oldp+2269,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q));
        tracep->fullBit(oldp+2270,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q));
        tracep->fullBit(oldp+2271,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q));
        tracep->fullBit(oldp+2272,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q));
        tracep->fullBit(oldp+2273,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q));
        tracep->fullBit(oldp+2274,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q));
        tracep->fullBit(oldp+2275,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q));
        tracep->fullBit(oldp+2276,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q));
        tracep->fullBit(oldp+2277,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q));
        tracep->fullBit(oldp+2278,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q));
        tracep->fullBit(oldp+2279,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q));
        tracep->fullBit(oldp+2280,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q));
        tracep->fullBit(oldp+2281,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q));
        tracep->fullBit(oldp+2282,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q));
        tracep->fullBit(oldp+2283,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q));
        tracep->fullBit(oldp+2284,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q));
        tracep->fullBit(oldp+2285,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q));
        tracep->fullBit(oldp+2286,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q));
        tracep->fullBit(oldp+2287,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q));
        tracep->fullBit(oldp+2288,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q));
        tracep->fullBit(oldp+2289,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q));
        tracep->fullCData(oldp+2290,((0x3fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U])),6);
        tracep->fullCData(oldp+2291,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+2292,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullBit(oldp+2293,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q));
        tracep->fullBit(oldp+2294,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q));
        tracep->fullBit(oldp+2295,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q));
        tracep->fullBit(oldp+2296,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q));
        tracep->fullBit(oldp+2297,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q));
        tracep->fullBit(oldp+2298,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q));
        tracep->fullBit(oldp+2299,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q));
        tracep->fullBit(oldp+2300,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q));
        tracep->fullBit(oldp+2301,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q));
        tracep->fullBit(oldp+2302,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q));
        tracep->fullBit(oldp+2303,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q));
        tracep->fullBit(oldp+2304,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q));
        tracep->fullBit(oldp+2305,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q));
        tracep->fullBit(oldp+2306,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q));
        tracep->fullBit(oldp+2307,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q));
        tracep->fullBit(oldp+2308,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q));
        tracep->fullBit(oldp+2309,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q));
        tracep->fullBit(oldp+2310,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q));
        tracep->fullBit(oldp+2311,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q));
        tracep->fullBit(oldp+2312,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q));
        tracep->fullBit(oldp+2313,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q));
        tracep->fullBit(oldp+2314,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q));
        tracep->fullBit(oldp+2315,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q));
        tracep->fullBit(oldp+2316,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q));
        tracep->fullBit(oldp+2317,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q));
        tracep->fullCData(oldp+2318,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q),3);
        tracep->fullCData(oldp+2319,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q),3);
        tracep->fullCData(oldp+2320,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q),3);
        tracep->fullCData(oldp+2321,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q),3);
        tracep->fullCData(oldp+2322,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q),3);
        tracep->fullCData(oldp+2323,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q),3);
        tracep->fullCData(oldp+2324,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q),3);
        tracep->fullCData(oldp+2325,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q),3);
        tracep->fullCData(oldp+2326,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q),3);
        tracep->fullCData(oldp+2327,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q),3);
        tracep->fullCData(oldp+2328,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q),3);
        tracep->fullCData(oldp+2329,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q),3);
        tracep->fullCData(oldp+2330,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q),3);
        tracep->fullCData(oldp+2331,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q),3);
        tracep->fullCData(oldp+2332,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q),3);
        tracep->fullBit(oldp+2333,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q));
        tracep->fullBit(oldp+2334,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q));
        tracep->fullBit(oldp+2335,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q));
        tracep->fullBit(oldp+2336,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q));
        tracep->fullBit(oldp+2337,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q));
        tracep->fullBit(oldp+2338,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q));
        tracep->fullBit(oldp+2339,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q));
        tracep->fullBit(oldp+2340,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q));
        tracep->fullCData(oldp+2341,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding),4);
        tracep->fullBit(oldp+2342,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q));
        tracep->fullBit(oldp+2343,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q));
        tracep->fullBit(oldp+2344,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q));
        tracep->fullBit(oldp+2345,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q));
        tracep->fullBit(oldp+2346,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q));
        tracep->fullBit(oldp+2347,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q));
        tracep->fullBit(oldp+2348,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q));
        tracep->fullBit(oldp+2349,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q));
        tracep->fullBit(oldp+2350,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q));
        tracep->fullBit(oldp+2351,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q));
        tracep->fullBit(oldp+2352,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q));
        tracep->fullBit(oldp+2353,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q));
        tracep->fullBit(oldp+2354,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q));
        tracep->fullBit(oldp+2355,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q));
        tracep->fullBit(oldp+2356,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q));
        tracep->fullBit(oldp+2357,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q));
        tracep->fullBit(oldp+2358,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q));
        tracep->fullBit(oldp+2359,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q));
        tracep->fullBit(oldp+2360,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q));
        tracep->fullBit(oldp+2361,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q));
        tracep->fullBit(oldp+2362,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q));
        tracep->fullBit(oldp+2363,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q));
        tracep->fullBit(oldp+2364,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q));
        tracep->fullBit(oldp+2365,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q));
        tracep->fullBit(oldp+2366,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q));
        tracep->fullBit(oldp+2367,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q));
        tracep->fullBit(oldp+2368,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q));
        tracep->fullBit(oldp+2369,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q));
        tracep->fullBit(oldp+2370,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q));
        tracep->fullBit(oldp+2371,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q));
        tracep->fullBit(oldp+2372,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q));
        tracep->fullBit(oldp+2373,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__q));
        tracep->fullCData(oldp+2374,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullBit(oldp+2375,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2376,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2377,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2378,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2379,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2380,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2381,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2382,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2383,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                 [0U]))));
        tracep->fullBit(oldp+2384,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2385,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2386,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2387,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2388,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2389,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2390,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2391,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2392,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                 [1U]))));
        tracep->fullBit(oldp+2393,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2394,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2395,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2396,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2397,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2398,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2399,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2400,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2401,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+2402,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2403,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2404,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2405,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2406,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2407,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2408,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2409,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2410,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+2411,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2412,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2413,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2414,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2415,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2416,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2417,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2418,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2419,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+2420,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2421,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2422,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2423,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2424,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2425,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2426,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2427,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2428,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+2429,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hgrant),2);
        tracep->fullCData(oldp+2430,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+2431,((2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+2432,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+2433,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2434,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2435,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2436,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2437,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2438,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2439,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2440,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2441,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+2442,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2443,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2444,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2445,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2446,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2447,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2448,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2449,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2450,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+2451,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+2452,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+2453,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                     [0U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+2455,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2456,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2457,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2458,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2459,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2460,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2461,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2462,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2463,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+2464,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2465,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2466,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2467,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2468,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2469,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2470,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2471,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2472,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+2473,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+2474,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+2475,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                     [1U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+2477,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2478,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2479,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2480,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2481,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2482,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2483,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2484,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2485,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [0U][0U])));
        tracep->fullBit(oldp+2486,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2487,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2488,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2489,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2490,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2491,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2492,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2493,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2494,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [1U][0U])));
        tracep->fullBit(oldp+2495,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2496,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2497,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2498,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2499,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2500,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2501,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2502,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2503,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [2U][0U])));
        tracep->fullBit(oldp+2504,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2505,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2506,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2507,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2508,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2509,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2510,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2511,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2512,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [3U][0U])));
        tracep->fullBit(oldp+2513,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2514,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2515,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2516,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2517,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2518,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2519,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2520,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2521,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [4U][0U])));
        tracep->fullBit(oldp+2522,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2523,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2524,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2525,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2526,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2527,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2528,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2529,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2530,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [5U][0U])));
        tracep->fullBit(oldp+2531,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2532,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2533,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2534,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2535,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2536,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2537,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2538,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2539,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [6U][0U])));
        tracep->fullBit(oldp+2540,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2541,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2542,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2543,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2544,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2545,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2546,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2547,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2548,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [7U][0U])));
        tracep->fullBit(oldp+2549,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2550,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2551,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2552,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2553,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2554,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2555,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2556,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2557,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [8U][0U])));
        tracep->fullBit(oldp+2558,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2559,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2560,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2561,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2562,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2563,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2564,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2565,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2566,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [9U][0U])));
        tracep->fullBit(oldp+2567,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2568,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2569,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2570,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2571,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2572,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2573,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2574,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2575,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [0U][0U])));
        tracep->fullBit(oldp+2576,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2577,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2578,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2579,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2580,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2581,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2582,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2583,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2584,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [1U][0U])));
        tracep->fullBit(oldp+2585,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2586,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2587,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2588,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2589,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2590,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2591,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2592,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2593,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [2U][0U])));
        tracep->fullBit(oldp+2594,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2595,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2596,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2597,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2598,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2599,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2600,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2601,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2602,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [3U][0U])));
        tracep->fullBit(oldp+2603,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2604,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2605,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2606,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2607,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2608,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2609,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2610,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2611,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [4U][0U])));
        tracep->fullBit(oldp+2612,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2613,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2614,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2615,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2616,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2617,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2618,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2619,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2620,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [5U][0U])));
        tracep->fullBit(oldp+2621,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2622,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2623,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2624,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2625,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2626,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2627,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2628,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2629,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [6U][0U])));
        tracep->fullBit(oldp+2630,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2631,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2632,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2633,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2634,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2635,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2636,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2637,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2638,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [7U][0U])));
        tracep->fullBit(oldp+2639,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2640,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2641,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2642,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2643,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2644,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2645,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2646,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2647,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [8U][0U])));
        tracep->fullBit(oldp+2648,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2649,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2650,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2651,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2652,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2653,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2654,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2655,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2656,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [9U][0U])));
        tracep->fullBit(oldp+2657,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2658,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2659,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2660,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2661,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2662,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+2663,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2664,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+2665,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [0xaU][0U])));
        tracep->fullBit(oldp+2666,(vlTOPp->Azadi_top_verilator__DOT__cio_jtag_tck));
        tracep->fullBit(oldp+2667,(vlTOPp->Azadi_top_verilator__DOT__cio_jtag_tdi));
        tracep->fullBit(oldp+2668,(vlTOPp->Azadi_top_verilator__DOT__cio_jtag_tms));
        tracep->fullBit(oldp+2669,(vlTOPp->Azadi_top_verilator__DOT__cio_jtag_trst_n));
        tracep->fullBit(oldp+2670,(vlTOPp->Azadi_top_verilator__DOT__cio_jtag_srst_n));
        tracep->fullCData(oldp+2671,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),3);
        tracep->fullCData(oldp+2672,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),3);
        tracep->fullCData(oldp+2673,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+2674,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+2675,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+2676,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+2677,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+2678,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+2679,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+2680,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+2681,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullIData(oldp+2682,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum0),32);
        tracep->fullIData(oldp+2683,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum1),32);
        tracep->fullIData(oldp+2684,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum2),32);
        tracep->fullIData(oldp+2685,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum3),32);
        tracep->fullIData(oldp+2686,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted),32);
        tracep->fullIData(oldp+2687,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0),32);
        tracep->fullIData(oldp+2688,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1),32);
        tracep->fullIData(oldp+2689,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped2),32);
        tracep->fullIData(oldp+2690,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1),32);
        tracep->fullIData(oldp+2691,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2),32);
        tracep->fullIData(oldp+2692,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat3),32);
        tracep->fullSData(oldp+2693,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0),15);
        tracep->fullSData(oldp+2694,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1),10);
        tracep->fullCData(oldp+2695,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2),5);
        tracep->fullBit(oldp+2696,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2697,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2698,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2699,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2700,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2701,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2702,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2703,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2704,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                 [0U]))));
        tracep->fullBit(oldp+2705,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2706,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2707,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2708,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2709,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2710,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2711,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2712,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2713,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                 [1U]))));
        tracep->fullBit(oldp+2714,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2715,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2716,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2717,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2718,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2719,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2720,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2721,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2722,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                 [2U]))));
        tracep->fullCData(oldp+2723,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o),2);
        tracep->fullCData(oldp+2724,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),3);
        tracep->fullCData(oldp+2725,((6U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),3);
        tracep->fullCData(oldp+2726,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),3);
        tracep->fullIData(oldp+2727,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i),32);
        tracep->fullBit(oldp+2728,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2729,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2730,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2731,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2732,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2733,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2734,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2735,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2736,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+2737,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2738,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2739,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2740,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2741,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2742,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2743,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2744,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2745,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+2746,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2747,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2748,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2749,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2750,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2751,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2752,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2753,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2754,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                 [2U]))));
        tracep->fullBit(oldp+2755,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2756,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2757,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2758,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2759,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2760,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2761,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2762,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2763,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+2764,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2765,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2766,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2767,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2768,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2769,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2770,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2771,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2772,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+2773,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2774,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2775,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2776,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2777,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2778,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2779,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2780,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2781,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [2U]))));
        tracep->fullCData(oldp+2782,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hgrant),3);
        tracep->fullCData(oldp+2783,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o),2);
        tracep->fullCData(oldp+2784,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),3);
        tracep->fullCData(oldp+2785,((6U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),3);
        tracep->fullCData(oldp+2786,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),3);
        tracep->fullIData(oldp+2787,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i),32);
        tracep->fullBit(oldp+2788,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2789,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2790,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2791,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2792,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2793,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2794,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2795,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2796,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+2797,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2798,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2799,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2800,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2801,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2802,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2803,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2804,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2805,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+2806,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+2807,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+2808,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+2810,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2811,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2812,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2813,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2814,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2815,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2816,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2817,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2818,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+2819,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2820,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2821,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2822,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2823,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2824,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2825,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2826,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2827,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+2828,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+2829,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+2830,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+2832,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2833,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2834,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2835,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2836,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2837,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2838,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2839,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2840,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+2841,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2842,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2843,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2844,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2845,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2846,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2847,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2848,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2849,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [2U]))));
        tracep->fullBit(oldp+2850,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [2U]))));
        tracep->fullBit(oldp+2851,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+2852,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                   [2U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                              [2U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+2854,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2855,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2856,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2857,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2858,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2859,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2860,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2861,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2862,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [0U]))));
        tracep->fullBit(oldp+2863,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2864,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2865,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2866,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2867,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2868,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2869,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2870,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2871,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [1U]))));
        tracep->fullBit(oldp+2872,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2873,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2874,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2875,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2876,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2877,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2878,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2879,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2880,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [2U]))));
        tracep->fullBit(oldp+2881,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2882,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2883,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2884,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2885,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2886,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2887,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2888,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2889,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [3U]))));
        tracep->fullBit(oldp+2890,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2891,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2892,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2893,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2894,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2895,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2896,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2897,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2898,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [4U]))));
        tracep->fullBit(oldp+2899,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2900,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2901,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2902,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2903,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2904,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2905,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2906,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2907,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [5U]))));
        tracep->fullBit(oldp+2908,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2909,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2910,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2911,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2912,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2913,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2914,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2915,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2916,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [6U]))));
        tracep->fullBit(oldp+2917,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2918,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2919,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2920,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2921,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2922,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2923,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2924,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2925,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [7U]))));
        tracep->fullBit(oldp+2926,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2927,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2928,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2929,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2930,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2931,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2932,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2933,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2934,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [8U]))));
        tracep->fullBit(oldp+2935,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2936,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2937,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2938,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2939,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2940,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2941,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2942,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2943,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [9U]))));
        tracep->fullBit(oldp+2944,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2945,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2946,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2947,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2948,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2949,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2950,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2951,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2952,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [0xaU]))));
        tracep->fullBit(oldp+2953,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__instr_valid));
        tracep->fullIData(oldp+2954,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data),32);
        tracep->fullCData(oldp+2955,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_q),8);
        tracep->fullBit(oldp+2956,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_q));
        tracep->fullIData(oldp+2957,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage)),32);
        tracep->fullIData(oldp+2958,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                              >> 0x20U))),32);
        tracep->fullCData(oldp+2959,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q),5);
        tracep->fullSData(oldp+2960,((0x1fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage)),13);
        tracep->fullSData(oldp+2961,((0x1fffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0xdU))),13);
        tracep->fullCData(oldp+2962,((0x1fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage))),5);
        tracep->fullCData(oldp+2963,((0x1fU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                               >> 5U))),5);
        tracep->fullQData(oldp+2964,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
        tracep->fullQData(oldp+2966,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                          << 0x1fU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                            >> 1U)))),33);
        tracep->fullBit(oldp+2968,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req) 
                                          >> 3U))));
        tracep->fullBit(oldp+2969,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req) 
                                          >> 2U))));
        tracep->fullBit(oldp+2970,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req) 
                                          >> 1U))));
        tracep->fullBit(oldp+2971,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req))));
        tracep->fullBit(oldp+2972,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q));
        tracep->fullBit(oldp+2973,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q));
        tracep->fullBit(oldp+2974,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__rvalid));
        tracep->fullBit(oldp+2975,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q));
        tracep->fullCData(oldp+2976,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q),2);
        tracep->fullCData(oldp+2977,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q),2);
        tracep->fullCData(oldp+2978,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q),2);
        tracep->fullCData(oldp+2979,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+2980,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+2981,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+2982,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+2983,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+2984,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+2985,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q),2);
        tracep->fullBit(oldp+2986,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req) 
                                          >> 2U))));
        tracep->fullBit(oldp+2987,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req))));
        tracep->fullCData(oldp+2988,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync),3);
        tracep->fullCData(oldp+2989,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullBit(oldp+2990,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+2991,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+2992,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmdbusy));
        tracep->fullBit(oldp+2993,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+2994,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullCData(oldp+2995,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi),3);
        tracep->fullBit(oldp+2996,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                          >> 2U))));
        tracep->fullCData(oldp+2997,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi))),2);
        tracep->fullCData(oldp+2998,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync),3);
        tracep->fullBit(oldp+2999,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync) 
                                          >> 2U))));
        tracep->fullCData(oldp+3000,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync))),2);
        tracep->fullCData(oldp+3001,((0xfU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                              >> 1U))),4);
        tracep->fullBit(oldp+3002,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
        tracep->fullCData(oldp+3003,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        tracep->fullQData(oldp+3004,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[0]),41);
        tracep->fullQData(oldp+3006,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[1]),41);
        tracep->fullQData(oldp+3008,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[2]),41);
        tracep->fullQData(oldp+3010,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[3]),41);
        tracep->fullCData(oldp+3012,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr),3);
        tracep->fullCData(oldp+3013,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray),3);
        tracep->fullBit(oldp+3014,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+3015,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr))),2);
        tracep->fullCData(oldp+3016,((0x7fU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                       >> 0x22U)))),7);
        tracep->fullCData(oldp+3017,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                    >> 0x20U)))),2);
        tracep->fullIData(oldp+3018,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o)),32);
        tracep->fullQData(oldp+3019,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o),41);
        tracep->fullBit(oldp+3021,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U])));
        tracep->fullBit(oldp+3022,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+3023,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+3024,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+3025,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+3026,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+3027,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+3028,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+3029,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+3030,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+3031,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+3032,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+3033,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+3034,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+3035,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+3036,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+3037,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+3038,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+3039,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+3040,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+3041,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+3042,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U])));
        tracep->fullBit(oldp+3043,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 1U))));
        tracep->fullBit(oldp+3044,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 2U))));
        tracep->fullBit(oldp+3045,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 3U))));
        tracep->fullBit(oldp+3046,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 4U))));
        tracep->fullBit(oldp+3047,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 5U))));
        tracep->fullBit(oldp+3048,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 6U))));
        tracep->fullBit(oldp+3049,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 7U))));
        tracep->fullBit(oldp+3050,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 8U))));
        tracep->fullBit(oldp+3051,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 9U))));
        tracep->fullBit(oldp+3052,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+3053,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 0xbU))));
        tracep->fullCData(oldp+3054,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                             << 0x17U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                               >> 9U)))),3);
        tracep->fullCData(oldp+3055,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                             << 0x1aU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                               >> 6U)))),3);
        tracep->fullCData(oldp+3056,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                             << 0x1dU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                               >> 3U)))),3);
        tracep->fullCData(oldp+3057,((7U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U])),3);
        tracep->fullCData(oldp+3058,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 3U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x1dU)))),3);
        tracep->fullCData(oldp+3059,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 6U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x1aU)))),3);
        tracep->fullCData(oldp+3060,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 9U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x17U)))),3);
        tracep->fullCData(oldp+3061,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0xcU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x14U)))),3);
        tracep->fullCData(oldp+3062,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0xfU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x11U)))),3);
        tracep->fullCData(oldp+3063,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x12U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0xeU)))),3);
        tracep->fullCData(oldp+3064,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x15U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0xbU)))),3);
        tracep->fullCData(oldp+3065,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x18U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 8U)))),3);
        tracep->fullCData(oldp+3066,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x1bU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 5U)))),3);
        tracep->fullCData(oldp+3067,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x1eU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 2U)))),3);
        tracep->fullCData(oldp+3068,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 1U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x1fU)))),3);
        tracep->fullCData(oldp+3069,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 4U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x1cU)))),3);
        tracep->fullCData(oldp+3070,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 7U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x19U)))),3);
        tracep->fullCData(oldp+3071,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0xaU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x16U)))),3);
        tracep->fullCData(oldp+3072,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0xdU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x13U)))),3);
        tracep->fullCData(oldp+3073,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x10U)))),3);
        tracep->fullCData(oldp+3074,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x13U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0xdU)))),3);
        tracep->fullCData(oldp+3075,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x16U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0xaU)))),3);
        tracep->fullCData(oldp+3076,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x19U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 7U)))),3);
        tracep->fullCData(oldp+3077,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x1cU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 4U)))),3);
        tracep->fullCData(oldp+3078,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x1fU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 1U)))),3);
        tracep->fullCData(oldp+3079,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 2U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x1eU)))),3);
        tracep->fullCData(oldp+3080,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 5U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x1bU)))),3);
        tracep->fullCData(oldp+3081,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 8U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x18U)))),3);
        tracep->fullCData(oldp+3082,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x15U)))),3);
        tracep->fullCData(oldp+3083,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0xeU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x12U)))),3);
        tracep->fullCData(oldp+3084,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0x11U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0xfU)))),3);
        tracep->fullCData(oldp+3085,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0x14U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0xcU)))),3);
        tracep->fullBit(oldp+3086,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+3087,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+3088,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+3089,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+3090,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+3091,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+3092,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+3093,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+3094,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+3095,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+3096,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+3097,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+3098,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+3099,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+3100,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+3101,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+3102,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+3103,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+3104,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+3105,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+3106,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U])));
        tracep->fullBit(oldp+3107,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 1U))));
        tracep->fullBit(oldp+3108,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 2U))));
        tracep->fullBit(oldp+3109,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 3U))));
        tracep->fullBit(oldp+3110,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 4U))));
        tracep->fullBit(oldp+3111,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 5U))));
        tracep->fullBit(oldp+3112,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 6U))));
        tracep->fullBit(oldp+3113,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 7U))));
        tracep->fullBit(oldp+3114,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 8U))));
        tracep->fullBit(oldp+3115,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 9U))));
        tracep->fullBit(oldp+3116,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+3117,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 0xbU))));
        tracep->fullCData(oldp+3118,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                             << 0x17U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                               >> 9U)))),3);
        tracep->fullCData(oldp+3119,((0x3fU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                                << 0x1dU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                                  >> 3U)))),6);
        tracep->fullBit(oldp+3120,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 2U))));
        tracep->fullBit(oldp+3121,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+3122,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U])));
        tracep->fullBit(oldp+3123,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err_plus2));
        tracep->fullIData(oldp+3124,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__stored_addr_q),32);
        tracep->fullIData(oldp+3125,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q),32);
        tracep->fullBit(oldp+3126,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                          >> 1U))));
        tracep->fullBit(oldp+3127,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                          >> 2U))));
        tracep->fullCData(oldp+3128,((7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                            >> 3U))),3);
        tracep->fullBit(oldp+3129,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q))));
        tracep->fullBit(oldp+3130,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
        tracep->fullBit(oldp+3131,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          >> 5U))));
        tracep->fullIData(oldp+3132,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
        tracep->fullIData(oldp+3133,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
        tracep->fullBit(oldp+3134,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
        tracep->fullCData(oldp+3135,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
        tracep->fullCData(oldp+3136,((3U & ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                             ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                >> 2U)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
        tracep->fullBit(oldp+3137,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 2U))));
        tracep->fullBit(oldp+3138,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xfU))));
        tracep->fullBit(oldp+3139,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xcU))));
        tracep->fullCData(oldp+3140,((0xffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
        tracep->fullCData(oldp+3141,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q),2);
        tracep->fullCData(oldp+3142,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_q),2);
        tracep->fullCData(oldp+3143,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_q),2);
        tracep->fullBit(oldp+3144,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_q));
        tracep->fullBit(oldp+3145,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
        tracep->fullBit(oldp+3146,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
        tracep->fullBit(oldp+3147,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
        tracep->fullBit(oldp+3148,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
        tracep->fullCData(oldp+3149,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
        tracep->fullIData(oldp+3150,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q),24);
        tracep->fullBit(oldp+3151,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q));
        tracep->fullBit(oldp+3152,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q));
        tracep->fullBit(oldp+3153,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          >> 5U))));
        tracep->fullBit(oldp+3154,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          >> 4U))));
        tracep->fullCData(oldp+3155,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                            >> 2U))),2);
        tracep->fullBit(oldp+3156,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          >> 1U))));
        tracep->fullBit(oldp+3157,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
        tracep->fullIData(oldp+3158,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
        tracep->fullIData(oldp+3159,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
        tracep->fullCData(oldp+3160,((0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                              >> 0x1cU))),4);
        tracep->fullSData(oldp+3161,((0xfffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                                >> 0x10U))),12);
        tracep->fullBit(oldp+3162,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xfU))));
        tracep->fullBit(oldp+3163,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xeU))));
        tracep->fullBit(oldp+3164,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xdU))));
        tracep->fullBit(oldp+3165,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xcU))));
        tracep->fullBit(oldp+3166,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xbU))));
        tracep->fullBit(oldp+3167,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xaU))));
        tracep->fullBit(oldp+3168,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 9U))));
        tracep->fullCData(oldp+3169,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                            >> 6U))),3);
        tracep->fullBit(oldp+3170,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 5U))));
        tracep->fullBit(oldp+3171,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 4U))));
        tracep->fullBit(oldp+3172,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 3U))));
        tracep->fullBit(oldp+3173,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 2U))));
        tracep->fullCData(oldp+3174,((3U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q)),2);
        tracep->fullIData(oldp+3175,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
        tracep->fullIData(oldp+3176,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
        tracep->fullBit(oldp+3177,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                                          >> 2U))));
        tracep->fullCData(oldp+3178,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q))),2);
        tracep->fullIData(oldp+3179,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
        tracep->fullCData(oldp+3180,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),6);
        tracep->fullIData(oldp+3181,((0xfffffff8U | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),32);
        tracep->fullCData(oldp+3182,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q),3);
        tracep->fullIData(oldp+3183,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q),32);
        tracep->fullCData(oldp+3184,((7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                            >> 3U))),3);
        tracep->fullBit(oldp+3185,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                          >> 2U))));
        tracep->fullBit(oldp+3186,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                          >> 1U))));
        tracep->fullBit(oldp+3187,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q))));
        tracep->fullBit(oldp+3188,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q));
        tracep->fullCData(oldp+3189,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
        tracep->fullIData(oldp+3190,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
        tracep->fullCData(oldp+3191,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
        tracep->fullQData(oldp+3192,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
        tracep->fullQData(oldp+3194,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
        tracep->fullCData(oldp+3196,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q),6);
        tracep->fullBit(oldp+3197,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
        tracep->fullIData(oldp+3198,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q),32);
        tracep->fullBit(oldp+3199,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
        tracep->fullIData(oldp+3200,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q),32);
        tracep->fullBit(oldp+3201,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q));
        tracep->fullCData(oldp+3202,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                            >> 1U))),2);
        tracep->fullCData(oldp+3203,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
        tracep->fullCData(oldp+3204,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
        tracep->fullIData(oldp+3205,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
        tracep->fullBit(oldp+3206,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
        tracep->fullCData(oldp+3207,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev),2);
        tracep->fullBit(oldp+3208,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
        tracep->fullBit(oldp+3209,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
        tracep->fullCData(oldp+3210,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),6);
        tracep->fullQData(oldp+3211,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
        tracep->fullQData(oldp+3213,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
        tracep->fullQData(oldp+3215,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
        tracep->fullQData(oldp+3217,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
        tracep->fullQData(oldp+3219,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
        tracep->fullQData(oldp+3221,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
        tracep->fullQData(oldp+3223,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
        tracep->fullQData(oldp+3225,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
        tracep->fullQData(oldp+3227,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
        tracep->fullQData(oldp+3229,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
        tracep->fullQData(oldp+3231,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
        tracep->fullQData(oldp+3233,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
        tracep->fullQData(oldp+3235,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
        tracep->fullQData(oldp+3237,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
        tracep->fullQData(oldp+3239,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
        tracep->fullQData(oldp+3241,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
        tracep->fullQData(oldp+3243,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
        tracep->fullQData(oldp+3245,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
        tracep->fullQData(oldp+3247,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
        tracep->fullQData(oldp+3249,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
        tracep->fullQData(oldp+3251,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
        tracep->fullQData(oldp+3253,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
        tracep->fullQData(oldp+3255,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
        tracep->fullQData(oldp+3257,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
        tracep->fullQData(oldp+3259,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
        tracep->fullQData(oldp+3261,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
        tracep->fullQData(oldp+3263,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
        tracep->fullQData(oldp+3265,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
        tracep->fullQData(oldp+3267,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
        tracep->fullQData(oldp+3269,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
        tracep->fullQData(oldp+3271,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
        tracep->fullQData(oldp+3273,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
        tracep->fullCData(oldp+3275,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q),2);
        tracep->fullIData(oldp+3276,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0]),32);
        tracep->fullIData(oldp+3277,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[1]),32);
        tracep->fullBit(oldp+3278,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_req_int));
        tracep->fullBit(oldp+3279,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run));
        tracep->fullBit(oldp+3280,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
        tracep->fullCData(oldp+3281,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync),3);
        tracep->fullBit(oldp+3282,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync) 
                                          >> 2U))));
        tracep->fullCData(oldp+3283,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync))),2);
        tracep->fullQData(oldp+3284,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[0]),34);
        tracep->fullQData(oldp+3286,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[1]),34);
        tracep->fullQData(oldp+3288,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[2]),34);
        tracep->fullQData(oldp+3290,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[3]),34);
        tracep->fullBit(oldp+3292,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+3293,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+3294,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n));
        tracep->fullCData(oldp+3295,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_wptr__DOT__intq),3);
        tracep->fullCData(oldp+3296,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_sync),3);
        tracep->fullCData(oldp+3297,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__state_q),3);
        tracep->fullCData(oldp+3298,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__address_q),7);
        tracep->fullIData(oldp+3299,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__data_q),32);
        tracep->fullCData(oldp+3300,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_q),2);
        tracep->fullCData(oldp+3301,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q),4);
        tracep->fullCData(oldp+3302,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync),3);
        tracep->fullIData(oldp+3303,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dmi_rsp 
                                              >> 2U))),32);
        tracep->fullCData(oldp+3304,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dmi_rsp))),2);
        tracep->fullQData(oldp+3305,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dmi_rsp),34);
        tracep->fullBit(oldp+3307,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset));
        tracep->fullBit(oldp+3308,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr));
        tracep->fullBit(oldp+3309,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr));
        tracep->fullBit(oldp+3310,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr));
        tracep->fullCData(oldp+3311,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d),4);
        tracep->fullBit(oldp+3312,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir));
        tracep->fullBit(oldp+3313,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir));
        tracep->fullBit(oldp+3314,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir));
        tracep->fullCData(oldp+3315,((0x7fU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req 
                                                       >> 0x22U)))),7);
        tracep->fullCData(oldp+3316,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req 
                                                    >> 0x20U)))),2);
        tracep->fullIData(oldp+3317,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req)),32);
        tracep->fullBit(oldp+3318,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req_valid));
        tracep->fullQData(oldp+3319,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req),41);
        tracep->fullCData(oldp+3321,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr),3);
        tracep->fullBit(oldp+3322,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+3323,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr))),2);
        tracep->fullCData(oldp+3324,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi),3);
        tracep->fullBit(oldp+3325,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                          >> 2U))));
        tracep->fullCData(oldp+3326,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi))),2);
        tracep->fullCData(oldp+3327,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq),3);
        tracep->fullBit(oldp+3328,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x10U))));
        tracep->fullBit(oldp+3329,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q))));
        tracep->fullBit(oldp+3330,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)))));
        tracep->fullQData(oldp+3331,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q),41);
        tracep->fullCData(oldp+3333,((0x7fU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q 
                                                       >> 0x22U)))),7);
        tracep->fullIData(oldp+3334,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q 
                                              >> 2U))),32);
        tracep->fullCData(oldp+3335,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q))),2);
        tracep->fullCData(oldp+3336,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q),5);
        tracep->fullCData(oldp+3337,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q),5);
        tracep->fullIData(oldp+3338,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q),32);
        tracep->fullSData(oldp+3339,((0x3fffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                                 >> 0x12U))),14);
        tracep->fullBit(oldp+3340,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x11U))));
        tracep->fullBit(oldp+3341,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x10U))));
        tracep->fullBit(oldp+3342,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0xfU))));
        tracep->fullCData(oldp+3343,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+3344,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                            >> 0xaU))),2);
        tracep->fullCData(oldp+3345,((0x3fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                               >> 4U))),6);
        tracep->fullCData(oldp+3346,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q)),4);
        tracep->fullBit(oldp+3347,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q));
        tracep->fullBit(oldp+3348,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk));
        tracep->fullCData(oldp+3349,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray),3);
        tracep->fullBit(oldp+3350,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_rsp) 
                                          >> 1U))));
        tracep->fullBit(oldp+3351,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_rsp) 
                                          >> 1U))));
        tracep->fullBit(oldp+3352,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_rsp))));
        tracep->fullBit(oldp+3353,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_rsp))));
        tracep->fullBit(oldp+3354,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr));
        tracep->fullCData(oldp+3355,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr),3);
        tracep->fullBit(oldp+3356,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+3357,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))),2);
        tracep->fullBit(oldp+3358,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni));
        tracep->fullCData(oldp+3359,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr),3);
        tracep->fullBit(oldp+3360,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+3361,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr))),2);
        tracep->fullBit(oldp+3362,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access));
        tracep->fullBit(oldp+3363,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select));
        tracep->fullBit(oldp+3364,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty)))));
        tracep->fullBit(oldp+3365,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select));
        tracep->fullBit(oldp+3366,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select));
        tracep->fullBit(oldp+3367,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty));
        tracep->fullCData(oldp+3368,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__state_d),3);
        tracep->fullCData(oldp+3369,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__address_d),7);
        tracep->fullIData(oldp+3370,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__data_d),32);
        tracep->fullBit(oldp+3371,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_dmi_busy));
        tracep->fullCData(oldp+3372,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_d),2);
        tracep->fullIData(oldp+3373,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d),32);
        tracep->fullSData(oldp+3374,((0x3fffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                                 >> 0x12U))),14);
        tracep->fullBit(oldp+3375,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                          >> 0x11U))));
        tracep->fullBit(oldp+3376,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                          >> 0x10U))));
        tracep->fullBit(oldp+3377,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                          >> 0xfU))));
        tracep->fullCData(oldp+3378,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+3379,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                            >> 0xaU))),2);
        tracep->fullCData(oldp+3380,((0x3fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                               >> 4U))),6);
        tracep->fullCData(oldp+3381,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d)),4);
        tracep->fullBit(oldp+3382,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d));
        tracep->fullBit(oldp+3383,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbaddress_write_valid));
        tracep->fullBit(oldp+3384,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbdata_write_valid));
        tracep->fullCData(oldp+3385,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d 
                                               >> 0x18U))),8);
        tracep->fullIData(oldp+3386,((0xffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d)),24);
        tracep->fullIData(oldp+3387,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__resp_queue_data),32);
        tracep->fullSData(oldp+3388,((0x1ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                                >> 0x17U))),9);
        tracep->fullBit(oldp+3389,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x16U))));
        tracep->fullCData(oldp+3390,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                            >> 0x14U))),2);
        tracep->fullBit(oldp+3391,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x13U))));
        tracep->fullBit(oldp+3392,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x12U))));
        tracep->fullBit(oldp+3393,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x11U))));
        tracep->fullBit(oldp+3394,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x10U))));
        tracep->fullBit(oldp+3395,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xfU))));
        tracep->fullBit(oldp+3396,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xeU))));
        tracep->fullBit(oldp+3397,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xdU))));
        tracep->fullBit(oldp+3398,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xcU))));
        tracep->fullBit(oldp+3399,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xbU))));
        tracep->fullBit(oldp+3400,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xaU))));
        tracep->fullBit(oldp+3401,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 9U))));
        tracep->fullBit(oldp+3402,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 8U))));
        tracep->fullBit(oldp+3403,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 7U))));
        tracep->fullBit(oldp+3404,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 6U))));
        tracep->fullBit(oldp+3405,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 5U))));
        tracep->fullBit(oldp+3406,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 4U))));
        tracep->fullCData(oldp+3407,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus)),4);
        tracep->fullCData(oldp+3408,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                            >> 0x1dU))),3);
        tracep->fullCData(oldp+3409,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                               >> 0x18U))),5);
        tracep->fullSData(oldp+3410,((0x7ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                                >> 0xdU))),11);
        tracep->fullBit(oldp+3411,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                          >> 0xcU))));
        tracep->fullBit(oldp+3412,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                          >> 0xbU))));
        tracep->fullCData(oldp+3413,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                            >> 8U))),3);
        tracep->fullCData(oldp+3414,((0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                              >> 4U))),4);
        tracep->fullCData(oldp+3415,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs)),4);
        tracep->fullBit(oldp+3416,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_d));
        tracep->fullBit(oldp+3417,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned))));
        tracep->fullCData(oldp+3418,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned),2);
        tracep->fullBit(oldp+3419,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+3420,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+3421,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+3422,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+3423,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+3424,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1aU))));
        tracep->fullSData(oldp+3425,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                                >> 0x10U))),10);
        tracep->fullSData(oldp+3426,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                                >> 6U))),10);
        tracep->fullCData(oldp+3427,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                            >> 4U))),2);
        tracep->fullBit(oldp+3428,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 3U))));
        tracep->fullBit(oldp+3429,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 2U))));
        tracep->fullBit(oldp+3430,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 1U))));
        tracep->fullBit(oldp+3431,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol)));
        tracep->fullCData(oldp+3432,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__autoexecdata_idx),5);
        tracep->fullCData(oldp+3433,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_opcode),3);
        tracep->fullCData(oldp+3434,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_source),8);
        tracep->fullCData(oldp+3435,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_size),2);
        tracep->fullCData(oldp+3436,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullBit(oldp+3437,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+3438,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullCData(oldp+3439,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullBit(oldp+3440,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+3441,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+3442,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_req_pending));
        tracep->fullBit(oldp+3443,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+3444,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+3445,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+3446,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+3447,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+3448,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+3449,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+3450,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+3451,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullQData(oldp+3452,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux),64);
        tracep->fullBit(oldp+3454,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+3455,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+3456,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+3457,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+3458,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+3459,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+3460,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+3461,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+3462,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+3463,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_rsp_pending));
        tracep->fullCData(oldp+3464,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xbU))),2);
        tracep->fullBit(oldp+3465,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                          >> 0xaU))));
        tracep->fullCData(oldp+3466,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 8U))),2);
        tracep->fullCData(oldp+3467,((0xffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
        tracep->fullBit(oldp+3468,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid));
        tracep->fullSData(oldp+3469,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
        tracep->fullBit(oldp+3470,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3471,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3472,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3473,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3474,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3475,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3476,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3477,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3478,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o))));
        tracep->fullCData(oldp+3479,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xbU))),2);
        tracep->fullBit(oldp+3480,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                          >> 0xaU))));
        tracep->fullCData(oldp+3481,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 8U))),2);
        tracep->fullCData(oldp+3482,((0xffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
        tracep->fullBit(oldp+3483,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid));
        tracep->fullSData(oldp+3484,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
        tracep->fullBit(oldp+3485,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
        tracep->fullBit(oldp+3486,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+3487,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        tracep->fullBit(oldp+3488,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3489,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3490,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3491,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3492,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3493,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3494,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3495,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3496,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar))));
        tracep->fullCData(oldp+3497,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause),6);
        tracep->fullBit(oldp+3498,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ctrl_busy));
        tracep->fullIData(oldp+3499,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        tracep->fullBit(oldp+3500,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_if));
        tracep->fullBit(oldp+3501,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_cause));
        tracep->fullCData(oldp+3502,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__debug_cause),3);
        tracep->fullBit(oldp+3503,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__debug_csr_save));
        tracep->fullIData(oldp+3504,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n),32);
        tracep->fullBit(oldp+3505,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)));
        tracep->fullBit(oldp+3506,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause) 
                                          >> 5U))));
        tracep->fullIData(oldp+3507,((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)),32);
        tracep->fullBit(oldp+3508,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
        tracep->fullBit(oldp+3509,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
        tracep->fullBit(oldp+3510,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode));
        tracep->fullCData(oldp+3511,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                            >> 3U))),3);
        tracep->fullBit(oldp+3512,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          >> 2U))));
        tracep->fullBit(oldp+3513,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          >> 1U))));
        tracep->fullBit(oldp+3514,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        tracep->fullIData(oldp+3515,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
        tracep->fullBit(oldp+3516,(((2U > vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                     ? (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                     : 1U)));
        tracep->fullBit(oldp+3517,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          >> 2U))));
        tracep->fullBit(oldp+3518,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3519,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3520,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3521,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3522,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3523,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3524,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3525,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3526,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                 [0U]))));
        tracep->fullBit(oldp+3527,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3528,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3529,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3530,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3531,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3532,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3533,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3534,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3535,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                 [1U]))));
        tracep->fullBit(oldp+3536,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3537,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3538,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3539,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3540,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3541,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3542,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3543,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3544,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1
                                                 [2U]))));
        tracep->fullBit(oldp+3545,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3546,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3547,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3548,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3549,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3550,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3551,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3552,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3553,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                 [0U]))));
        tracep->fullBit(oldp+3554,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3555,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3556,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3557,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3558,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3559,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3560,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3561,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3562,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                 [1U]))));
        tracep->fullBit(oldp+3563,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3564,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3565,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3566,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3567,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3568,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3569,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3570,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3571,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+3572,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3573,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3574,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3575,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3576,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3577,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3578,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3579,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3580,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+3581,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3582,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3583,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3584,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3585,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3586,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3587,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3588,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3589,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o
                                                 [2U]))));
        tracep->fullBit(oldp+3590,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3591,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3592,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3593,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3594,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3595,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3596,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3597,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3598,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+3599,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3600,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3601,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3602,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3603,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3604,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3605,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3606,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3607,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+3608,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3609,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3610,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3611,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3612,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3613,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3614,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3615,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3616,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                 [2U]))));
        tracep->fullCData(oldp+3617,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hgrant),3);
        tracep->fullBit(oldp+3618,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3619,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3620,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3621,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3622,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3623,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3624,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3625,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3626,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o))));
        tracep->fullBit(oldp+3627,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o))));
        tracep->fullCData(oldp+3628,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hfifo_rspvalid),3);
        tracep->fullCData(oldp+3629,((0x3fU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                       >> 0x25U)))),8);
        tracep->fullBit(oldp+3630,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar))));
        tracep->fullBit(oldp+3631,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3632,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullIData(oldp+3634,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword),32);
        tracep->fullIData(oldp+3635,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                              >> 1U))),32);
        tracep->fullBit(oldp+3636,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
        tracep->fullQData(oldp+3637,(((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword)) 
                                      << 1U)),33);
        tracep->fullQData(oldp+3639,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
        tracep->fullBit(oldp+3641,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3642,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3643,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3644,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3645,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3646,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3647,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3648,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3649,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+3650,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3651,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3652,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3653,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3654,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3655,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3656,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3657,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3658,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+3659,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3660,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3661,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3662,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3663,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3664,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3665,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3666,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3667,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+3668,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3669,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3670,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3671,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3672,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3673,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3674,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3675,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3676,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+3677,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hgrant),2);
        tracep->fullBit(oldp+3678,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3679,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3680,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3681,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3682,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3683,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3684,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3685,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3686,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+3687,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3688,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3689,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3690,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3691,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3692,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3693,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3694,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3695,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+3696,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+3697,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3698,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3700,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3701,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3702,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3703,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3704,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3705,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3706,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3707,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3708,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+3709,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3710,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3711,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3712,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3713,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3714,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3715,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3716,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3717,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+3718,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+3719,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3720,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3722,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3723,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3724,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3725,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3726,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3727,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3728,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3729,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3730,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+3731,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3732,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3733,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3734,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3735,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3736,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3737,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3738,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3739,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+3740,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+3741,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3742,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3744,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3745,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3746,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3747,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3748,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3749,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3750,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3751,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3752,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+3753,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3754,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3755,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3756,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3757,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3758,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3759,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3760,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3761,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+3762,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+3763,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3764,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3766,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3767,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3768,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3769,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3770,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3771,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3772,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3773,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3774,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+3775,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3776,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3777,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3778,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3779,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3780,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3781,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3782,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3783,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                 [2U]))));
        tracep->fullBit(oldp+3784,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                 [2U]))));
        tracep->fullBit(oldp+3785,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3786,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                                   [2U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrsp_fifo_i
                                                                              [2U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3788,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3789,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3790,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3791,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3792,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3793,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3794,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3795,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3796,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                 [0U]))));
        tracep->fullBit(oldp+3797,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3798,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3799,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3800,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3801,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3802,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3803,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3804,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3805,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                 [1U]))));
        tracep->fullBit(oldp+3806,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3807,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3808,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3809,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3810,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3811,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3812,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3813,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3814,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                 [2U]))));
        tracep->fullBit(oldp+3815,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3816,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3817,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3818,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3819,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3820,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3821,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3822,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3823,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                 [3U]))));
        tracep->fullBit(oldp+3824,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3825,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3826,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3827,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3828,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3829,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3830,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3831,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3832,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                 [4U]))));
        tracep->fullBit(oldp+3833,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3834,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3835,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3836,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3837,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3838,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3839,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3840,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3841,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                 [5U]))));
        tracep->fullBit(oldp+3842,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3843,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3844,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [6U] 
                                                    >> 0x2dU)))),3);
    }
}
